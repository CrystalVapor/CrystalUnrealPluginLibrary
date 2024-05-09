// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentFragment.h"
#include "EquipmentFragment_RangedWeapon.generated.h"

class UCRRecoilPattern;
FRAGMENT_DECLARE_PROPERTY_TAG(Damage);
FRAGMENT_DECLARE_PROPERTY_TAG(FireDelay);
FRAGMENT_DECLARE_PROPERTY_TAG(MaxDamageRange);
FRAGMENT_DECLARE_PROPERTY_TAG(WeaponSweepRadius);
FRAGMENT_DECLARE_PROPERTY_TAG(BulletsPerCartridge);
FRAGMENT_DECLARE_PROPERTY_TAG(MaxRecoilHeat);
FRAGMENT_DECLARE_PROPERTY_TAG(SpreadExponent);
FRAGMENT_DECLARE_PROPERTY_TAG(EnemyPunchThrough);
FRAGMENT_DECLARE_PROPERTY_TAG(RecoilHeatCoolDownDelay);

FRAGMENT_DECLARE_PROPERTY_TAG(HeatToSpreadCurve);
FRAGMENT_DECLARE_PROPERTY_TAG(HeatToHeatPerShotCurve);
FRAGMENT_DECLARE_PROPERTY_TAG(HeatToCoolDownPerSecondCurve);

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentFragment_RangedWeapon : public UEquipmentFragment
{
	GENERATED_BODY()
	
public:

	DECLARE_DELEGATE_RetVal(float ,FGetCurrentRecoilSpreadAngleDelegate);
	
	virtual float GetCurrentRecoilHeatSpread() const;

	/**
	 *  Floats
	 */
	UPROPERTY(EditAnywhere, Category = "Basic")
	float Damage = 10000.0f;
	FRAGMENT_DECLARE_FLOAT_PROPERTY_GETTER(Damage);

	UPROPERTY(EditAnywhere, Category = "Basic")
	float FireDelay = 10000.0f;
	FRAGMENT_DECLARE_FLOAT_PROPERTY_GETTER(FireDelay);
	
	UPROPERTY(EditAnywhere, Category = "TraceData")
	float MaxDamageRange = 10000.0f;
	FRAGMENT_DECLARE_FLOAT_PROPERTY_GETTER(MaxDamageRange);

	UPROPERTY(EditAnywhere, Category = "TraceData")
	float WeaponSweepRadius = 0.0f;
	FRAGMENT_DECLARE_FLOAT_PROPERTY_GETTER(WeaponSweepRadius);

	UPROPERTY(EditAnywhere, Category = "Basic")
	float BulletsPerCartridge = 1.0f;
	FRAGMENT_DECLARE_FLOAT_PROPERTY_GETTER(BulletsPerCartridge);

	UPROPERTY(EditAnywhere, Category = "Recoil")
	float MaxRecoilHeat = 1.0f;
	FRAGMENT_DECLARE_FLOAT_PROPERTY_GETTER(MaxRecoilHeat);

	// Spread exponent, affects how tightly shots will cluster around the center line
	// when the weapon has spread (non-perfect accuracy). Higher values will cause shots
	// to be closer to the center (default is 1.0 which means uniformly within the spread range)
	UPROPERTY(EditAnywhere, Category = "Recoil")
	float SpreadExponent = 1.0f;
	FRAGMENT_DECLARE_FLOAT_PROPERTY_GETTER(SpreadExponent);

	// How many enemies can a bullet pass through before stopping
	// default is 0 which means will stop at the first enemy hit
	UPROPERTY(EditAnywhere, Category = "TraceData")
	float EnemyPunchThrough = 0.0f;
	FRAGMENT_DECLARE_FLOAT_PROPERTY_GETTER(EnemyPunchThrough);
	
	// How long time should we delay before starting to cool down the heat
	UPROPERTY(EditAnywhere, Category = "Recoil")
	float RecoilHeatCoolDownDelay = 0.0f;
	FRAGMENT_DECLARE_FLOAT_PROPERTY_GETTER(RecoilHeatCoolDownDelay);
	
	/*
	 *  Curves
	 */
	UPROPERTY(EditAnywhere, Category = "Recoil")
	FRuntimeFloatCurve HeatToSpreadCurve;
	FRAGMENT_DECLARE_CURVE_PROPERTY_GETTER(HeatToSpreadCurve);
	
	UPROPERTY(EditAnywhere, Category = "Recoil")
	FRuntimeFloatCurve HeatToHeatPerShotCurve;
	FRAGMENT_DECLARE_CURVE_PROPERTY_GETTER(HeatToHeatPerShotCurve);
	
	UPROPERTY(EditAnywhere, Category = "Recoil")
	FRuntimeFloatCurve HeatToCoolDownPerSecondCurve;
	FRAGMENT_DECLARE_CURVE_PROPERTY_GETTER(HeatToCoolDownPerSecondCurve);
	
	/*
	 * Other members
	 */
	// Property Pattern to use, empty means no pattern
	UPROPERTY(EditAnywhere, Category = "Recoil")
	UCRRecoilPattern* RecoilPattern = nullptr;

	FSimpleFloatGetter GetRecoilHeatSpreadDelegate;
protected:
	virtual void HandleChildInsideInitialize(AEquipmentInstance* Instance) override;

	virtual void HandleChildFinialInitialize(AEquipmentInstance* Instance) override;

};
