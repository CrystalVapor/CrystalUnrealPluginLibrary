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
	// if we use tag query to check if we should perform the action? False will use simple tag check.
	UPROPERTY(EditAnywhere, Category = "Condition")
	bool bUseTagQuery = false;

	// If we use Allowed Tag to check if we should perform the action? False will considered as we always matched all allowed tags.
	UPROPERTY(EditAnywhere, Category = "Condition", meta = (InlineEditConditionToggle))
	bool bUseAllowedTag = false;

	// Tag query to check if we should perform the action, true to perform.
	UPROPERTY(EditAnywhere, meta = (EditCondition = "bUseTagQuery", EditConditionHides), Category = "Condition")
	FGameplayTagQuery TagQuery;

	// Blocked tags, match any tags in the container to prevent the action.
	UPROPERTY(EditAnywhere, Category = "Condition")
	FGameplayTagContainer BlockedTags;

	// Allowed tags, must match all tags in the container to perform the action.
	UPROPERTY(EditAnywhere, Category = "Condition", meta = (EditCondition = "bUseAllowedTag"))
	FGameplayTagContainer AllowedTags;
private:
	virtual void GetFeatures(const FGameplayTagContainer& FeatureTags, struct FEquipmentFeatureData& OutFeatures) const override final;
	
};
