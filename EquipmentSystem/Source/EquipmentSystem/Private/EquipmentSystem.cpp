// Copyright Epic Games, Inc. All Rights Reserved.

#include "EquipmentSystem.h"

#include "Systems/EquipmentSystemGlobal.h"

#define LOCTEXT_NAMESPACE "FEquipmentSystemModule"

FEquipmentSystemModule& FEquipmentSystemModule::Get()
{
	static auto Singleton = FModuleManager::LoadModuleChecked< FEquipmentSystemModule >("EquipmentSystem");
	return Singleton;
}

UEquipmentSystemGlobal* FEquipmentSystemModule::GetEquipmentSystemGlobal()
{
	if(!EquipmentSystemGlobal)
	{
		EquipmentSystemGlobal = NewObject<UEquipmentSystemGlobal>(GetTransientPackage(), UEquipmentSystemGlobal::StaticClass(), NAME_None);
		EquipmentSystemGlobal->AddToRoot();
	}
	return EquipmentSystemGlobal;
}

bool FEquipmentSystemModule::IsAbilitySystemGlobalsAvailable()
{
	return EquipmentSystemGlobal != nullptr;
}

void FEquipmentSystemModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FEquipmentSystemModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FEquipmentSystemModule, EquipmentSystem)