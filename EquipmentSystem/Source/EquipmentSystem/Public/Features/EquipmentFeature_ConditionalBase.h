// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentFeature.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "EquipmentFeature_ConditionalBase.generated.h"

/**
 * 
 */
UCLASS(HideDropdown)
class EQUIPMENTSYSTEM_API UEquipmentFeature_ConditionalBase : public UEquipmentFeature
{
	GENERATED_BODY()
public:
	virtual void GetFeaturesConditional(const FGameplayTagContainer& FeatureTags, struct FEquipmentFeatureData& OutFeatures) const{};
	
protected:
	// True will use Tag Query instead of 
	UPROPERTY(EditAnywhere, Category = "Condition")
	bool bUseTagQuery = false;

	// Tag query to check if we should perform the action, true to perform.
	UPROPERTY(EditAnywhere, Category = "Condition", meta = (EditCondition = "bUseTagQuery", EditConditionHides))
	FGameplayTagQuery TagQuery;

	// Blocked tags, match any tags in the container to prevent the action.
	UPROPERTY(EditAnywhere, Category = "Condition", meta = (EditCondition = "!bUseTagQuery", EditConditionHides))
	FGameplayTagContainer BlockedTags;

	// Allowed tags, must match all tags in the container to perform the action, Empty to disable.
	UPROPERTY(EditAnywhere, Category = "Condition", meta = (EditCondition = "!bUseTagQuery", EditConditionHides))
	FGameplayTagContainer AllowedTags;
	
private:
	virtual void GetFeatures(const FGameplayTagContainer& FeatureTags, struct FEquipmentFeatureData& OutFeatures) const override final;
	
};
