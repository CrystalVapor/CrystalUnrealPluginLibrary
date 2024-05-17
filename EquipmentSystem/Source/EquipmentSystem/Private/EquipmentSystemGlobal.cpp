// Copyright CrystalVapor 2024, All rights reserved.


#include "EquipmentSystemGlobal.h"

#include "EquipmentFeature.h"
#include "EquipmentSystemLogs.h"

FName UEquipmentSystemGlobal::CurrentFeatureName = FName();
TMap<FGameplayTag, FEquipmentPropertyTagContainer> UEquipmentSystemGlobal::PropertyTagMap;
TMap<FName, FEquipmentPropertyTagContainer> UEquipmentSystemGlobal::PropertyNameMap;
TMap<FName, UClass*> UEquipmentSystemGlobal::RegisteredFeatures;

FEquipmentPropertyTagContainer::FEquipmentPropertyTagContainer(FGameplayTag InPropertyTag, FName InPropertyName,
                                                               FName InFeatureName):PropertyTag(InPropertyTag),
                                                                                    PropertyName(InPropertyName),
                                                                                    PropertyFeatureName(InFeatureName)
{
	UEquipmentSystemGlobal::RegisterPropertyToManager(*this);
}

void UEquipmentSystemGlobal::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	if(VisualActorManager == nullptr && VisualActorManagerClass.IsValid())
	{
		UClass* VisualActorManagerClassPtr = LoadClass<UObject>(nullptr, *VisualActorManagerClass.ToString());
		if(VisualActorManagerClassPtr)
		{
			VisualActorManager = NewObject<UEquipmentVisualActorManager>(this, VisualActorManagerClassPtr);
		}
	}

	if(VisualActorManager == nullptr)
	{
		VisualActorManager = NewObject<UEquipmentVisualActorManager>(this);
	}

	VisualActorManager->Initialize();
	
	CollectAllFeatures();
	
}

FGameplayTag UEquipmentSystemGlobal::GetPropertyTag(FName PropertyName)
{
	FEquipmentPropertyTagContainer* TagContainer = PropertyNameMap.Find(PropertyName);
	return TagContainer?TagContainer->PropertyTag:FGameplayTag();
}

FName UEquipmentSystemGlobal::GetPropertyName(FGameplayTag PropertyTag)
{
	FEquipmentPropertyTagContainer* TagContainer = PropertyTagMap.Find(PropertyTag);
	return TagContainer?TagContainer->PropertyName:FName();
}

FName UEquipmentSystemGlobal::GetPropertyFeatureName(FGameplayTag PropertyTag)
{
	FEquipmentPropertyTagContainer* TagContainer = PropertyTagMap.Find(PropertyTag);
	return TagContainer?TagContainer->PropertyFeatureName:FName();
}

bool UEquipmentSystemGlobal::RegisterPropertyToManager(FEquipmentPropertyTagContainer& PropertyTag)
{
	if(PropertyTagMap.Contains(PropertyTag.PropertyTag))
	{
		checkNoEntry();
		return false;
	}
	PropertyTagMap.Emplace(PropertyTag.PropertyTag, PropertyTag);
	PropertyNameMap.Emplace(PropertyTag.PropertyName, PropertyTag);
	return true;
}

FName& UEquipmentSystemGlobal::SetCurrentFeatureName(FName NewFeatureName)
{
	CurrentFeatureName = NewFeatureName;
	return NewFeatureName;
}

const FEquipmentPropertyModifier* UEquipmentSystemGlobal::GetPropertyModifier(FName FeatureName, FName ModifierName)
{
	UClass** FeatureClassPtr2 = RegisteredFeatures.Find(FeatureName);
	if(!FeatureClassPtr2)
	{
		UE_LOG(LogEquipmentSystem, Warning, TEXT("Feature with name \"%s\" does not exist when trying getting modifier named \"%s\""), *FeatureName.ToString(), *ModifierName.ToString());
		return nullptr;
	}
	const UClass* FeatureClassPtr = *FeatureClassPtr2;
	return FeatureClassPtr->GetDefaultObject<UEquipmentFeature>()->GetPropertyModifierOwnedByFeature(ModifierName);
}

void UEquipmentSystemGlobal::CollectAllFeatures()
{
	RegisteredFeatures.Empty();
	UClass* FeatureStaticClass = UEquipmentFeature::StaticClass();
	TArray<UClass*> FeaturesClasses;
	GetDerivedClasses(FeatureStaticClass, FeaturesClasses);
	for(auto FeatureClassPtr: FeaturesClasses)
	{
		const FName FeatureName = FeatureClassPtr->GetDefaultObject<UEquipmentFeature>()->GetFeatureName();
		RegisteredFeatures.Add(FeatureName, FeatureClassPtr);
	}
}
