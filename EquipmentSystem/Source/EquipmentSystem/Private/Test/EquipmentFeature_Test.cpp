// Copyright CrystalVapor 2024, All rights reserved.


#include "Test/EquipmentFeature_Test.h"

BEGIN_EQUIPMENT_PROPERTY_TAG_DEFINE(UEquipmentFeature_Test)
EQUIPMENT_DEFINE_PROPERTY_TAG(TestProperty);
END_EQUIPMENT_PROPERTY_TAG_DEFINE()

UEquipmentFeature_Test::UEquipmentFeature_Test()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UEquipmentFeature_Test::BeginPlay()
{
	Super::BeginPlay();
}

