// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EquipmentFeatureManager.generated.h"

class UEquipmentFeature;
class UObjectLibrary;
/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentFeatureManager : public UObject
{
	GENERATED_BODY()
public:
	static UEquipmentFeatureManager* Get();
	void Init();
	void InitFeatureLibrary();
	void BuildFeatureMapping(const TArray<FAssetData>& AssetDatas);
	UClass* GetFeatureClass(const FName& FeatureName) const;
	UEquipmentFeature* GetFeatureCDO(const FName& FeatureName) const;
protected:
	UPROPERTY()
	UObjectLibrary* FeatureLibrary = nullptr;
	TMap<FName, FSoftObjectPath> FeatureClassMap;
};
