// Copyright CrystalVapor 2024, All rights reserved.


#include "Utils/EquipmentPresetData.h"

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
	TargetManager->AddFeatures(InstanceId, Features);
}