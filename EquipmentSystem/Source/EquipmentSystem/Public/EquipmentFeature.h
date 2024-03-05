// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EquipmentFeature.generated.h"

/**
 * 
 */
UCLASS(DefaultToInstanced, EditInlineNew, Abstract, HideDropdown, Blueprintable)
class EQUIPMENTSYSTEM_API UEquipmentFeature : public UObject
{
	GENERATED_BODY()
public:
	virtual void GetFeatures(const FGameplayTagContainer& FeatureTags, struct FEquipmentFeatureData& OutFeatures) const {};
};
