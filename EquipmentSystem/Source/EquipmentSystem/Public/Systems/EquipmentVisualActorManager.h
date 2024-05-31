// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Utils/EquipmentSystemTypes.h"
#include "EquipmentVisualActorManager.generated.h"

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
class EQUIPMENTSYSTEM_API UEquipmentVisualActorManager : public UObject
{
	GENERATED_BODY()
public:
	static UEquipmentVisualActorManager* Get();
	void Init();
	void InitVisualActorLibrary();
	void BuildVisualActorMapping(const TArray<FAssetData>& AssetDatas);
	UClass* GetVisualActorClass(const FName& VisualActorName, const FEquipmentVisualActorSpecifier& VisualActorSpecifier) const;
protected:
	UPROPERTY()
	UObjectLibrary* VisualActorLibrary = nullptr;
	TMap<FName, FEquipmentVisualActorLibraryDataContainer> VisualActorClassMap;
};
