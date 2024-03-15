// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "GameplayTags.h"
#include "Components/ActorComponent.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "EquipmentReplicatedPropertyManagerComponent.generated.h"

class UEquipmentReplicatedPropertyManagerComponent;

DECLARE_MULTICAST_DELEGATE_OneParam(FEquipmentReplicatedPropertyRegisteredDelegate, FGameplayTag);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnEquipmentReplicatedPropertyChangedDelegate, float, float);


USTRUCT()
struct FEquipmentReplicatedProperty : public FFastArraySerializerItem
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	FGameplayTag PropertyTag;

	UPROPERTY()
	float RemoteValue = 0.f;
	
	float LocalValue = 0.f;
	bool bIsLocalPredicted = false;
	
	UPROPERTY()
	bool bSyncOnEndPrediction = false;
	
	uint8 SyncKey = 0;
	FTimerHandle SyncTimedOutTimerHandle;
	FOnEquipmentReplicatedPropertyChangedDelegate OnPropertyChanged;
};

USTRUCT()
struct FEquipmentReplicatedPropertySet: public FFastArraySerializer
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	TArray<FEquipmentReplicatedProperty> Items;
	
	FORCEINLINE void PreReplicatedRemove(const TArrayView<int32>& RemovedIndices, int32 FinalSize);
	FORCEINLINE void PostReplicatedAdd(const TArrayView<int32>& AddedIndices, int32 FinalSize);
	FORCEINLINE void PostReplicatedChange(const TArrayView<int32>& ChangedIndices, int32 FinalSize);

	UPROPERTY()
	UEquipmentReplicatedPropertyManagerComponent* Owner;
	
	bool NetDeltaSerialize(FNetDeltaSerializeInfo & DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FEquipmentReplicatedProperty, FEquipmentReplicatedPropertySet>( Items, DeltaParms, *this );
	}
};

template<>
struct TStructOpsTypeTraits< FEquipmentReplicatedPropertySet > : public TStructOpsTypeTraitsBase2< FEquipmentReplicatedProperty >
{
	enum 
	{
		WithNetDeltaSerializer = true,
   };
};

UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentReplicatedPropertyManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UEquipmentReplicatedPropertyManagerComponent();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	float GetProperty(FGameplayTag PropertyTag);
	void SetProperty(FGameplayTag PropertyTag, float NewValue);

	void SetPropertyLocalPredictedStatus(FGameplayTag PropertyTag, bool NewStatus);

	bool HasProperty(FGameplayTag PropertyTag) const;

	void RegisterProperty(FGameplayTag PropertyTag, float DefaultValue, bool bSyncOnEndPrediction = false);

	FOnEquipmentReplicatedPropertyChangedDelegate& GetOnPropertyChangedDelegate(FGameplayTag PropertyTag);

	FEquipmentReplicatedPropertyRegisteredDelegate OnReplicatedPropertyRegistered;
protected:
	FEquipmentReplicatedProperty* GetPropertyItem(FGameplayTag PropertyTag);

	UFUNCTION(Server, Unreliable)
	void ServerSyncProperty(FGameplayTag PropertyTag, uint8 RequestSyncKey);
	UFUNCTION(Client, Unreliable)
	void ClientSyncProperty(FGameplayTag PropertyTag, uint8 RequestSyncKey,  float RemoteValue);

	void HandleSyncTimedOut(FEquipmentReplicatedProperty* Property);

	void HandleRemoteSyncProperty(FEquipmentReplicatedProperty* Property);

	UPROPERTY(Replicated)
	FEquipmentReplicatedPropertySet Properties;
};
