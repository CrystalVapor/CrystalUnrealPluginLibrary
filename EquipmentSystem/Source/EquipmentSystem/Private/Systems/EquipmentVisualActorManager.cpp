// Copyright CrystalVapor 2024, All rights reserved.


#include "Systems/EquipmentVisualActorManager.h"

#include "EquipmentSystem.h"
#include "Basics/EquipmentFeature.h"
#include "Basics/EquipmentVisualActor.h"
#include "Engine/ObjectLibrary.h"
#include "Systems/EquipmentSystemGlobal.h"
#include "Utils/EquipmentSystemLogs.h"

UEquipmentVisualActorManager* UEquipmentVisualActorManager::Get()
{
	return UEquipmentSystemGlobal::Get()->GetEquipmentVisualActorManager();
}

void UEquipmentVisualActorManager::Init()
{
	InitVisualActorLibrary();
}

void UEquipmentVisualActorManager::InitVisualActorLibrary()
{
	const TArray<FString>& Paths = FEquipmentSystemModule::Get().GetEquipmentSystemGlobal()->VisualActorPaths;
	VisualActorLibrary = UObjectLibrary::CreateLibrary(AEquipmentVisualActor::StaticClass(), true, GIsEditor);
	if(GIsEditor)
	{
		VisualActorLibrary->bIncludeOnlyOnDiskAssets = false;
	}
	VisualActorLibrary->AddToRoot();
	VisualActorLibrary->LoadBlueprintAssetDataFromPaths(Paths);
	TArray<FAssetData> AssetDatas;
	VisualActorLibrary->GetAssetDataList(AssetDatas);
	BuildVisualActorMapping(AssetDatas);
}

void UEquipmentVisualActorManager::BuildVisualActorMapping(const TArray<FAssetData>& AssetDatas)
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

UClass* UEquipmentVisualActorManager::GetVisualActorClass(const FName& VisualActorName,
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
