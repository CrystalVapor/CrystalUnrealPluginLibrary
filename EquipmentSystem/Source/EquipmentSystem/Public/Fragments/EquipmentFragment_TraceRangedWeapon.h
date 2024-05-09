// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentFragment_RangedWeapon.h"
#include "EquipmentFragment_TraceRangedWeapon.generated.h"

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentFragment_TraceRangedWeapon : public UEquipmentFragment_RangedWeapon
{
	GENERATED_BODY()

	virtual void HandleChildInsideInitialize(AEquipmentInstance* Instance) override;
};
