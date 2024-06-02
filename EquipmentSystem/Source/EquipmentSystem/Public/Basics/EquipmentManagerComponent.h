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

	/* Returns true if the manager is initialized, means ready to handle equipment instances.*/
	bool IsInitialized() const { return AbilitySystemComponent != nullptr; }
	/**
	 * Create a new equipment instance, returns the id of the instance.
	 * Only make sense on server.
	 */
	int32 ServerOnly_CreateInstance();
	/**
	 * Called by Instance, will set the pointer in container to instance
	 * (Consider caused by a bug of FTR, while the instance is replicated to client, the pointer to it in FTR is not set)
	 */
	void NotifyInstanceReplicated(int32 Id, AEquipmentInstance* Instance);
	/**
	 * Destroy an equipment instance by id.
	 * Only make sense on server.
	 */
	void ServerOnly_DestroyInstance(int32 Id);
	/* Called when an instance is destroyed, do stuffs like remove from registry. */
	void HandleInstanceDestroyed(AEquipmentInstance* Instance);
	void AddFeature(int32 Id, const FName& FeatureName);
	void AddFeatures(int32 Id, const TArray<FName>& FeatureNames);
	void RemoveFeature(int32 Id, const FName& FeatureName);
	void RemoveFeatures(int32 Id, const TArray<FName>& FeatureNames);
	/**
	 * Iterate the Feature Registry associated, and compared with the applied Features in the instance.
	 * Will create FeatureEvent to add Missing Features, and remove Redundant Features.
	 */
	void ProcessFeatureRegistryChange(int32 Id);
	/* Notify the manager that the feature registry of an instance has changed. */
	void NotifyFeatureRegistryChanged(int32 Id);
	/* Flush any existing Feature events, apply them to Instance. */
	void FlushPendingFeatureEvents();
	/**
	 * Handle a Feature Event, apply the event to the instance.
	 * @param Event The event to handle.
	 * @return if the event is handled.
	 */
	bool HandleFeatureEvent(const FEquipmentManagerFeatureEvent& Event);
	/**
	 * Grant Ability set(source) to owner, used by instance when adding feature's ability part.
	 * @param Source Ability set to grant
	 * @param SourceObject Source Object of ability, usually the instance.
	 * @return Handle to the granted ability set, used to remove the ability set.
	 */
	FExpandedAbilityGrantSource_GrantHandle HandleGrantAbility(IExpandedAbilityGrantSource* Source, UObject* SourceObject);
	/**
	 * Remove Ability set by handle.
	 * @param Handle Handle to the granted ability set.
	 */
	void HandleRemoveAbility(FExpandedAbilityGrantSource_GrantHandle& Handle);
	/* Initialize the Manager with an Ability System Component. */
	void InitializeManager(UAbilitySystemComponent* InAbilitySystemComponent);
	/* Called when Manager is initialized, will try to call process feature registry on all instances. */
	void HandleManagerInitialized();
	/**
	 * Gets an instance's ID by instance pointer.
	 * @note Currently O(n) complexity.
	 */
	int32 GetInstanceId(AEquipmentInstance* Instance);
	/**
	 * Gets an instance by ID.
	 * @note Currently O(n) complexity.
	 */
	AEquipmentInstance* GetInstance(int32 Id);
	/* Gets a list of all instance IDs.*/
	TArray<int32> GetInstanceIdList();
	/**
	 * Predictively equip an equipment instance.
	 * When called on client, will also try to notify server to equip the equipment.
	 */
	void EquipEquipment(int32 Id);
	/**
	 * Predictively unequip an equipment instance.
	 * When called on client, will also try to notify server to unequip the equipment.
	 */
	void UnequipEquipment(int32 Id);
	UFUNCTION(Server, Reliable)
	void ServerEquipEquipment(int32 Id);
	UFUNCTION(Server, Reliable)
	void ServerUnequipEquipment(int32 Id);
	UFUNCTION(Client, Reliable)
	void ClientEquipEquipment(int32 Id);
	UFUNCTION(Client, Reliable)
	void ClientUnequipEquipment(int32 Id);
protected:
	/** Equip an equipment instance locally, internal function. */
	void EquipEquipment_Internal(int32 Id);
	/** Unequip an equipment instance locally, internal function. */
    void UnequipEquipment_Internal(int32 Id);
public:
	UAbilitySystemComponent* GetAbilitySystemComponent() const { return AbilitySystemComponent; }
	void HandleGameplayCue(UObject* Self, FGameplayTag GameplayCueTag, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters);
	FEquipmentManagerNotifyDelegate OnInstanceInitialized;
	FEquipmentManagerNotifyDelegate OnInstanceCreated;
	FEquipmentManagerNotifyDelegate OnInstanceRemoved;
protected:
	FEquipmentInstanceEntry* GetEntry(int32 Id);
	UPROPERTY()
	TArray<FEquipmentManagerFeatureEvent> PendingFeatureEvents;
	UPROPERTY(Replicated)
	FEquipmentInstancesContainer Instances;
	UPROPERTY(Replicated)
	FEquipmentFeatureRegistryContainer FeatureRegistry;
	UPROPERTY()
	UAbilitySystemComponent* AbilitySystemComponent = nullptr;
};