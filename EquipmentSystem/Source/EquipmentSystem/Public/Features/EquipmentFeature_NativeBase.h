// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "EquipmentFeature_ConditionalBase.h"
#include "ExpandedAbilityGrantSource.h"
#include "EquipmentFeature_NativeBase.generated.h"

class UEquipmentNativeAbilityGrantSource:public UObject, public IExpandedAbilityGrantSource
{
	
};

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentFeature_NativeBase : public UEquipmentFeature_ConditionalBase
{
	GENERATED_BODY()
public:
	virtual void GetFeaturesConditional(const FGameplayTagContainer& FeatureTags, FEquipmentFeatureData& OutFeatures) const override;
protected:
	
};
