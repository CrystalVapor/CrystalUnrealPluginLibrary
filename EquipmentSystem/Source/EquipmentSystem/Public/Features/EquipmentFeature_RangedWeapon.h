// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Basics/EquipmentFeature.h"
#include "EquipmentFeature_RangedWeapon.generated.h"

class UCRRecoilPattern;
BEGIN_EQUIPMENT_PROPERTY_TAG_DECLARE(UEquipmentFeature_RangedWeapon)
	EQUIPMENT_DECLARE_PROPERTY_TAG(BulletsPerCartridge)
	EQUIPMENT_DECLARE_PROPERTY_TAG(MaxDamageRange)
	EQUIPMENT_DECLARE_PROPERTY_TAG(SpreadExponent)
	EQUIPMENT_DECLARE_PROPERTY_TAG(BulletTraceSweepRadius)
	EQUIPMENT_DECLARE_PROPERTY_TAG(EnemyPunchThrough)
	EQUIPMENT_DECLARE_PROPERTY_TAG(SpreadHeatCooldownDelay)
	EQUIPMENT_DECLARE_PROPERTY_TAG(MaxSpreadHeat)
    EQUIPMENT_DECLARE_PROPERTY_TAG(FireDelay)
	EQUIPMENT_DECLARE_PROPERTY_TAG(RecoilHeatCooldownDelay)
	EQUIPMENT_DECLARE_PROPERTY_TAG(HeatToSpreadCurve)
	EQUIPMENT_DECLARE_PROPERTY_TAG(HeatToHeatPerShotCurve)
	EQUIPMENT_DECLARE_PROPERTY_TAG(HeatToCooldownPerSecondCurve)
END_EQUIPMENT_PROPERTY_TAG_DECLARE()

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class EQUIPMENTSYSTEM_API UEquipmentFeature_RangedWeapon : public UEquipmentFeature
{
	GENERATED_BODY()
public:
	DECLARE_DELEGATE_RetVal(float , FGetRecoilHeatSpreadDelegate);
	UEquipmentFeature_RangedWeapon();
	float GetCurrentRecoilHeatSpread(){return GetRecoilHeatSpreadDelegate.IsBound()?GetRecoilHeatSpreadDelegate.Execute():0.f;};
	FGetRecoilHeatSpreadDelegate GetRecoilHeatSpreadDelegate;

	UPROPERTY(EditDefaultsOnly)
	float BulletsPerCartridge = 1.0f;

	UPROPERTY(EditDefaultsOnly)
	float MaxDamageRange = 10000.0f;

	UPROPERTY(EditDefaultsOnly)
	float SpreadExponent = 1.0f;

	UPROPERTY(EditDefaultsOnly)
	float BulletTraceSweepRadius = 0.0f;

	UPROPERTY(EditDefaultsOnly)
	float EnemyPunchThrough = 0.f;

	UPROPERTY(EditDefaultsOnly)
	float SpreadHeatCooldownDelay = 0.5f;

	UPROPERTY(EditDefaultsOnly)
	float MaxSpreadHeat = 100.f;

	UPROPERTY(EditDefaultsOnly)
	float FireDelay = 0.2f;

	UPROPERTY(EditDefaultsOnly)
	float RecoilHeatCooldownDelay = 0.5f;

	UPROPERTY(EditDefaultsOnly)
	FRuntimeFloatCurve HeatToSpreadCurve;

	UPROPERTY(EditDefaultsOnly)
	FRuntimeFloatCurve HeatToHeatPerShotCurve;

	UPROPERTY(EditDefaultsOnly)
	FRuntimeFloatCurve HeatToCooldownPerSecondCurve;

	UPROPERTY(EditDefaultsOnly)
	UCRRecoilPattern* RecoilPattern;
};
