// Copyright 2024 CrystalVapor

#include "EquipmentVisualActor.h"

#include "EquipmentInstance.h"

// Sets default values
AEquipmentVisualActor::AEquipmentVisualActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
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

void AEquipmentVisualActor::InitVisualActor(AEquipmentInstance* InOwnerInstance, AEquipmentVisualActor* InMasterVisualActor)
{
	OwnerInstance = InOwnerInstance;
	MasterVisualActor = InMasterVisualActor;
	OwnerInstance->OnEquipped.AddUObject(this, &AEquipmentVisualActor::NotifyEquipped);
	OwnerInstance->OnUnequipped.AddUObject(this, &AEquipmentVisualActor::NotifyUnequipped);
	K2_OnVisualActorInitialized();
}

const FGameplayTagContainer& AEquipmentVisualActor::GetVisualActorTags()
{
	return VisualActorTags;
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

void AEquipmentVisualActor::RegisterSubVisualActor(TSubclassOf<AEquipmentVisualActor> SubVisualActorClass)
{
	if(!OwnerInstance)
	{
		return;
	}
	AEquipmentVisualActor* SubVisualActor = OwnerInstance->HandleRegisterVisualActor(SubVisualActorClass, this);
	SubVisualActors.Add(SubVisualActor);
}

