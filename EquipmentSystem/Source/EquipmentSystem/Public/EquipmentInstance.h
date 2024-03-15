// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentDefinition.h"
#include "EquipmentFragment.h"
#include "ExpandedAbilityGrantSource.h"
#include "GameFramework/Actor.h"
#include "EquipmentInstance.generated.h"

class UEquipmentManagerComponent;
class UEquipmentDefinition;
class UEquipmentInstanceInitializeComponent;

UENUM()
enum EEquipmentInstanceState:uint8
{
	NotInitialized,
	InsideInitializingFragments,
	OutsideInitializingFragments,
	RuminativeInitializingFragments,
	FinalInitializingFragments,
	GrantingAbility,
	Initialized
};

UCLASS()
class EQUIPMENTSYSTEM_API AEquipmentInstance : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEquipmentInstance();

	UEquipmentFragment* GetFragment(TSubclassOf<UEquipmentFragment> FragmentClass);

	void InitializeInstance(UEquipmentDefinition* Definition, FGameplayTagContainer FeatureTags, UEquipmentManagerComponent* ManagerComponent);
	void LocalInitializeInstance(UEquipmentDefinition* Definition, FGameplayTagContainer FeatureTags, UEquipmentManagerComponent* ManagerComponent);
	void ContinueInitializeInstance();
	void ToNextInitializeState();
	void HandleInitializeInstanceChanged();
	bool CanChangeInitializeState() const;
	
	bool IsInitialized() const{ return InitializeState == EEquipmentInstanceState::Initialized;};

protected:
	EEquipmentInstanceState InitializeState = EEquipmentInstanceState::NotInitialized;

	UPROPERTY()
	UEquipmentInstanceInitializeComponent* InitializeComponent;
	UPROPERTY()
	TArray<TObjectPtr<UEquipmentFragment>> Fragments;
	FExpandedAbilityGrantSource_GrantHandle GrantedAbilityHandle;

	UPROPERTY()
	UEquipmentDefinition* Definition = nullptr;
	UPROPERTY()
	FGameplayTagContainer FeatureTags = FGameplayTagContainer();
	UPROPERTY()
	UEquipmentManagerComponent* ManagerComponent = nullptr;
	FEquipmentFeatureData FeatureData;
};
