// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "Basics/EquipmentGameplayAbility.h"
#include "EquipmentGameplayAbility_RangedWeapon.generated.h"

class APawn;
class UEquipmentFragment_RangedWeapon;

USTRUCT()
struct FRangedWeaponFiringInput
{
	GENERATED_BODY()
	FVector AimDir;
	FVector StartLocation;
};

UENUM()
enum class ERangedWeaponTargetingSource
{
	// From the player's camera towards camera focus
	CameraTowardsFocus,
	// From the pawn's center, in the pawn's orientation
	PawnForward,
	// From the pawn's center, oriented towards camera focus
	PawnTowardsFocus,
	// From the weapon's muzzle or location, in the pawn's orientation
	WeaponForward,
	// From the weapon's muzzle or location, towards camera focus
	WeaponTowardsFocus,
	// Custom blueprint-specified source location
	Custom
};
/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentGameplayAbility_RangedWeapon : public UEquipmentGameplayAbility
{
	GENERATED_BODY()
public:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	// Get Associated Ranged Weapon Fragment
	UEquipmentFeature_RangedWeapon* GetAssociatedRangedWeaponFeature();

	static FVector VRandConeNormalDistribution(const FVector& Dir, const float ConeHalfAngleRad, const float Exponent);
	
	FTransform GetTargetingSourceTransform(APawn* SourcePawn, ERangedWeaponTargetingSource Source) const;

	FVector GetAvatarTargetingSourceLocation() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsLastBulletHitResult(UPARAM(ref) FGameplayAbilityTargetDataHandle& DataHandle, int32 Index);

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Equipment")
	TSubclassOf<UEquipmentFeature_RangedWeapon> AssociatedRangedWeaponFeatureClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAnimMontage* FireAnimationMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float FireAnimationPlayRate = 1.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (Categories = "GameplayCue"))
	FGameplayTag FireGameplayCueTag;

	/**
	 * Effect in this class will be treated as "instant damage", 
	 * the effect will be applied to target with level of Damage Property.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UGameplayEffect> InstantDamageEffectClass;
};
