// Copyright CrystalVapor 2024, All rights reserved.


#include "Systems/EquipmentSystemGlobal.h"

#include "EquipmentSystem.h"
#include "Basics/EquipmentFeature.h"
#include "Basics/EquipmentInstance.h"
#include "Systems/EquipmentAssetManager.h"
#include "Utils/EquipmentSystemLogs.h"


//TMap<FGameplayTag, FEquipmentPropertyTagContainer> UEquipmentSystemGlobal::PropertyTagMap;
TMap<FName, FEquipmentPropertyTagContainer> UEquipmentSystemGlobal::PropertyNameMap;
#ifdef WITH_EDITORONLY_DATA
TMap<FName, FEquipmentAbilitySetRequirement> UEquipmentSystemGlobal::FeatureAbilityRequirements;
#endif

FEquipmentPropertyTagContainer::FEquipmentPropertyTagContainer(FGameplayTag InPropertyTag, FName InPropertyName,
                                                               const char* InFeatureName):PropertyTag(InPropertyTag),
                                                                                    PropertyName(InPropertyName)
{
	PropertyFeatureName = FName(InFeatureName);
	UEquipmentSystemGlobal::RegisterPropertyToManager(*this);
}

UEquipmentSystemGlobal* UEquipmentSystemGlobal::Get()
{
	return FEquipmentSystemModule::Get().GetEquipmentSystemGlobal();
}

FGameplayTag UEquipmentSystemGlobal::GetPropertyTag(const FName& PropertyName)
{
	FEquipmentPropertyTagContainer* TagContainer = PropertyNameMap.Find(PropertyName);
	return TagContainer?TagContainer->PropertyTag:FGameplayTag();
}

FName UEquipmentSystemGlobal::GetPropertyName(const FGameplayTag& PropertyTag)
{
	auto& PropertyTagMap = GetPropertyTagMap();
	FEquipmentPropertyTagContainer* TagContainer = PropertyTagMap.Find(PropertyTag);
	return TagContainer?TagContainer->PropertyName:FName();
}

FName UEquipmentSystemGlobal::GetPropertyFeatureName(const FGameplayTag& PropertyTag)
{
	auto& PropertyTagMap = GetPropertyTagMap();
	FEquipmentPropertyTagContainer* TagContainer = PropertyTagMap.Find(PropertyTag);
	return TagContainer?TagContainer->PropertyFeatureName:FName();
}

bool UEquipmentSystemGlobal::RegisterPropertyToManager(const FEquipmentPropertyTagContainer& PropertyTag)
{
	auto& PropertyTagMap = GetPropertyTagMap();
	if(PropertyTagMap.Contains(PropertyTag.PropertyTag))
	{
		checkNoEntry();
		return false;
	}
	PropertyTagMap.Add(PropertyTag.PropertyTag, PropertyTag);
	PropertyNameMap.Add(PropertyTag.PropertyName, PropertyTag);
	return true;
}

const FEquipmentPropertyModifier* UEquipmentSystemGlobal::GetPropertyModifier(const FName& FeatureName, const FName& ModifierName)
{
	UClass* FeatureClassPtr = UEquipmentSystemGlobal::Get()->GetEquipmentAssetManager()->GetFeatureClass(FeatureName);
	if(!FeatureClassPtr)
	{
		UE_LOG(LogEquipmentSystem, Warning, TEXT("Feature with name \"%s\" does not exist when trying getting modifier named \"%s\""), *FeatureName.ToString(), *ModifierName.ToString());
		return nullptr;
	}
	return FeatureClassPtr->GetDefaultObject<UEquipmentFeature>()->GetPropertyModifierOwnedByFeature(ModifierName);
}

const FEquipmentPropertyModifier* UEquipmentSystemGlobal::GetPropertyModifier(
	const FEquipmentPropertyModifierHandle& ModifierHandle)
{
	return GetPropertyModifier(ModifierHandle.FeatureName, ModifierHandle.ModifierName);
}

void UEquipmentSystemGlobal::RegisterAbilityRequirement(const FName& FeatureClassName,
                                                        const TSubclassOf<UEquipmentGameplayAbility>& AbilityClass)
{
	FEquipmentAbilitySetRequirement& Requirement = FeatureAbilityRequirements.FindOrAdd(FeatureClassName);
	Requirement.AddAbilityRequirement(AbilityClass);
}

void UEquipmentSystemGlobal::RegisterAttributeSetRequirement(const FName& FeatureClassName,
                                                             const TSubclassOf<UAttributeSet>& AttributeSetClass)
{
	FEquipmentAbilitySetRequirement& Requirement = FeatureAbilityRequirements.FindOrAdd(FeatureClassName);
	Requirement.AddAttributeSetRequirement(AttributeSetClass);
}

UClass* UEquipmentSystemGlobal::GetVisualActor(const FName& VisualActorName,
	const FEquipmentVisualActorSpecifier& VisualActorSpecifier)
{
	return nullptr;
}

UEquipmentAssetManager* UEquipmentSystemGlobal::GetEquipmentAssetManager()
{
	return EquipmentAssetManager;
}

TMap<FGameplayTag, FEquipmentPropertyTagContainer>& UEquipmentSystemGlobal::GetPropertyTagMap()
{
	static TMap<FGameplayTag, FEquipmentPropertyTagContainer> PropertyTagMap;
	return PropertyTagMap;
}

bool UEquipmentSystemGlobal::ValidateFeatureAbilityRequirements(const FName& FeatureName,
                                                                const TArray<UEquipmentAbilitySet*>& AbilitySets, TArray<FText>& OutMessages)
{
	const UClass* FeatureClass = UEquipmentSystemGlobal::Get()->GetEquipmentAssetManager()->GetFeatureClass(FeatureName);
	bool bResult = true;
	while(FeatureClass!=nullptr && FeatureClass != UEquipmentFeature::StaticClass())
	{
		const FName& CurrentFeatureName = FeatureClass->GetFName();
		const FEquipmentAbilitySetRequirement* Requirement = FeatureAbilityRequirements.Find(CurrentFeatureName);
		if(Requirement)
		{
			bResult &= Requirement->ValidateWithAbilitySets(AbilitySets, OutMessages);
		}
		FeatureClass = FeatureClass->GetSuperClass();
	}
	return bResult;
}

void UEquipmentSystemGlobal::Init()
{
	if(VisualActorPaths.Num() == 0)
	{
		VisualActorPaths.Add(TEXT("/Game"));
	}
	VisualActorPaths.Add(TEXT("/EquipmentSystem"));
	if(FeaturePaths.Num() == 0)
	{
		FeaturePaths.Add(TEXT("/Game"));
	}
	FeaturePaths.Add(TEXT("/EquipmentSystem"));
	if(!EquipmentAssetManager)
	{
		UClass* LoadedEquipmentAssetManagerClass = EquipmentAssetManagerClass.TryLoadClass<UObject>();
		if(!LoadedEquipmentAssetManagerClass)
		{
			LoadedEquipmentAssetManagerClass = UEquipmentAssetManager::StaticClass();
		}
		EquipmentAssetManager = NewObject<UEquipmentAssetManager>(this, LoadedEquipmentAssetManagerClass);
	}
	EquipmentAssetManager->Init();
}
