// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "ExpandedAbilitySet.h"
#include "EquipmentAbilitySet.generated.h"

class UEquipmentFeature;
/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentAbilitySet : public UExpandedAbilitySet
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<UEquipmentFeature>> RequiredEquipmentFeatures;
};
