// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentDefinition.h"
#include "EquipmentFragment.h"
#include "ExpandedAbilityGrantSource.h"
#include "GameFramework/Actor.h"
#include "EquipmentInstance.generated.h"

class UEquipmentReplicatedPropertyManagerComponent;
class AEquipmentVisualActor;
class UEquipmentManagerComponent;
class UEquipmentDefinition;
class UEquipmentInstanceInitializeComponent;

DECLARE_MULTICAST_DELEGATE_OneParam(FEquipmentInstanceNotifyDelegate, AEquipmentInstance*);

UENUM()
enum EEquipmentInstanceState:uint8
{
	NotInitialized,
	InsideInitializingFragments,
	OutsideInitializingFragments,
	RuminativeInitializingFragments,
	FinalInitializingFragments,
	RegisteringVisualActors,
	GrantingAbility,
	Initialized
};

UCLASS()
class EQUIPMENTSYSTEM_API AEquipmentInstance : public AActor
{
	GENERATED_BODY()
friend UEquipmentManagerComponent;
public:
	// Sets default values for this actor's properties
	AEquipmentInstance();

	UFUNCTION(BlueprintCallable)
	UEquipmentFragment* GetFragment(TSubclassOf<UEquipmentFragment> FragmentClass);
	template<typename FragmentType>
	FragmentType* GetFragment()
	{
		return Cast<FragmentType>(GetFragment(FragmentType::StaticClass()));
	}
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const float& GetFloatProperty(FGameplayTag PropertyTag);
	const float& GetFloatProperty(FGameplayTag PropertyTag, TSubclassOf<UEquipmentFragment> FragmentClass);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FGameplayTagContainer& GetTagContainerProperty(FGameplayTag PropertyTag);
	const FGameplayTagContainer& GetTagContainerProperty(FGameplayTag PropertyTag, TSubclassOf<UEquipmentFragment> FragmentClass);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FRuntimeFloatCurve& GetCurveProperty(FGameplayTag PropertyTag);
	const FRuntimeFloatCurve& GetCurveProperty(FGameplayTag PropertyTag, TSubclassOf<UEquipmentFragment> FragmentClass);

	FExpandedAbilityGrantSource_GrantHandle GetGrantedAbilityHandle() const { return GrantedAbilityHandle; }

	const TArray<TObjectPtr<AEquipmentVisualActor>>& GetVisualActors() const { return VisualActors; }

	// Initialize the instance with the specified definition and feature tags.
	// the order of Initialization is:
	// Fragments -> VisualActors -> Abilities
	void InitializeInstance(UEquipmentDefinition* Definition, FGameplayTagContainer FeatureTags, UEquipmentManagerComponent* ManagerComponent);
	void LocalInitializeInstance(UEquipmentDefinition* Definition, FGameplayTagContainer FeatureTags, UEquipmentManagerComponent* ManagerComponent);
	void ContinueInitializeInstance();
	void ToNextInitializeState();
	void HandleInitializeInstanceChanged();
	bool CanChangeInitializeState() const;
	
	bool IsInitialized() const{ return InitializeState == EEquipmentInstanceState::Initialized;}
	bool IsInitializing() const;

	UFUNCTION(NetMulticast, Reliable)
	void UninitializeInstance();
	void LocalUninitializeInstance();

	// Register&spawn a visual actor to the owner instance's visual actors list.
	AEquipmentVisualActor* HandleRegisterVisualActor(
		TSubclassOf<AEquipmentVisualActor> VisualActorClass,
		AEquipmentVisualActor* MasterVisualActor = nullptr);

	// Get all visual actors with the specified tag, use empty tag to get all visual actors
	void GetVisualActors(FGameplayTag VisualActorTag, TArray<AEquipmentVisualActor*>& OutVisualActors);
	
	bool IsEquipped();
	void NotifyEquipped();
	void NotifyUnequipped();
	
	FEquipmentInstanceNotifyDelegate OnEquipped;
	FEquipmentInstanceNotifyDelegate OnUnequipped;

	UEquipmentReplicatedPropertyManagerComponent* GetReplicatedPropertyManagerComponent() const { return ReplicatedPropertyManagerComponent; }

	UAbilitySystemComponent* GetAbilitySystemComponent() const;

	void HandleGameplayCue(UObject* Self, FGameplayTag GameplayCueTag, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters);

	float DefaultFloatProperty;
	FGameplayTagContainer DefaultTagContainerProperty;
	FRuntimeFloatCurve DefaultCurveProperty;
protected:
	EEquipmentInstanceState InitializeState = EEquipmentInstanceState::NotInitialized;
	UPROPERTY()
	UEquipmentInstanceInitializeComponent* InitializeComponent;

	UPROPERTY()
	UEquipmentDefinition* Definition = nullptr;
	UPROPERTY()
	FGameplayTagContainer FeatureTags = FGameplayTagContainer();
	UPROPERTY()
	UEquipmentManagerComponent* ManagerComponent = nullptr;
	FEquipmentFeatureData FeatureData;

	UPROPERTY()
	TArray<TObjectPtr<UEquipmentFragment>> Fragments;
	UPROPERTY()
	TArray<TObjectPtr<AEquipmentVisualActor>> VisualActors;
	FExpandedAbilityGrantSource_GrantHandle GrantedAbilityHandle;

	bool bIsEquipped = false;

	UPROPERTY()
	UEquipmentReplicatedPropertyManagerComponent* ReplicatedPropertyManagerComponent;
};
