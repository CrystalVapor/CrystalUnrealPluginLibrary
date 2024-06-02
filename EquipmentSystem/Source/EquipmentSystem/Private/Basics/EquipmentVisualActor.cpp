// Copyright 2024 CrystalVapor

#include "Basics/EquipmentVisualActor.h"

#include "Basics/EquipmentInstance.h"

// Sets default values
AEquipmentVisualActor::AEquipmentVisualActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = false;
}

const FName& AEquipmentVisualActor::GetVisualActorName()
{
	return VisualActorName;
}

FGameplayCueParameters AEquipmentVisualActor::ForceMakeGameplayCueParametersFromHitResult(const FHitResult& HitResult)
{
	FGameplayCueParameters CueParameters;

	CueParameters.Location = HitResult.ImpactPoint;
	CueParameters.Normal = HitResult.ImpactNormal;
	CueParameters.PhysicalMaterial = HitResult.PhysMaterial;

	return CueParameters;
}

void AEquipmentVisualActor::NotifyInstanceUninitialized()
{
	OwnerInstance->OnEquipped.RemoveAll(this);
}

void AEquipmentVisualActor::InitVisualActor(AEquipmentInstance* InOwnerInstance)
{
	OwnerInstance = InOwnerInstance;
	OwnerInstance->OnEquipped.AddUObject(this, &AEquipmentVisualActor::NotifyEquipped);
	OwnerInstance->OnUnequipped.AddUObject(this, &AEquipmentVisualActor::NotifyUnequipped);
	K2_OnVisualActorInitialized();
}


UAbilitySystemComponent* AEquipmentVisualActor::GetAbilitySystemComponent() const
{
	return OwnerInstance->GetAbilitySystemComponent();
}

APawn* AEquipmentVisualActor::GetOwnerPawn() const
{
	return Cast<APawn>(OwnerInstance->GetOwner());
}

bool AEquipmentVisualActor::IsEquipped() const
{
	return OwnerInstance->IsEquipped();
}

void AEquipmentVisualActor::NotifyEquipped(AEquipmentInstance* EquippedInstance)
{
	K2_NotifiedEquipped(EquippedInstance);
}

void AEquipmentVisualActor::NotifyUnequipped(AEquipmentInstance* UnequippedInstance)
{
	K2_NotifiedUnequipped(UnequippedInstance);
}