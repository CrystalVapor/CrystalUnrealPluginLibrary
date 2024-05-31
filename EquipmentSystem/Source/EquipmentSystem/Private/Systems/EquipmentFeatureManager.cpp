// Copyright CrystalVapor 2024, All rights reserved.


#include "Systems/EquipmentFeatureManager.h"

#include "EquipmentSystem.h"
#include "Basics/EquipmentFeature.h"
#include "Engine/ObjectLibrary.h"
#include "Utils/EquipmentSystemLogs.h"

UEquipmentFeatureManager* UEquipmentFeatureManager::Get()
{
	return UEquipmentSystemGlobal::Get()->GetEquipmentFeatureManager();
}

void UEquipmentFeatureManager::Init()
{
	InitFeatureLibrary();
}

void UEquipmentFeatureManager::InitFeatureLibrary()
{
	const TArray<FString>& Paths = FEquipmentSystemModule::Get().GetEquipmentSystemGlobal()->FeaturePaths;
	FeatureLibrary = UObjectLibrary::CreateLibrary(UEquipmentFeature::StaticClass(), true, GIsEditor);
	if(GIsEditor)
	{
		FeatureLibrary->bIncludeOnlyOnDiskAssets = false;
	}
	FeatureLibrary->AddToRoot();
	FeatureLibrary->LoadBlueprintAssetDataFromPaths(Paths);
	TArray<FAssetData> AssetDatas;
	FeatureLibrary->GetAssetDataList(AssetDatas);
	BuildFeatureMapping(AssetDatas);
}

void UEquipmentFeatureManager::BuildFeatureMapping(const TArray<FAssetData>& AssetDatas)
{
	for(const FAssetData& AssetData:AssetDatas)
	{
		// Add _C to the end of the feature name to fit the naming convention of the generated class
		const FName FeatureName = FName(AssetData.AssetName.ToString()+"_C");
		const FSoftObjectPath GeneratedPath = AssetData.GetSoftObjectPath();
		FeatureClassMap.Add(FeatureName, GeneratedPath);
	}
}


UClass* UEquipmentFeatureManager::GetFeatureClass(const FName& FeatureName) const
{
	const FSoftObjectPath* Path = FeatureClassMap.Find(FeatureName);
	if(Path == nullptr)
	{
		UE_LOG(LogEquipmentSystem, Warning, TEXT("Feature Name %s not found in Feature Class Map"), *FeatureName.ToString());
		return nullptr;
	}
	return Cast<UBlueprint>(Path->TryLoad())->GeneratedClass;
}

UEquipmentFeature* UEquipmentFeatureManager::GetFeatureCDO(const FName& FeatureName) const
{
	return GetFeatureClass(FeatureName)->GetDefaultObject<UEquipmentFeature>();
}
