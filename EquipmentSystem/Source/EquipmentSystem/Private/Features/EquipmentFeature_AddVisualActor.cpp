// Copyright CrystalVapor 2024, All rights reserved.


#include "Features/EquipmentFeature_AddVisualActor.h"

#include "EquipmentDefinition.h"

void UEquipmentFeature_AddVisualActor::GetFeaturesConditional(const FGameplayTagContainer& FeatureTags,
                                                              FEquipmentFeatureData& OutFeatures) const
{
	Super::GetFeaturesConditional(FeatureTags, OutFeatures);
	OutFeatures.VisualActorClasses.Append(VisualActorClasses);
}
