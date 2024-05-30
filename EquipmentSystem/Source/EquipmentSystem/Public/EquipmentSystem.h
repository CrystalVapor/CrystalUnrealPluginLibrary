// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FEquipmentSystemModule : public IModuleInterface
{
public:
	static FEquipmentSystemModule& Get();
	class UEquipmentSystemGlobal* GetEquipmentSystemGlobal();
	bool IsAbilitySystemGlobalsAvailable();
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
protected:
	UEquipmentSystemGlobal* EquipmentSystemGlobal = nullptr;
};
