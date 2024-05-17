// Copyright CrystalVapor 2024, All rights reserved.


#include "EquipmentVisualActorManager.h"

#include "EquipmentVisualActor.h"

void UEquipmentVisualActorManager::Initialize()
{
	//TODO: Collect or Load all visual actor classes
}

UClass* UEquipmentVisualActorManager::GetVisualActorClass(FName VisualActorName)
{
	return AEquipmentVisualActor::StaticClass();
}
