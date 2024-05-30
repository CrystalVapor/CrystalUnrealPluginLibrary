// Copyright CrystalVapor 2024, All rights reserved.


#include "Systems/EquipmentAssetManager.h"

#include "EquipmentSystem.h"
#include "Basics/EquipmentFeature.h"
#include "Basics/EquipmentVisualActor.h"
#include "Engine/ObjectLibrary.h"
#include "Systems/EquipmentSystemGlobal.h"
#include "Utils/EquipmentSystemLogs.h"

void UEquipmentAssetManager::Init()
{
	InitVisualActorLibrary();
	InitFeatureLibrary();
}

void UEquipmentAssetManager::InitVisualActorLibrary()
{
	const TArray<FString>& Paths = FEquipmentSystemModule::Get().GetEquipmentSystemGlobal()->VisualActorPaths;
	VisualActorLibrary = UObjectLibrary::CreateLibrary(AEquipmentVisualActor::StaticClass(), true, GIsEditor);
	if(GIsEditor)
	{
		//VisualActorLibrary->bIncludeOnlyOnDiskAssets = false;
	}
	VisualActorLibrary->AddToRoot();
	VisualActorLibrary->LoadBlueprintAssetDataFromPaths(Paths);
	TArray<FAssetData> AssetDatas;
	VisualActorLibrary->GetAssetDataList(AssetDatas);
	BuildVisualActorMapping(AssetDatas);
}

void UEquipmentAssetManager::InitFeatureLibrary()
{
	const TArray<FString>& Paths = FEquipmentSystemModule::Get().GetEquipmentSystemGlobal()->FeaturePaths;
	FeatureLibrary = UObjectLibrary::CreateLibrary(UEquipmentFeature::StaticClass(), true, GIsEditor);
	if(GIsEditor)
	{
		//FeatureLibrary->bIncludeOnlyOnDiskAssets = false;
	}
	FeatureLibrary->AddToRoot();
	FeatureLibrary->LoadBlueprintAssetDataFromPaths(Paths);
	TArray<FAssetData> AssetDatas;
	FeatureLibrary->GetAssetDataList(AssetDatas);
	BuildFeatureMapping(AssetDatas);
}

void UEquipmentAssetManager::BuildFeatureMapping(const TArray<FAssetData>& AssetDatas)
{
	for(const FAssetData& AssetData:AssetDatas)
	{
		const FName FeatureName = AssetData.AssetName;
		const FSoftObjectPath GeneratedPath = AssetData.GetSoftObjectPath();
		FeatureClassMap.Add(FeatureName, GeneratedPath);
	}
}

UClass* UEquipmentAssetManager::GetFeatureClass(const FName& FeatureName) const
{
	const FSoftObjectPath* Path = FeatureClassMap.Find(FeatureName);
	if(Path == nullptr)
	{
		UE_LOG(LogEquipmentSystem, Warning, TEXT("Feature Name %s not found in Feature Class Map"), *FeatureName.ToString());
		return nullptr;
	}
	return Cast<UBlueprint>(Path->TryLoad())->GeneratedClass;
}

void UEquipmentAssetManager::BuildVisualActorMapping(const TArray<FAssetData>& AssetDatas)
{
	const FName VisualActorName_PropertyName = GET_MEMBER_NAME_CHECKED(AEquipmentVisualActor, VisualActorName);
	const FName VisualActorSpecifier_PropertyName = GET_MEMBER_NAME_CHECKED(AEquipmentVisualActor, VisualActorSpecifier);
	for(const FAssetData& AssetData:AssetDatas)
	{
		const FName& VAName = AssetData.GetTagValueRef<FName>(VisualActorName_PropertyName);
		if(!VisualActorClassMap.Contains(VAName))
		{
			VisualActorClassMap.Add(VAName, FEquipmentVisualActorLibraryDataContainer(VAName));
		}
		TArray<FEquipmentVisualActorLibraryData>& Container = VisualActorClassMap[VAName].VisualActorData;
		const FSoftObjectPath GeneratedPath = AssetData.GetSoftObjectPath();
		FAssetDataTagMapSharedView::FFindTagResult Res = AssetData.TagsAndValues.FindTag(VisualActorSpecifier_PropertyName);
		FEquipmentVisualActorSpecifier Specifier;
		if(Res.IsSet())
        {
         	FString SpecifierExported = Res.GetValue();
         	FEquipmentVisualActorSpecifier::StaticStruct()->ImportText(*SpecifierExported, &Specifier, nullptr, PPF_None, nullptr, FEquipmentVisualActorSpecifier::StaticStruct()->GetName());
        }
		Container.Add({Specifier, GeneratedPath});
	}
	while(0);
}

UClass* UEquipmentAssetManager::GetVisualActorClass(const FName& VisualActorName,
	const FEquipmentVisualActorSpecifier& VisualActorSpecifier) const
{
	const FEquipmentVisualActorLibraryDataContainer* Container = VisualActorClassMap.Find(VisualActorName);
	if(Container == nullptr)
	{
		UE_LOG(LogEquipmentSystem, Warning, TEXT("Visual Actor Name %s not found in Visual Actor Class Map"), *VisualActorName.ToString());
		return nullptr;
	}
	for(const FEquipmentVisualActorLibraryData& Data:Container->VisualActorData)
	{
		if(Data.VisualActorSpecifier == VisualActorSpecifier)
		{
			UBlueprint* Src = Cast<UBlueprint>(Data.VisualActorPath.TryLoad());
			return Src->GeneratedClass;
		}
	}
	return Cast<UBlueprint>(Container->VisualActorData[0].VisualActorPath.TryLoad())->GeneratedClass;
}
