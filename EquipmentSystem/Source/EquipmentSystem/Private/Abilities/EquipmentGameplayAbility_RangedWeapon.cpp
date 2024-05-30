// Copyright 2024 CrystalVapor

#include "Abilities/EquipmentGameplayAbility_RangedWeapon.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "Basics/EquipmentInstance.h"
#include "ExpandedTargetData.h"
#include "Features/EquipmentFeature_RangedWeapon.h"
#include "GameFramework/PlayerController.h"

void UEquipmentGameplayAbility_RangedWeapon::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                                             const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                                             const FGameplayEventData* TriggerEventData)
{
	UEquipmentFeature_RangedWeapon* RangedWeaponFeature = GetAssociatedRangedWeaponFeature();
	if(RangedWeaponFeature)
	{
	}
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UEquipmentGameplayAbility_RangedWeapon::EndAbility(const FGameplayAbilitySpecHandle Handle,
                                                        const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                                        bool bReplicateEndAbility, bool bWasCancelled)
{
	UEquipmentFeature_RangedWeapon* RangedWeaponFeature = GetAssociatedRangedWeaponFeature();
	if(RangedWeaponFeature)
	{
	}
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

UEquipmentFeature_RangedWeapon* UEquipmentGameplayAbility_RangedWeapon::GetAssociatedRangedWeaponFeature()
{
	AEquipmentInstance* EquipmentInstance = GetEquipmentInstance();
	if (EquipmentInstance)
	{
		return EquipmentInstance->GetFeature<UEquipmentFeature_RangedWeapon>(AssociatedRangedWeaponFeatureClass);
	}
	return nullptr;
}

FVector UEquipmentGameplayAbility_RangedWeapon::VRandConeNormalDistribution(const FVector& Dir, const float ConeHalfAngleRad, const float Exponent)
{
	if (ConeHalfAngleRad > 0.f)
	{
		const float ConeHalfAngleDegrees = FMath::RadiansToDegrees(ConeHalfAngleRad);

		// consider the cone a concatenation of two rotations. one "away" from the center line, and another "around" the circle
		// apply the exponent to the away-from-center rotation. a larger exponent will cluster points more tightly around the center
		const float FromCenter = FMath::Pow(FMath::FRand(), Exponent);
		const float AngleFromCenter = FromCenter * ConeHalfAngleDegrees;
		const float AngleAround = FMath::FRand() * 360.0f;

		FRotator Rot = Dir.Rotation();
		FQuat DirQuat(Rot);
		FQuat FromCenterQuat(FRotator(0.0f, AngleFromCenter, 0.0f));
		FQuat AroundQuat(FRotator(0.0f, 0.0, AngleAround));
		FQuat FinalDirectionQuat = DirQuat * AroundQuat * FromCenterQuat;
		FinalDirectionQuat.Normalize();

		return FinalDirectionQuat.RotateVector(FVector::ForwardVector);
	}
	else
	{
		return Dir.GetSafeNormal();
	}
}

FTransform UEquipmentGameplayAbility_RangedWeapon::GetTargetingSourceTransform(APawn* SourcePawn,
	ERangedWeaponTargetingSource Source) const
{
	// actually we will only use the CameraTowardsFocus...
	// so just return the camera location and rotation
	AController* SourcePawnController = SourcePawn->GetController();

	FVector CamLoc = FVector(ForceInit);
	FRotator CamRot = FRotator(ForceInit);
	if (SourcePawnController)
	{
		APlayerController* PlayerController = Cast<APlayerController>(SourcePawnController);
		if(PlayerController)
		{
			PlayerController->GetPlayerViewPoint(CamLoc, CamRot);
		}
		else
		{
			CamLoc = GetAvatarTargetingSourceLocation();
			CamRot = SourcePawnController->GetControlRotation();
		}

		FVector AimDir = CamRot.Vector().GetSafeNormal();
		FVector AimStart = CamLoc;

		if(PlayerController)
		{
			// As Player, the camera probably is not in the center of the pawn / weapon
			// so we need to adjust the StartTrace to the center of the pawn
			FVector RealCenter = GetAvatarTargetingSourceLocation();
			FVector Offset = RealCenter - CamLoc;
			// this will move the AimStart to the center we want
			AimStart = AimStart + (Offset|AimDir)*AimDir;
		}
		return FTransform(CamRot, AimStart);
	}
	return FTransform();
}

FVector UEquipmentGameplayAbility_RangedWeapon::GetAvatarTargetingSourceLocation() const
{
	// Use Pawn's location as a base
	APawn* const AvatarPawn = Cast<APawn>(GetAvatarActorFromActorInfo());
	check(AvatarPawn);

	const FVector SourceLoc = AvatarPawn->GetActorLocation();
	const FQuat SourceRot = AvatarPawn->GetActorQuat();

	FVector TargetingSourceLocation = SourceLoc;

	//@TODO: Add an offset from the weapon instance and adjust based on pawn crouch/aiming/etc...

	return TargetingSourceLocation;
}

bool UEquipmentGameplayAbility_RangedWeapon::IsLastBulletHitResult(FGameplayAbilityTargetDataHandle& DataHandle,
	int32 Index)
{
	int32 NextIndex = Index + 1;
	int32 DataNum = UAbilitySystemBlueprintLibrary::GetDataCountFromTargetData(DataHandle);
	if(DataNum<=NextIndex)
	{
		return true;
	}
	int32 CurrentHitResultBulletIndex = FGameplayAbilityTargetData_HitResultWithInt::GetIntValue(DataHandle, Index);
	int32 NextHitResultBulletIndex = FGameplayAbilityTargetData_HitResultWithInt::GetIntValue(DataHandle, NextIndex);
	// we've reused this field as the bullet index
	if(CurrentHitResultBulletIndex!=NextHitResultBulletIndex)
	{
		return true;
	}
	return false;
}