// Copyright 2024 CrystalVapor


#include "EquipmentInstance.h"


// Sets default values
AEquipmentInstance::AEquipmentInstance()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

UEquipmentFragment* AEquipmentInstance::GetFragment(TSubclassOf<UEquipmentFragment> FragmentClass) const
{
	return nullptr;
}

