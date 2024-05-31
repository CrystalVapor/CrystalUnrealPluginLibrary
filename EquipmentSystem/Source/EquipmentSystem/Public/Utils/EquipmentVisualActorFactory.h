// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EquipmentVisualActorFactory.generated.h"

struct FEquipmentVisualActorSpecifier;
class UEquipmentVisualActorManager;
class AEquipmentVisualActor;
/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentVisualActorFactory : public UObject
{
	GENERATED_BODY()
public:
	static AEquipmentVisualActor* CreateVisualActor(const FName& VisualActorName, const FEquipmentVisualActorSpecifier& VisualActorSpecifier);
};
