// Copyright CrystalVapor 2024, All rights reserved.


#include "Utils/EquipmentFeatureFactory.h"

#include "Basics/EquipmentFeature.h"
#include "Systems/EquipmentFeatureManager.h"

UEquipmentFeature* UEquipmentFeatureFactory::CreateFeature(UObject* Owner, const FName& FeatureName)
{
	const UEquipmentFeatureManager* FeatureManager = UEquipmentFeatureManager::Get();
	UClass* ConstructedFeatureClass = FeatureManager->GetFeatureClass(FeatureName);
	if(ConstructedFeatureClass)
	{
		UEquipmentFeature* NewFeature = NewObject<UEquipmentFeature>(Owner, ConstructedFeatureClass);
	    NewFeature->PropertyModifiersOwned.Empty();
		return NewFeature;
	}
	// If the feature class is not found, try to get the CDO of the feature
	// this could happen when we add a custom feature on runtime.
	UEquipmentFeature* FeatureCDO = FeatureManager->GetFeatureCDO(FeatureName);
	if(FeatureCDO)
	{
		UEquipmentFeature* NewFeature = NewObject<UEquipmentFeature>(Owner, FeatureCDO->GetClass(), NAME_None, RF_NoFlags, FeatureCDO);
		NewFeature->PropertyModifiersOwned.Empty();
		return NewFeature;
	}
	return nullptr;
}
