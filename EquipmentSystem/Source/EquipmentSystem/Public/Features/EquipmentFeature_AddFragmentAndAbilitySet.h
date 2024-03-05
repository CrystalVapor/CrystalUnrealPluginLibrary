// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentFeature_ConditionalBase.h"
#include "EquipmentFragment.h"
#include "ExpandedAbilitySet.h"
#include "EquipmentFeature_AddFragmentAndAbilitySet.generated.h"

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentFeature_AddFragmentAndAbilitySet : public UEquipmentFeature_ConditionalBase
{
	GENERATED_BODY()
public:
	virtual void GetFeaturesConditional(const FGameplayTagContainer& FeatureTags, FEquipmentFeatureData& OutFeatures) const override;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Fragment")
	TArray<TSubclassOf<UEquipmentFragment>> Fragments;
	UPROPERTY(EditDefaultsOnly, Category = "AbilitySet")
	TArray<TObjectPtr<UExpandedAbilitySet>> AbilitySets;
};
