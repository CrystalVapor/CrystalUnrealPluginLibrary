// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentFragment.h"
#include "GameFramework/Actor.h"
#include "EquipmentInstance.generated.h"

UCLASS()
class EQUIPMENTSYSTEM_API AEquipmentInstance : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEquipmentInstance();

	UEquipmentFragment* GetFragment(TSubclassOf<UEquipmentFragment> FragmentClass) const;
};
