// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Utils/EquipmentSystemTypes.h"
#include "EquipmentAssetManager.generated.h"

class UObjectLibrary;
class AEquipmentVisualActor;
struct FEquipmentVisualActorSpecifier;

struct FEquipmentVisualActorLibraryData
{
	FEquipmentVisualActorSpecifier VisualActorSpecifier;
	FSoftObjectPath VisualActorPath;
};

struct FEquipmentVisualActorLibraryDataContainer
{
	FEquipmentVisualActorLibraryDataContainer(const FName& InVisualActorName):VisualActorName(InVisualActorName){};
	FName VisualActorName;
	TArray<FEquipmentVisualActorLibraryData> VisualActorData;
};

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentAssetManager : public UObject
{
	GENERATED_BODY()
public:
	void Init();
	void InitVisualActorLibrary();
	void InitFeatureLibrary();
	void BuildVisualActorMapping(const TArray<FAssetData>& AssetDatas);
	void BuildFeatureMapping(const TArray<FAssetData>& AssetDatas);
	UClass* GetVisualActorClass(const FName& VisualActorName, const FEquipmentVisualActorSpecifier& VisualActorSpecifier) const;
	UClass* GetFeatureClass(const FName& FeatureName) const;
protected:
	UPROPERTY()
	UObjectLibrary* VisualActorLibrary = nullptr;
	UPROPERTY()
	UObjectLibrary* FeatureLibrary = nullptr;
	
	TMap<FName, FEquipmentVisualActorLibraryDataContainer> VisualActorClassMap;
	TMap<FName, FSoftObjectPath> FeatureClassMap; 
};
