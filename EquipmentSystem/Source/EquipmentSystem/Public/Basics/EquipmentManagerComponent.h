// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentInstance.h"
#include "Components/ActorComponent.h"
#include "EquipmentManagerComponent.generated.h"

class UEquipmentManagerComponent;
class AEquipmentInstance;

DECLARE_MULTICAST_DELEGATE_OneParam(FEquipmentManagerNotifyDelegate, int32)

UENUM()
enum class EEquipmentManagerFeatureEventType:uint8
{
	AddFeature = 0,
	RemoveFeature
};

USTRUCT()
struct FEquipmentManagerFeatureEvent
{
	GENERATED_BODY()
	UPROPERTY()
	EEquipmentManagerFeatureEventType Type = EEquipmentManagerFeatureEventType::AddFeature;
	UPROPERTY()
	int32 Id = -1;
	UPROPERTY()
	TArray<FName> Features;
};

USTRUCT()
struct FEquipmentInstanceEntry : public FFastArraySerializerItem
{
	GENERATED_BODY()
	UPROPERTY()
	int32 Id = -1;
	UPROPERTY()
	AEquipmentInstance* Instance;

	UPROPERTY()
	bool RemoteEquipped = false;
	UPROPERTY(NotReplicated)
	bool LocalEquipped = false;
};

USTRUCT()
struct FEquipmentInstancesContainer: public FFastArraySerializer
{
	GENERATED_BODY()
	
	FEquipmentInstancesContainer(UEquipmentManagerComponent* InManager = nullptr) : FFastArraySerializer(), Manager(InManager)  { }

	UPROPERTY()
	TArray<FEquipmentInstanceEntry> Items;

	UPROPERTY()
	UEquipmentManagerComponent* Manager;
	
	int32 NextId = 0;
	int32 GetNextId() { return NextId++; }

	void PreReplicatedRemove(const TArrayView<int32>& RemovedIndices, int32 FinalSize);
	void PostReplicatedAdd(const TArrayView<int32>& AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32>& ChangedIndices, int32 FinalSize);

	int32 AddToItems(AEquipmentInstance* Instance);
	void RemoveFromItems(int32 Id);
	FEquipmentInstanceEntry* GetEntry(int32 Id);

	bool NetDeltaSerialize(FNetDeltaSerializeInfo & DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FEquipmentInstanceEntry, FEquipmentInstancesContainer>( Items, DeltaParms, *this );
	}
};
template<>
struct TStructOpsTypeTraits< FEquipmentInstancesContainer > : public TStructOpsTypeTraitsBase2< FEquipmentInstancesContainer >
{
	enum 
	{
		WithNetDeltaSerializer = true,
   };
};

USTRUCT()
struct FEquipmentFeatureRegistryEntry : public FFastArraySerializerItem
{
	GENERATED_BODY()
	UPROPERTY()
	int32 Id = -1;
	UPROPERTY()
	TArray<FName> RegisteredFeatures;
};

USTRUCT()
struct FEquipmentFeatureRegistryContainer: public FFastArraySerializer
{
	GENERATED_BODY()
	
	FEquipmentFeatureRegistryContainer(UEquipmentManagerComponent* InManager = nullptr) : FFastArraySerializer(), Manager(InManager)  { }

	UPROPERTY()
	TArray<FEquipmentFeatureRegistryEntry> Items;

	UPROPERTY()
	UEquipmentManagerComponent* Manager;

	void AddRegistryEntry(int32 Id);
	void RemoveRegistryEntry(int32 Id);
	FEquipmentFeatureRegistryEntry* GetRegistryEntry(int32 Id);

	void PreReplicatedRemove(const TArrayView<int32>& RemovedIndices, int32 FinalSize);
	void PostReplicatedAdd(const TArrayView<int32>& AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32>& ChangedIndices, int32 FinalSize);

	bool NetDeltaSerialize(FNetDeltaSerializeInfo & DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FEquipmentFeatureRegistryEntry, FEquipmentFeatureRegistryContainer>( Items, DeltaParms, *this );
	}
};
template<>
struct TStructOpsTypeTraits< FEquipmentFeatureRegistryContainer > : public TStructOpsTypeTraitsBase2< FEquipmentFeatureRegistryContainer >
{
	enum 
	{
		WithNetDeltaSerializer = true,
   };
};

/**
 * Equipment manager component.
 * This component expected to be on a pawn owned by a player controller.
 */ 
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentManagerComponent : public UActorComponent
{
	GENERATED_BODY()
	friend struct FEquipmentInstancesContainer;
public:
#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(FDataValidationContext& Context) override;
#endif
	UEquipmentManagerComponent();
	bool HasAuthority();
	static UEquipmentManagerComponent* FindEquipmentManagerComponent(AActor* Actor);
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	bool IsInitialized() const { return AbilitySystemComponent != nullptr; }
	
	int32 ServerOnly_CreateInstance();
	void HandleInstanceReplicated(int32 Id, AEquipmentInstance* Instance);
		
	void ServerOnly_DestroyInstance(int32 Id);
	void HandleInstanceDestroyed(AEquipmentInstance* Instance);
	void AddFeature(int32 Id, const FName& FeatureName);
	void AddFeatures(int32 Id, const TArray<FName>& FeatureNames);
	void RemoveFeature(int32 Id, const FName& FeatureName);
	void RemoveFeatures(int32 Id, const TArray<FName>& FeatureNames);

	void ProcessFeatureRegistryChange(int32 Id);
	void NotifyFeatureRegistryChanged(int32 Id);

	void FlushPendingFeatureEvents();
	bool HandleFeatureEvent(const FEquipmentManagerFeatureEvent& Event);

	FExpandedAbilityGrantSource_GrantHandle HandleGrantAbility(IExpandedAbilityGrantSource* Source, UObject* SourceObject);
	void HandleRemoveAbility(FExpandedAbilityGrantSource_GrantHandle& Handle);
	void NotifyInstanceInitialized(AEquipmentInstance* Instance);

	void InitializeManager(UAbilitySystemComponent* InAbilitySystemComponent);
	void HandleManagerInitialized();

	int32 GetInstanceId(AEquipmentInstance* Instance);
	AEquipmentInstance* GetInstance(int32 Id);

	TArray<int32> GetInstanceIdList();

	void EquipEquipment(int32 Id);
	void UnequipEquipment(int32 Id);
	UFUNCTION(Server, Reliable)
	void ServerEquipEquipment(int32 Id);
	UFUNCTION(Server, Reliable)
	void ServerUnequipEquipment(int32 Id);
	UFUNCTION(Client, Reliable)
	void ClientEquipEquipment(int32 Id);
	UFUNCTION(Client, Reliable)
	void ClientUnequipEquipment(int32 Id);
	void InternalEquipEquipment(int32 Id);
    void InternalUnequipEquipment(int32 Id);

	UAbilitySystemComponent* GetAbilitySystemComponent() const { return AbilitySystemComponent; }

	void HandleGameplayCue(UObject* Self, FGameplayTag GameplayCueTag, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters);
	
	FEquipmentManagerNotifyDelegate OnInstanceInitialized;
	FEquipmentManagerNotifyDelegate OnInstanceCreated;
	FEquipmentManagerNotifyDelegate OnInstanceRemoved;

protected:
	UPROPERTY()
	TArray<FEquipmentManagerFeatureEvent> PendingFeatureEvents;
	
	FEquipmentInstanceEntry* GetEntry(int32 Id);
	
	UPROPERTY(Replicated)
	FEquipmentInstancesContainer Instances;
	UPROPERTY(Replicated)
	FEquipmentFeatureRegistryContainer FeatureRegistry;
	
	UPROPERTY()
	UAbilitySystemComponent* AbilitySystemComponent = nullptr;
};