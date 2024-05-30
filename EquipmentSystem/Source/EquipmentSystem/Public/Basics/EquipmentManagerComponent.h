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
	TArray<TSubclassOf<UEquipmentFeature>> FeatureClasses;
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

/**
 * Equipment manager component.
 * This component expected to be on a pawn owned by a player controller.
 */ 
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(FDataValidationContext& Context) override;
#endif
	
	UEquipmentManagerComponent();

	static UEquipmentManagerComponent* FindEquipmentManagerComponent(AActor* Actor);
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	int32 ServerOnly_CreateInstance();
	void HandleInstanceCreated(AEquipmentInstance* NewInstance);
	void ServerOnly_DestroyInstance(int32 Id);
	void HandleInstanceDestroyed(AEquipmentInstance* Instance);
	void AddFeature(int32 Id, TSubclassOf<UEquipmentFeature> FeatureClass, bool bFlushImmediately = true);
	void AddFeatures(int32 Id, const TArray<TSubclassOf<UEquipmentFeature>>& FeatureClasses);
	void AddFeature(int32 Id, const FName& FeatureName, bool bFlushImmediately = true);
	void AddFeatures(int32 Id, const TArray<FName>& FeatureNames);
	void RemoveFeature(int32 Id, TSubclassOf<UEquipmentFeature> FeatureClass, bool bFlushImmediately = true);
	void RemoveFeatures(int32 Id, const TArray<TSubclassOf<UEquipmentFeature>>& FeatureClasses);
	void RemoveFeature(int32 Id, const FName& FeatureName, bool bFlushImmediately = true);
	void RemoveFeatures(int32 Id, const TArray<FName>& FeatureNames);
	
	UFUNCTION(NetMultiCast, Reliable)
	void MULTICAST_HandleFeatureEvent(const FEquipmentManagerFeatureEvent& Event);
	void FlushPendingFeatureEvents();
	void ServerOnly_DispatchPendingFeatureEvents();
	bool HandleFeatureEvent(const FEquipmentManagerFeatureEvent& Event);

	FExpandedAbilityGrantSource_GrantHandle HandleGrantAbility(IExpandedAbilityGrantSource* Source, UObject* SourceObject);
	void HandleRemoveAbility(FExpandedAbilityGrantSource_GrantHandle& Handle);
	void NotifyInstanceInitialized(AEquipmentInstance* Instance);

	void InitializeManager(UAbilitySystemComponent* InAbilitySystemComponent);

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
	UPROPERTY()
	UAbilitySystemComponent* AbilitySystemComponent = nullptr;
};