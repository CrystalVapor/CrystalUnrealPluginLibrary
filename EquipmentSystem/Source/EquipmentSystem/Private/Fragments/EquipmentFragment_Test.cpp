// Copyright 2024 CrystalVapor


#include "Fragments/EquipmentFragment_Test.h"

void UEquipmentFragment_Test::HandleChildInsideInitialize()
{
	Super::HandleChildInsideInitialize();
	FRAGMENT_REGISTER_FLOAT_PROPERTY_GETTER(UEquipmentFragment_Test, TestValue);
	FRAGMENT_REGISTER_TAG_PROPERTY_GETTER(UEquipmentFragment_Test, TestTags);
	FRAGMENT_REGISTER_CURVE_PROPERTY_GETTER(UEquipmentFragment_Test, TestCurve);
}

void UEquipmentFragment_Test::AsyncLoadAssets()
{
	Super::AsyncLoadAssets();
	FRAGMENT_REGISTER_ASSET_ASYNC_LOADER(Asset);
}

void UEquipmentFragment_Test::CheckAssetsFullyLoaded(bool& bIsFullyLoaded)
{
	Super::CheckAssetsFullyLoaded(bIsFullyLoaded);
	FRAGMENT_REGISTER_ASSET_ASYNC_CHECKER(Asset);
}
