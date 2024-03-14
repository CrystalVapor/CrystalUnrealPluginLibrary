// Copyright 2024 CrystalVapor


#include "Features/EquipmentFeature_ConditionalBase.h"


void UEquipmentFeature_ConditionalBase::GetFeatures(const FGameplayTagContainer& FeatureTags,
	FEquipmentFeatureData& OutFeatures) const
{
	Super::GetFeatures(FeatureTags, OutFeatures);
	if(!bUseTagQuery)
	{
		bool bHasAllAllowedTags = true;
		bool bHasAnyBlockedTags = false;
		if(FeatureTags.HasAnyExact(BlockedTags))
		{
			bHasAnyBlockedTags = true;
		}
		if(!AllowedTags.IsEmpty() && !FeatureTags.HasAllExact(AllowedTags))
		{
			bHasAllAllowedTags = false;
		}
		if(bHasAllAllowedTags && !bHasAnyBlockedTags)
		{
			GetFeaturesConditional(FeatureTags, OutFeatures);
		}
	}
	else
	{
		bool bHasMatchedTagQuery = false;
		if(FeatureTags.MatchesQuery(TagQuery))
		{
			bHasMatchedTagQuery = true;
		}
		if(bHasMatchedTagQuery)
		{
			GetFeaturesConditional(FeatureTags, OutFeatures);
		}
	}
}
