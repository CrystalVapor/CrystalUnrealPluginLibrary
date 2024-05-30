// Copyright 2024 CrystalVapor


#include "Abilities/EquipmentGameplayAbility_TraceRangedWeapon.h"

#include "Utils/EquipmentTraceChannels.h"
#include "ExpandedTargetData.h"
#include "Features/EquipmentFeature_TraceRangedWeapon.h"

namespace EquipmentSystemConsoleVariables
{
	static float DrawBulletTraceDuration = 0.0f;
	static FAutoConsoleVariableRef CVarDrawBulletTraceDuration(
		TEXT("EquipmentSystem.DrawBulletTraceDuration"),
		DrawBulletTraceDuration,
		TEXT("How long to draw bullet traces for. 0 means never turn off. Useful for debugging."),
		ECVF_Default
	);

	static float DrawBulletHitDuration = 0.0f;
	static FAutoConsoleVariableRef CVarDrawBulletHitDuration(
		TEXT("EquipmentSystem.DrawBulletHitDuration"),
		DrawBulletHitDuration,
		TEXT("How long to draw bullet hit impacts for. 0 means never turn off. Useful for debugging."),
		ECVF_Default
	);

	static float DrawBulletHitRadius = 5.0f;
	static FAutoConsoleVariableRef CVarDrawBulletHitRadius(
		TEXT("EquipmentSystem.DrawBulletHitRadius"),
		DrawBulletHitRadius,
		TEXT("The radius of the bullet hit impact debug sphere."),
		ECVF_Default
	);
}

void UEquipmentGameplayAbility_TraceRangedWeapon::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();
	check(ASC);

	OnTargetDataReadyCallbackDelegateHandle = ASC->AbilityTargetDataSetDelegate(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey()).AddUObject(this, &ThisClass::OnLineTraceTargetDataPrepared);
	
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UEquipmentGameplayAbility_TraceRangedWeapon::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateEndAbility, bool bWasCancelled)
{
	if (IsEndAbilityValid(Handle, ActorInfo))
	{
		if (ScopeLockCount > 0)
		{
			WaitingToExecute.Add(FPostLockDelegate::CreateUObject(this, &ThisClass::EndAbility, Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled));
			return;
		}

		UAbilitySystemComponent* MyAbilityComponent = CurrentActorInfo->AbilitySystemComponent.Get();
		check(MyAbilityComponent);

		// When ability ends, consume target data and remove delegate
		MyAbilityComponent->AbilityTargetDataSetDelegate(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey()).Remove(OnTargetDataReadyCallbackDelegateHandle);
		MyAbilityComponent->ConsumeClientReplicatedTargetData(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey());

		Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	}
}

UEquipmentFeature_TraceRangedWeapon* UEquipmentGameplayAbility_TraceRangedWeapon::GetTraceRangedWeaponFeature()
{
	return GetEquipmentFeature<UEquipmentFeature_TraceRangedWeapon>();
}

int32 UEquipmentGameplayAbility_TraceRangedWeapon::FindFirstPawnHitIndex(const TArray<FHitResult>& Hits, int32 StartIndex)
{
	for (int32 Idx = StartIndex; Idx < Hits.Num(); ++Idx)
	{
		const FHitResult& CurHitResult = Hits[Idx];
		if (CurHitResult.HitObjectHandle.DoesRepresentClass(APawn::StaticClass()))
		{
			// If we hit a pawn, we're good
			return Idx;
		}
		else
		{
			AActor* HitActor = CurHitResult.HitObjectHandle.FetchActor();
			if ((HitActor != nullptr) && (HitActor->GetAttachParentActor() != nullptr) && (Cast<APawn>(HitActor->GetAttachParentActor()) != nullptr))
			{
				// If we hit something attached to a pawn, we're good
				return Idx;
			}
		}
	}

	return INDEX_NONE;
}

void UEquipmentGameplayAbility_TraceRangedWeapon::AddAditionalTraceIgnoreActors(FCollisionQueryParams& Params)
{
	if (AActor* Avatar = GetAvatarActorFromActorInfo())
	{
		// Ignore any actors attached to the avatar doing the shooting
		TArray<AActor*> AttachedActors;
		Avatar->GetAttachedActors(/*out*/ AttachedActors);
		Params.AddIgnoredActors(AttachedActors);
	}
}

const ECollisionChannel UEquipmentGameplayAbility_TraceRangedWeapon::DetermineTraceChannel(
	FCollisionQueryParams QueryParams, bool bIsSimulated)
{
	return EquipmentTraceChannel_Weapon;
}

void UEquipmentGameplayAbility_TraceRangedWeapon::StartLineTrace()
{
	check(CurrentActorInfo);

	AActor* AvatarActor = CurrentActorInfo->AvatarActor.Get();
	check(AvatarActor);

	UAbilitySystemComponent* MyAbilityComponent = CurrentActorInfo->AbilitySystemComponent.Get();
	check(MyAbilityComponent);

	FScopedPredictionWindow ScopedPrediction(MyAbilityComponent, CurrentActivationInfo.GetActivationPredictionKey());
	TArray<FHitResult> OutHits;
	PerformLocalTargeting(OutHits);

	FGameplayAbilityTargetDataHandle TargetData;
	if(OutHits.Num() > 0)
	{
		for(int i = 0;i<OutHits.Num();i++)
		{
			FHitResult& Hit = OutHits[i];
			FGameplayAbilityTargetData_HitResultWithInt* NewData = new FGameplayAbilityTargetData_HitResultWithInt(Hit, Hit.MyItem);
			TargetData.Add(NewData);
		}
	}

	if(!HasAuthority(&CurrentActivationInfo))
	{
		if(IsLocallyControlled())
		{
			// we're client, replicate the target data to the server
			MyAbilityComponent->ServerSetReplicatedTargetData(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey(), TargetData, FGameplayTag(), MyAbilityComponent->ScopedPredictionKey);
			OnLineTraceTargetDataPrepared(TargetData, FGameplayTag());
		}
	}
	else
	{
		// we're server
		OnLineTraceTargetDataPrepared(TargetData, FGameplayTag());
	}
}


void UEquipmentGameplayAbility_TraceRangedWeapon::OnLineTraceTargetDataPrepared(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ApplicationTag)
{
	APawn* AvatarPawn = Cast<APawn>(GetAvatarActorFromActorInfo());

	FScopedPredictionWindow PredictionWindow(GetAbilitySystemComponentFromActorInfo());

	FGameplayAbilityTargetDataHandle CurrentTargetDataHandle(MoveTemp(const_cast<FGameplayAbilityTargetDataHandle&>(Data)));
	
	if(HasAuthority(&CurrentActivationInfo))
	{
		FRangedWeaponFiringInput FiringInput;
		GetCurrentFiringInput(AvatarPawn, FiringInput);
		if(!ServerValidateTargetData(FiringInput,CurrentTargetDataHandle))
		{
			CancelAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true);
		}
	}
	if(!CommitAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo))
	{
		K2_EndAbility();
	}
	OnLineTraceTargetDataReady(CurrentTargetDataHandle);
}

void UEquipmentGameplayAbility_TraceRangedWeapon::GetCurrentFiringInput(APawn* const AvatarPawn, FRangedWeaponFiringInput& FiringInput)
{
	FTransform TargetTransform = GetTargetingSourceTransform(AvatarPawn, ERangedWeaponTargetingSource::CameraTowardsFocus);
	FiringInput.AimDir = TargetTransform.GetRotation().GetForwardVector();
	FiringInput.StartLocation = TargetTransform.GetLocation();
}

void UEquipmentGameplayAbility_TraceRangedWeapon::PerformLocalTargeting(TArray<FHitResult>& OutHits)
{
	APawn* const AvatarPawn = Cast<APawn>(GetAvatarActorFromActorInfo());
	if(!AvatarPawn)
	{
		return;
	}
	FRangedWeaponFiringInput FiringInput;
	GetCurrentFiringInput(AvatarPawn, FiringInput);
#ifdef ENABLE_DRAW_DEBUG
	if(EquipmentSystemConsoleVariables::DrawBulletTraceDuration>0.f)
	{
		DrawDebugLine(GetWorld(), FiringInput.StartLocation, FiringInput.StartLocation + FiringInput.AimDir * 100.0f, FColor::Yellow, false, EquipmentSystemConsoleVariables::DrawBulletTraceDuration, 0, 1.0f);
	}
#endif
	TraceBulletsInCartridge(FiringInput, OutHits);
}

void UEquipmentGameplayAbility_TraceRangedWeapon::TraceBulletsInCartridge(const FRangedWeaponFiringInput& InputData,
	TArray<FHitResult>& OutHits)
{
	UEquipmentFeature_TraceRangedWeapon* TraceRangedWeaponFeature = GetTraceRangedWeaponFeature();
	const float BulletsPerCartridge = TraceRangedWeaponFeature->BulletsPerCartridge;
	const float MaxDamageRange = TraceRangedWeaponFeature->MaxDamageRange;
	const float CurrentSpread = TraceRangedWeaponFeature->GetCurrentRecoilHeatSpread();
	const float SpreadMultiplier = 1.0f;
	const float SpreadAngleInDegree = CurrentSpread * SpreadMultiplier;
	const float HalfSpreadAngleInRadians = FMath::DegreesToRadians(SpreadAngleInDegree * 0.5f);
	const float SpreadExponent = TraceRangedWeaponFeature->SpreadExponent;
	const float BulletTraceSweepRadius = TraceRangedWeaponFeature->BulletTraceSweepRadius;

	for(int32 BulletIdx = 0; BulletIdx < BulletsPerCartridge; ++BulletIdx)
	{
		const FVector BulletDir = VRandConeNormalDistribution(InputData.AimDir, HalfSpreadAngleInRadians, SpreadExponent);
		const FVector EndTrace = InputData.StartLocation + BulletDir * MaxDamageRange;
		TArray<FHitResult> BulletHits;
		FHitResult Impact = DoSingleBulletTrace(InputData.StartLocation, EndTrace, BulletTraceSweepRadius, false, BulletHits);

		AActor* HitActor = Impact.GetActor();

#ifdef ENABLE_DRAW_DEBUG
		if(HitActor)
		{

			if(EquipmentSystemConsoleVariables::DrawBulletHitDuration > 0.0f)
			{
				DrawDebugPoint(GetWorld(), Impact.Location, EquipmentSystemConsoleVariables::DrawBulletHitRadius, FColor::Red, false, EquipmentSystemConsoleVariables::DrawBulletHitDuration);
			}
		}
#endif

		for(auto& BulletHit:BulletHits)
		{
			// reuse MyItem to store the bullet index 
			BulletHit.MyItem = BulletIdx;
		}
		
		OutHits.Append(BulletHits);
		
		// Make sure there's always an entry in OutHits so the direction can be used for tracers, etc...
		if (OutHits.Num() == 0)
		{
			if (!Impact.bBlockingHit)
			{
				// Locate the fake 'impact' at the end of the trace
				Impact.Location = EndTrace;
				Impact.ImpactPoint = EndTrace;
			}

			OutHits.Add(Impact);
		}
	}
}

FHitResult UEquipmentGameplayAbility_TraceRangedWeapon::DoSingleBulletTrace(const FVector& StartTrace,
	const FVector& EndTrace, float SweepRadius, bool bIsSimulated, TArray<FHitResult>& OutHits)
{
#if ENABLE_DRAW_DEBUG
	if(EquipmentSystemConsoleVariables::DrawBulletTraceDuration > 0.0f)
	{
		DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor::Red, false, EquipmentSystemConsoleVariables::DrawBulletTraceDuration, 0, 1.0f);
	}
#endif
	// firstly, do a line trace
	FHitResult Impact = WeaponTrace(StartTrace, EndTrace, 0.0f, bIsSimulated, OutHits);
	// if we have a sweep radius, do an external sweep trace
	if(SweepRadius > 0.0f)
	{
		TArray<FHitResult> SweepHits;
		WeaponTrace(StartTrace, EndTrace, SweepRadius, bIsSimulated, SweepHits);
		int32 FirstPawnHitIndex = FindFirstPawnHitIndex(SweepHits);
		if(SweepHits.IsValidIndex(FirstPawnHitIndex))
		{
			bool bUseSweepHits = true;
			for (int32 Idx = 0; Idx < FirstPawnHitIndex; ++Idx)
			{
			   const FHitResult& CurHitResult = SweepHits[Idx];

			   auto Pred = [&CurHitResult](const FHitResult& Other)
			   {
				   return Other.HitObjectHandle == CurHitResult.HitObjectHandle;
			   };
			   // An object appears in the ray trace path before the pawn
			   // which means this bullet will be blocked
			   if (CurHitResult.bBlockingHit && OutHits.ContainsByPredicate(Pred))
			   {
				   bUseSweepHits = false;
				   break;
			   }
			}

			if (bUseSweepHits)
			{
			   OutHits = SweepHits;
			}
		}
	}
	
	Impact = FilterSingleBulletPunchThrough(OutHits, Impact);
	
	return Impact;
}

FHitResult UEquipmentGameplayAbility_TraceRangedWeapon::FilterSingleBulletPunchThrough(
	TArray<FHitResult>& OutHits, FHitResult Impact)
{
	UEquipmentFeature_RangedWeapon* RangedWeaponFeature = GetAssociatedRangedWeaponFeature();
	const float EnemyPunchThrough = RangedWeaponFeature->EnemyPunchThrough;
	int32 EnemyPunchThroughLeft = EnemyPunchThrough;
	TArray<FHitResult> FilteredHits;
	int32 NextPawnHitIndex = FindFirstPawnHitIndex(OutHits);
	int32 LastPawnHitIndex = NextPawnHitIndex;
	while(NextPawnHitIndex!=INDEX_NONE&&EnemyPunchThroughLeft>=0)
	{
		FilteredHits.Add(OutHits[NextPawnHitIndex]);
		EnemyPunchThroughLeft--;
		LastPawnHitIndex = NextPawnHitIndex;
		NextPawnHitIndex = FindFirstPawnHitIndex(OutHits,NextPawnHitIndex+1);
	}
	if(NextPawnHitIndex == INDEX_NONE)
	{
		if(OutHits.IsValidIndex(LastPawnHitIndex+1))
		{
			FilteredHits.Add(OutHits[LastPawnHitIndex+1]);
		}
	}
	if(FilteredHits.Num() == 0)
	{
		FilteredHits.Add(Impact);
	}
	else
	{
		Impact = FilteredHits.Last();
	}
	OutHits = FilteredHits;
	
	return Impact;
}

FHitResult UEquipmentGameplayAbility_TraceRangedWeapon::WeaponTrace(const FVector& StartTrace, const FVector& EndTrace,
                                                                    float SweepRadius, bool bIsSimulated, TArray<FHitResult>& OutHitResults)
{
	TArray<FHitResult> HitResults;
	FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(EquipmentSystemTrace), true, GetAvatarActorFromActorInfo());
	TraceParams.bReturnPhysicalMaterial = true;

	AddAditionalTraceIgnoreActors(TraceParams);
	const ECollisionChannel TraceChannel = DetermineTraceChannel(TraceParams, bIsSimulated);

	if (SweepRadius > 0.0f)
	{
		GetWorld()->SweepMultiByChannel(HitResults, StartTrace, EndTrace, FQuat::Identity, TraceChannel, FCollisionShape::MakeSphere(SweepRadius), TraceParams);
	}
	else
	{
		GetWorld()->LineTraceMultiByChannel(HitResults, StartTrace, EndTrace, TraceChannel, TraceParams);
	}

	FHitResult Hit(ForceInit);
	if (HitResults.Num() > 0)
	{
		// Filter the output list to prevent multiple hits on the same actor;
		// this is to prevent a single bullet dealing damage multiple times to
		// a single actor if using an overlap trace
		for (FHitResult& CurHitResult : HitResults)
		{
			auto Pred = [&CurHitResult](const FHitResult& Other)
			{
				return Other.HitObjectHandle == CurHitResult.HitObjectHandle;
			};

			if (!OutHitResults.ContainsByPredicate(Pred))
			{
				OutHitResults.Add(CurHitResult);
			}
		}

		Hit = OutHitResults.Last();
	}
	else
	{
		Hit.TraceStart = StartTrace;
		Hit.TraceEnd = EndTrace;
		Hit.ImpactPoint = EndTrace;
	}

	return Hit;
}

bool UEquipmentGameplayAbility_TraceRangedWeapon::ServerValidateTargetData(FRangedWeaponFiringInput& InputData,
	const FGameplayAbilityTargetDataHandle& Data)
{
	// TODO implement this
	return true;
}
