// Copyright 2024 CrystalVapor


#include "Fragments/EquipmentFragment_Equippable.h"

FRAGMENT_DEFINE_PROPERTY_TAG(ActivationGroups);

void UEquipmentFragment_Equippable::HandleChildInsideInitialize(AEquipmentInstance* Instance)
{
	Super::HandleChildInsideInitialize(Instance);
	FRAGMENT_REGISTER_TAG_PROPERTY_GETTER(ThisClass, ActivationGroups);
}

bool UEquipmentFragment_Equippable::CanActivate(int32 Id, UEquipmentQuickBarComponent* QuickBarComponent)
{
	return true;
}

bool UEquipmentFragment_Equippable::CanDeactivate(int32 Id, UEquipmentQuickBarComponent* QuickBarComponent)
{
	return true;
}
