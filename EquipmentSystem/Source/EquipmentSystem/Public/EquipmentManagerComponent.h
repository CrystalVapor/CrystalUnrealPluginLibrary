// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentInstance.h"
#include "../../../../ExpandedGameplayAbilitySystem/Source/ExpandedGameplayAbilitySystem/Public/ExpandedAbilityGrantSource.h"
#include "Components/ActorComponent.h"
#include "EquipmentManagerComponent.generated.h"

class UEquipmentManagerComponent;
class AEquipmentInstance;
class UEquipmentDefinition;

DECLARE_MULTICAST_DELEGATE_OneParam(FEquipmentManagerNotifyDelegate, int32)

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

	UPROPERTY(NotReplicated)
	UEquipmentManagerComponent* Manager;
	
	int32 NextId = 0;
	int32 GetNextId() { return NextId++; }

	void PreReplicatedRemove(const TArrayView<int32>& RemovedIndices, int32 FinalSize);
	void PostReplicatedAdd(const TArrayView<int32>& AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32>& ChangedIndices, int32 FinalSize);
	
	void AddToItems(AEquipmentInstance* Instance);
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

UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UEquipmentManagerComponent();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	FExpandedAbilityGrantSource_GrantHandle HandleGrantAbility(IExpandedAbilityGrantSource* Source, UObject* SourceObject);
	void HandleRemoveAbility(FExpandedAbilityGrantSource_GrantHandle Handle);
	void NotifyInstanceInitialized(AEquipmentInstance* Instance);

	void InitializeManager(UAbilitySystemComponent* InAbilitySystemComponent);

	void CreateInstance(UEquipmentDefinition* Definition, FGameplayTagContainer FeatureTags);
	void RemoveInstance(int32 Id, bool bDestroyInstance = true);
	void InitializeInstance(AEquipmentInstance* Instance, UEquipmentDefinition* Definition, FGameplayTagContainer FeatureTags);
	void UninitializeInstance(AEquipmentInstance* Instance, bool bDestroyInstance = false);

	void HandleInstanceCreated(int32 Id);
	void HandleInstanceRemoved(int32 Id);

	int32 GetInstanceId(AEquipmentInstance* Instance);
	AEquipmentInstance* GetInstance(int32 Id);

	TArray<int32> GetInstanceIdList();
	TArray<int32>& FilterInstancesByFeatureTags(FGameplayTagContainer FeatureTags, TArray<int32>& OutInstanceIds);
	TArray<int32>& FilterInstancesByDefinition(UEquipmentDefinition* Definition, TArray<int32>& OutInstanceIds);
	TArray<int32>& FilterInstancesByFragments(TSet<TSubclassOf<UEquipmentFragment>> Fragments,
	                                          TArray<int32>& OutInstanceIds);

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

	FEquipmentManagerNotifyDelegate OnInstanceInitialized;
	FEquipmentManagerNotifyDelegate OnInstanceCreated;
	FEquipmentManagerNotifyDelegate OnInstanceRemoved;

protected:
	FEquipmentInstanceEntry* GetEntry(int32 Id);

	
	
	UPROPERTY(Replicated)
	FEquipmentInstancesContainer Instances;
	UPROPERTY()
	UAbilitySystemComponent* AbilitySystemComponent = nullptr;
};
