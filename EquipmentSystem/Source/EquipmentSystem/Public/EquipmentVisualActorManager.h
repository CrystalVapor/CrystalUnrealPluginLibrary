// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EquipmentVisualActorManager.generated.h"

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentVisualActorManager : public UObject
{
	GENERATED_BODY()
public:
	void Initialize();
	UClass* GetVisualActorClass(FName VisualActorName);
};
