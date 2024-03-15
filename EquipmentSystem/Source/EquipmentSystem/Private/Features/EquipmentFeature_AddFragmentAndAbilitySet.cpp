// Copyright 2024 CrystalVapor


#include "Features/EquipmentFeature_AddFragmentAndAbilitySet.h"

#include "EquipmentDefinition.h"

void UEquipmentFeature_AddFragmentAndAbilitySet::GetFeaturesConditional(const FGameplayTagContainer& FeatureTags,
                                                                        FEquipmentFeatureData& OutFeatures) const
{
	Super::GetFeaturesConditional(FeatureTags, OutFeatures);
	OutFeatures.FragmentClasses.Append(Fragments);
	OutFeatures.AbilityGrantSources.Append(AbilitySets);
}
