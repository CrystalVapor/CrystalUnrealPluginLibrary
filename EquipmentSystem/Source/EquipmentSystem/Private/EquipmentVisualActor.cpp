// Copyright 2024 CrystalVapor

#include "EquipmentVisualActor.h"

// Sets default values
AEquipmentVisualActor::AEquipmentVisualActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AEquipmentVisualActor::NotifyInstanceUninitialized()
{
}

// Called when the game starts or when spawned
void AEquipmentVisualActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEquipmentVisualActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

