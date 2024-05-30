// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "EquipmentFeature_RangedWeapon.h"
#include "Abilities/EquipmentGameplayAbility_TraceRangedWeapon.h"
#include "EquipmentFeature_TraceRangedWeapon.generated.h"


UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentFeature_TraceRangedWeapon : public UEquipmentFeature_RangedWeapon
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UEquipmentFeature_TraceRangedWeapon();
	ADD_ABILITY_REQUIREMENT(UEquipmentFeature_TraceRangedWeapon, UEquipmentGameplayAbility_TraceRangedWeapon);
};
