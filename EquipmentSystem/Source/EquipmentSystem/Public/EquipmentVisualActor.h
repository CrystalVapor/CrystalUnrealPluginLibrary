// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EquipmentVisualActor.generated.h"

UCLASS()
class EQUIPMENTSYSTEM_API AEquipmentVisualActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEquipmentVisualActor();
	void NotifyInstanceUninitialized();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};