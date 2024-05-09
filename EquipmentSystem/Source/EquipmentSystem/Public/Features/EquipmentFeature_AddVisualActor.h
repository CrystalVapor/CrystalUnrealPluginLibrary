// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "EquipmentFeature_ConditionalBase.h"
#include "EquipmentFeature_AddVisualActor.generated.h"

class AEquipmentVisualActor;
/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentFeature_AddVisualActor : public UEquipmentFeature_ConditionalBase
{
	GENERATED_BODY()
public:
	virtual void GetFeaturesConditional(const FGameplayTagContainer& FeatureTags, FEquipmentFeatureData& OutFeatures) const override;
protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<AEquipmentVisualActor>> VisualActorClasses;
};
