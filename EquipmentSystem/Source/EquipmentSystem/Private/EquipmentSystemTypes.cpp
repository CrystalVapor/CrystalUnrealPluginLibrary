// Copyright CrystalVapor 2024, All rights reserved.


#include "EquipmentSystemTypes.h"

uint32 GetTypeHash(const FEquipmentPropertyModifierHandle& Other)
{
	return FCrc::MemCrc32(&Other, sizeof(Other));
}
