// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "EquipmentQuickBarComponent.generated.h"

class UEquipmentManagerComponent;
class UEquipmentFragment_Equippable;
class UEquipmentQuickBarComponent;

typedef TArray<int32> FEquipmentIdContainer;

DECLARE_DELEGATE_RetVal_TwoParams(bool, FEquipmentQuickBarActivationConditionChecker, int32, UEquipmentQuickBarComponent*)

USTRUCT()
struct FEquipmentQuickBarInfo
{
	GENERATED_BODY()
	
	int32 Id = -1;
	FGameplayTagContainer ActivationGroups;

	FEquipmentQuickBarActivationConditionChecker CanActivate;
	FEquipmentQuickBarActivationConditionChecker CanDeactivate;

	bool operator==(const FEquipmentQuickBarInfo& Other) const
	{
		return Id == Other.Id;
	}
};


UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentQuickBarComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UEquipmentQuickBarComponent();

	void InitializeQuickBar(UEquipmentManagerComponent* EquipmentManager);

	void OnEquipmentCreated(int32 Id);
	void OnEquipmentRemoved(int32 Id);

	void AddToQuickBar(int32 Id, UEquipmentFragment_Equippable* EquippableFragment);
	void RemoveFromQuickBar(int32 Id);

	TArray<int32>* GetEquipmentIdsForActivationGroup(FGameplayTag ActivationGroup);

	void SwitchInActivationGroup(FGameplayTag ActivationGroup);

	bool CanActivateEquipment(int32 Id);
	bool CanDeactivateEquipment(int32 Id);
	
	void TryActivateEquipment(int32 Id);
	void TryDeactivateEquipment(int32 Id);

	void ActivateEquipment(int32 Id);
	void DeactivateEquipment(int32 Id);

	FGameplayTagContainer GetActivationGroups();
	FGameplayTagContainer GetActivationGroupsForEquipment(int32 Id);

	UEquipmentManagerComponent* GetEquipmentManagerComponent();
protected:
	FEquipmentQuickBarInfo* GetEquipmentInfo(int32 Id);
	
	UPROPERTY()
	UEquipmentManagerComponent* EquipmentManagerComponent = nullptr;
	
	TMap<FGameplayTag, FEquipmentIdContainer> ActivationGroupsMap;
	
	UPROPERTY()
	TArray<FEquipmentQuickBarInfo> EquipmentInfos;
};
