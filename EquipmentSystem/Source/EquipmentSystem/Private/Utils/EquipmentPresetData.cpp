// Copyright CrystalVapor 2024, All rights reserved.


#include "Utils/EquipmentPresetData.h"

#include "Basics/EquipmentFeature.h"
#include "Basics/EquipmentManagerComponent.h"

int32 UEquipmentPresetData::CreateAsNewInstance(UEquipmentManagerComponent* TargetManager, bool ReplicatedEquipped)
{
	if(!(TargetManager->GetOwner()->HasAuthority()))
	{
		return -1;
	}
	int32 NewInstanceID = TargetManager->ServerOnly_CreateInstance();
	ApplyToInstance(NewInstanceID, TargetManager);
	if(ReplicatedEquipped)
	{
		TargetManager->EquipEquipment(NewInstanceID);
	}
	return NewInstanceID;
}

void UEquipmentPresetData::ApplyToInstance(int32 InstanceId, UEquipmentManagerComponent* TargetManager)
{
	TArray<FName> FeatureNames;
	for(const auto& FeatureClass:Features)
	{
		const UEquipmentFeature* FeatureCDO = FeatureClass->GetDefaultObject<UEquipmentFeature>();
		FeatureNames.Add(FeatureCDO->GetFeatureName());
	}
	TargetManager->AddFeatures(InstanceId, FeatureNames);
}
