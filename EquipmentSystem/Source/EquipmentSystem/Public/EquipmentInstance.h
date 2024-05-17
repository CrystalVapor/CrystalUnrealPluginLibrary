// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "ExpandedAbilityGrantSource.h"
#include "GameFramework/Actor.h"
#include "EquipmentInstance.generated.h"

class UEquipmentReplicatedPropertyManagerComponent;
class AEquipmentVisualActor;
class UEquipmentManagerComponent;
class UEquipmentDefinition;
class UEquipmentInstanceInitializeComponent;

DECLARE_MULTICAST_DELEGATE_OneParam(FEquipmentInstanceNotifyDelegate, AEquipmentInstance*);

UCLASS()
class EQUIPMENTSYSTEM_API AEquipmentInstance : public AActor
{
	GENERATED_BODY()
friend UEquipmentManagerComponent;
public:
	AEquipmentInstance();

	bool IsEquipped();
	void NotifyEquipped();
	void NotifyUnequipped();
	
	FEquipmentInstanceNotifyDelegate OnEquipped;
	FEquipmentInstanceNotifyDelegate OnUnequipped;

	UAbilitySystemComponent* GetAbilitySystemComponent() const;

	void HandleGameplayCue(UObject* Self, FGameplayTag GameplayCueTag, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters);
protected:
	UPROPERTY()
	UEquipmentManagerComponent* ManagerComponent = nullptr;
	UPROPERTY()
	UEquipmentInstanceInitializeComponent* InitializeComponent;
	
	bool bIsEquipped = false;
};
