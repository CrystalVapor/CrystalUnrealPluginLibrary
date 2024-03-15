// Copyright 2024 CrystalVapor


#include "EquipmentManagerComponent.h"


// Sets default values for this component's properties
UEquipmentManagerComponent::UEquipmentManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

FExpandedAbilityGrantSource_GrantHandle UEquipmentManagerComponent::HandleGrantAbility(
	IExpandedAbilityGrantSource* Source)
{
	return FExpandedAbilityGrantSource_GrantHandle();
}

void UEquipmentManagerComponent::HandleRemoveAbility(FExpandedAbilityGrantSource_GrantHandle Handle)
{
}

void UEquipmentManagerComponent::NotifyInstanceInitialized(AEquipmentInstance* Instance)
{
}


// Called when the game starts
void UEquipmentManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEquipmentManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                               FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

