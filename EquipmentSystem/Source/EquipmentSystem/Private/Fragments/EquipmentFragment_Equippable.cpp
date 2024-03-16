// Copyright 2024 CrystalVapor


#include "Fragments/EquipmentFragment_Equippable.h"

void UEquipmentFragment_Equippable::HandleChildInsideInitialize(AEquipmentInstance* Instance)
{
	Super::HandleChildInsideInitialize(Instance);
	FRAGMENT_REGISTER_TAG_PROPERTY_GETTER(ThisClass, ActivationGroups);
}

bool UEquipmentFragment_Equippable::CanActivate(UEquipmentQuickBarComponent* QuickBarComponent)
{
	return true;
}

bool UEquipmentFragment_Equippable::CanDeactivate(UEquipmentQuickBarComponent* QuickBarComponent)
{
	return true;
}
