// Copyright 2024 CrystalVapor


#include "EquipmentInstance.h"

#include "EquipmentInstanceInitializeComponent.h"
#include "EquipmentManagerComponent.h"
#include "EquipmentVisualActor.h"


// Sets default values
AEquipmentInstance::AEquipmentInstance()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	bAlwaysRelevant = true;

	InitializeComponent = CreateDefaultSubobject<UEquipmentInstanceInitializeComponent>(TEXT("InitializeComponent"));
	InitializeComponent->SetIsReplicated(true);
}

bool AEquipmentInstance::IsEquipped()
{
	return bIsEquipped; 
}

void AEquipmentInstance::NotifyEquipped()
{
	if(bIsEquipped)
	{
		return;
	}
	bIsEquipped = true;
	OnEquipped.Broadcast(this);
}

void AEquipmentInstance::NotifyUnequipped()
{
	if(!bIsEquipped)
	{
		return;
	}
	bIsEquipped = false;
	OnUnequipped.Broadcast(this);
}

UAbilitySystemComponent* AEquipmentInstance::GetAbilitySystemComponent() const
{
	return ManagerComponent->GetAbilitySystemComponent();
}

void AEquipmentInstance::HandleGameplayCue(UObject* Self, FGameplayTag GameplayCueTag,
	EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters)
{
	/*for(auto& VisualActor:VisualActors)
	{
		VisualActor->HandleGameplayCue(VisualActor, GameplayCueTag, EventType, Parameters);
	}*/
}

