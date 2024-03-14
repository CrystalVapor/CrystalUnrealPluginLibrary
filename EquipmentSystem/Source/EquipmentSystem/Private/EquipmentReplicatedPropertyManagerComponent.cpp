// Copyright 2024 CrystalVapor


#include "EquipmentReplicatedPropertyManagerComponent.h"

#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"


void FEquipmentReplicatedPropertySet::PreReplicatedRemove(const TArrayView<int32>& RemovedIndices, int32 FinalSize)
{
}

void FEquipmentReplicatedPropertySet::PostReplicatedAdd(const TArrayView<int32>& AddedIndices, int32 FinalSize)
{
	for(auto& Index: AddedIndices)
	{
		Items[Index].LocalValue = Items[Index].RemoteValue;
		Owner->OnReplicatedPropertyRegistered.Broadcast(Items[Index].PropertyTag);
		Items[Index].OnPropertyChanged.Broadcast(Items[Index].RemoteValue, Items[Index].RemoteValue);
	}
}

void FEquipmentReplicatedPropertySet::PostReplicatedChange(const TArrayView<int32>& ChangedIndices, int32 FinalSize)
{
	for(auto& Index: ChangedIndices)
	{
		if(!Items[Index].bIsLocalPredicted)
		{
			float OldValue = Items[Index].LocalValue;
			Items[Index].LocalValue = Items[Index].RemoteValue;
			Items[Index].OnPropertyChanged.Broadcast(OldValue, Items[Index].LocalValue);
		}
	}
}

UEquipmentReplicatedPropertyManagerComponent::UEquipmentReplicatedPropertyManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	Properties.Owner = this;
}

void UEquipmentReplicatedPropertyManagerComponent::GetLifetimeReplicatedProps(
	TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UEquipmentReplicatedPropertyManagerComponent, Properties);
}

float UEquipmentReplicatedPropertyManagerComponent::GetProperty(FGameplayTag PropertyTag)
{
	return GetPropertyItem(PropertyTag)->LocalValue;
}

void UEquipmentReplicatedPropertyManagerComponent::SetProperty(FGameplayTag PropertyTag, float NewValue)
{
	FEquipmentReplicatedProperty* Property = GetPropertyItem(PropertyTag);
	if(Property == nullptr)
	{
		return;
	}
	if(GetOwnerRole() == ROLE_Authority)
	{
		float OldValue = Property->LocalValue;
		Property->RemoteValue = NewValue;
		Property->LocalValue = NewValue;
		Property->OnPropertyChanged.Broadcast(OldValue, NewValue);
	}
	else
	{
		if(Property->bIsLocalPredicted)
		{
			float OldValue = Property->LocalValue;
			Property->LocalValue = NewValue;
			Property->OnPropertyChanged.Broadcast(OldValue, NewValue);
		}
	}
}

void UEquipmentReplicatedPropertyManagerComponent::SetPropertyLocalPredictedStatus(FGameplayTag PropertyTag,
	bool NewStatus)
{
	if(GetOwnerRole() == ROLE_Authority)
	{
		return;
	}
	FEquipmentReplicatedProperty* Property = GetPropertyItem(PropertyTag);
	if(Property == nullptr)
	{
		return;
	}
	if(!Property->bSyncOnEndPrediction)
	{
		if(NewStatus == Property->bIsLocalPredicted)
		{
			return;
		}
		Property->bIsLocalPredicted = NewStatus;
		if(NewStatus == false)
		{
			HandleRemoteSyncProperty(Property);
		}
	}
	else
	{
		Property->SyncKey++;
		if(GetWorld()->GetTimerManager().IsTimerActive(Property->SyncTimedOutTimerHandle))
		{
			GetWorld()->GetTimerManager().ClearTimer(Property->SyncTimedOutTimerHandle);
		}
		if(NewStatus == Property->bIsLocalPredicted)
		{
			return;
		}
		if(NewStatus == false)
		{
			ServerSyncProperty(PropertyTag, Property->SyncKey);
			// Use TimerDelegate to pass parameter
			FTimerDelegate TimerDelegate = FTimerDelegate::CreateUObject(this, &UEquipmentReplicatedPropertyManagerComponent::HandleSyncTimedOut, Property);
			float TimeOut = GetWorld()->GetFirstPlayerController()->GetPlayerState<APlayerState>()->ExactPing + 1000/GetOwner()->NetUpdateFrequency;
			GetWorld()->GetTimerManager().SetTimer(Property->SyncTimedOutTimerHandle, TimerDelegate, 0.001 * TimeOut, false);
		}
	}
}


bool UEquipmentReplicatedPropertyManagerComponent::HasProperty(FGameplayTag PropertyTag) const
{
	for(auto& Property: Properties.Items)
	{
		if(Property.PropertyTag == PropertyTag)
		{
			return true;
		}
	}
	return false;
}

void UEquipmentReplicatedPropertyManagerComponent::RegisterProperty(FGameplayTag PropertyTag, float DefaultValue,
	bool bSyncOnEndPrediction)
{
	if(GetOwnerRole()!=ROLE_Authority)
	{
		return;
	}
	FEquipmentReplicatedProperty& NewProperty = Properties.Items.AddDefaulted_GetRef();
	NewProperty.LocalValue = DefaultValue;
	NewProperty.RemoteValue = DefaultValue;
	NewProperty.PropertyTag = PropertyTag;
	NewProperty.bSyncOnEndPrediction = bSyncOnEndPrediction;
	Properties.MarkItemDirty(NewProperty);
	OnReplicatedPropertyRegistered.Broadcast(PropertyTag);
}

FEquipmentReplicatedProperty* UEquipmentReplicatedPropertyManagerComponent::GetPropertyItem(FGameplayTag PropertyTag)
{
	for(auto& Property: Properties.Items)
	{
		if(Property.PropertyTag == PropertyTag)
		{
			return &Property;
		}
	}
	return nullptr;
}

void UEquipmentReplicatedPropertyManagerComponent::HandleSyncTimedOut(FEquipmentReplicatedProperty* Property)
{
	HandleRemoteSyncProperty(Property);
}

void UEquipmentReplicatedPropertyManagerComponent::HandleRemoteSyncProperty(FEquipmentReplicatedProperty* Property)
{
	float OldValue = Property->LocalValue;
	Property->LocalValue = Property->RemoteValue;
	if(OldValue != Property->LocalValue)
	{
		Property->OnPropertyChanged.Broadcast(OldValue, Property->LocalValue);
	}
	Property->bIsLocalPredicted = false;
}

void UEquipmentReplicatedPropertyManagerComponent::ServerSyncProperty_Implementation(FGameplayTag PropertyTag,
                                                                                     uint8 RequestSyncKey)
{
	ClientSyncProperty(PropertyTag, RequestSyncKey, GetProperty(PropertyTag));
}

void UEquipmentReplicatedPropertyManagerComponent::ClientSyncProperty_Implementation(FGameplayTag PropertyTag,
	uint8 RequestSyncKey, float RemoteValue)
{
	FEquipmentReplicatedProperty* Property = GetPropertyItem(PropertyTag);
	if(Property == nullptr)
	{
		return;
	}
	if(RequestSyncKey != Property->SyncKey)
	{
		return;
	}
	Property->RemoteValue = RemoteValue;
	HandleRemoteSyncProperty(Property);
}


