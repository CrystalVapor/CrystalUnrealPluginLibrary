// Copyright 2024 CrystalVapor


#include "EquipmentDefinition.h"

void UEquipmentDefinition::GetFeatureData(const FGameplayTagContainer& FeatureTags,
	FEquipmentFeatureData& OutFeatureData) const
{
	for(auto& Feature:Features)
	{
		Feature->GetFeatures(FeatureTags, OutFeatureData);
	}
}
