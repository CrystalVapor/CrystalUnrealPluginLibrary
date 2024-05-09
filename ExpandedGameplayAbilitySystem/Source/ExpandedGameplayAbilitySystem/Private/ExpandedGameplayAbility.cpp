// Wrote by Crystal 2024


#include "ExpandedGameplayAbility.h"

#include "AbilitySystemComponent.h"
#include "ExpandedAbilitySystemComponent.h"


void UExpandedGameplayAbility::OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnAvatarSet(ActorInfo, Spec);
	TryActivateOnSpawnOrGranted(ActorInfo, Spec);
}

void UExpandedGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);
	TryActivateOnSpawnOrGranted(ActorInfo, Spec);
}

bool UExpandedGameplayAbility::CheckCost(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, FGameplayTagContainer* OptionalRelevantTags) const
{
	return Super::CheckCost(Handle, ActorInfo, OptionalRelevantTags) && CustomCheckCost(Handle, *ActorInfo);
}

void UExpandedGameplayAbility::ApplyCost(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	CustomApplyCost(Handle, *ActorInfo, ActivationInfo);
	Super::ApplyCost(Handle, ActorInfo, ActivationInfo);
}

void UExpandedGameplayAbility::TryActivateOnSpawnOrGranted(const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilitySpec& Spec)
{
	const bool bIsPredicting = (Spec.ActivationInfo.ActivationMode == EGameplayAbilityActivationMode::Predicting);
	// Try to activate if activation policy is on spawn.
	if (ActorInfo && !Spec.IsActive() && !bIsPredicting && (ActivationPolicy == EAbilityActivationPolicy::OnSpawnOrGranted))
	{
		UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get();
		const AActor* AvatarActor = ActorInfo->AvatarActor.Get();
		// If avatar actor is torn off or about to die, don't try to activate until we get the new one.
		if (ASC && AvatarActor && !AvatarActor->GetTearOff() && (AvatarActor->GetLifeSpan() <= 0.0f))
		{
			const bool bIsLocalExecution = (NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::LocalPredicted) || (NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::LocalOnly);
			const bool bIsServerExecution = (NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::ServerOnly) || (NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::ServerInitiated);

			const bool bClientShouldActivate = ActorInfo->IsLocallyControlled() && bIsLocalExecution;
			const bool bServerShouldActivate = ActorInfo->IsNetAuthority() && bIsServerExecution;

			if (bClientShouldActivate || bServerShouldActivate)
			{
				ASC->TryActivateAbility(Spec.Handle);
			}
		}
	}
}

void UExpandedGameplayAbility::LocallyExecuteGameplayCueOnOwner(const FGameplayTag GameplayCueTag,
	const FGameplayCueParameters GameplayCueParameters)
{
	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	UExpandedAbilitySystemComponent* ExpandedAbilitySystemComponent = Cast<UExpandedAbilitySystemComponent>(AbilitySystemComponent);
	if (ExpandedAbilitySystemComponent)
	{
		ExpandedAbilitySystemComponent->LocallyExecuteGameplayCueOnOwner(GameplayCueTag, GameplayCueParameters);
	}
}

void UExpandedGameplayAbility::LocallyAddGameplayCueOnOwner(const FGameplayTag GameplayCueTag,
	const FGameplayCueParameters GameplayCueParameters)
{
	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	UExpandedAbilitySystemComponent* ExpandedAbilitySystemComponent = Cast<UExpandedAbilitySystemComponent>(AbilitySystemComponent);
	if (ExpandedAbilitySystemComponent)
	{
		ExpandedAbilitySystemComponent->LocallyAddGameplayCueOnOwner(GameplayCueTag, GameplayCueParameters);
	}
}

void UExpandedGameplayAbility::LocallyRemoveGameplayCueOnOwner(const FGameplayTag GameplayCueTag)
{
	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	UExpandedAbilitySystemComponent* ExpandedAbilitySystemComponent = Cast<UExpandedAbilitySystemComponent>(AbilitySystemComponent);
	if (ExpandedAbilitySystemComponent)
	{
		ExpandedAbilitySystemComponent->LocallyRemoveGameplayCueOnOwner(GameplayCueTag);
	}
}

bool UExpandedGameplayAbility::CustomCheckCost_Implementation(const FGameplayAbilitySpecHandle Handle,
                                                              const FGameplayAbilityActorInfo& ActorInfo) const
{
	return true;
}

void UExpandedGameplayAbility::CustomApplyCost_Implementation(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo& ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	return;
}

UObject* UExpandedGameplayAbility::K2_GetSourceObject(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo& ActorInfo) const
{
	return GetSourceObject(Handle, &ActorInfo);
}

bool UExpandedGameplayAbility::IsInputPressed() const
{
	if(InstancingPolicy == EGameplayAbilityInstancingPolicy::NonInstanced)
	{
		return false;
	}
	return GetCurrentAbilitySpec()->InputPressed;
}

void UExpandedGameplayAbility::AddBatchGameplayCueParam_HitResult(const FGameplayTag BatchedCueTag,
	const FHitResult& HitResult)
{
	UExpandedAbilitySystemComponent* ASC = Cast<UExpandedAbilitySystemComponent>(GetAbilitySystemComponentFromActorInfo());
	if(ASC)
	{
		ASC->AddBatchGameplayCueParam_HitResult(BatchedCueTag, HitResult);
	}
}

void UExpandedGameplayAbility::TryActivateAbility(const FGameplayAbilitySpec& Spec)
{
	GetAbilitySystemComponentFromActorInfo()->TryActivateAbility(Spec.Handle);
}
