// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentFeature.h"
#include "EquipmentFragment.h"
#include "ExpandedAbilitySet.h"
#include "Engine/DataAsset.h"
#include "EquipmentDefinition.generated.h"

class UEquipmentManagerComponent;
class AEquipmentInstance;
DECLARE_MULTICAST_DELEGATE_TwoParams(FEquipmentFeatureDelegate, AEquipmentInstance*, UEquipmentManagerComponent*);

USTRUCT()
struct FEquipmentFeatureData
{
	GENERATED_BODY()
	UPROPERTY()
	TArray<TSubclassOf<UEquipmentFragment>> FragmentClasses;
	UPROPERTY()
	TArray<TObjectPtr<UExpandedAbilitySet>> AbilitySets;
	
	FEquipmentFeatureDelegate OnFragmentInitialized;
};

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentDefinition : public UDataAsset
{
	GENERATED_BODY()
public:
	void GetFeatureData(const FGameplayTagContainer& FeatureTags, FEquipmentFeatureData& OutFeatureData) const;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default")
	FString EquipmentName;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced, Category = "Features")
	TArray<TObjectPtr<UEquipmentFeature>> Features;
};
