// Copyright 2024 CrystalVapor


#include "EquipmentManagerComponent.h"

#include "Net/UnrealNetwork.h"


void FEquipmentInstancesContainer::PreReplicatedRemove(const TArrayView<int32>& RemovedIndices, int32 FinalSize)
{
	for(auto& Index:RemovedIndices)
	{
		FEquipmentInstanceEntry& Entry = Items[Index];
		Manager->OnInstanceRemoved.Broadcast(Entry.Id);
	}
}

void FEquipmentInstancesContainer::PostReplicatedAdd(const TArrayView<int32>& AddedIndices, int32 FinalSize)
{
	for(auto& Index:AddedIndices)
	{
		FEquipmentInstanceEntry& Entry = Items[Index];
		Manager->OnInstanceCreated.Broadcast(Entry.Id);
	}
}

void FEquipmentInstancesContainer::PostReplicatedChange(const TArrayView<int32>& ChangedIndices, int32 FinalSize)
{
	for(auto& Index:ChangedIndices)
	{
		FEquipmentInstanceEntry& Entry = Items[Index];
		if(Entry.LocalEquipped != Entry.RemoteEquipped)
		{
			if(Entry.RemoteEquipped)
			{
				Manager->InternalEquipEquipment(Entry.Id);
			}
			else
			{
				Manager->InternalUnequipEquipment(Entry.Id);
			}
		}
	}
}

void FEquipmentInstancesContainer::AddToItems(AEquipmentInstance* Instance)
{
	FEquipmentInstanceEntry& Entry = Items.AddDefaulted_GetRef();
	Entry.Id = GetNextId();
	Entry.Instance = Instance;
	MarkItemDirty(Entry);
}

void FEquipmentInstancesContainer::RemoveFromItems(int32 Id)
{
	int32 Index = -1;
	for(int32 i = 0; i < Items.Num(); i++)
	{
		if(Items[i].Id == Id)
		{
			Index = i;
			break;
		}
	}
	if(Index != -1)
	{
		Items.RemoveAt(Index);
		MarkArrayDirty();
	}
}

FEquipmentInstanceEntry* FEquipmentInstancesContainer::GetEntry(int32 Id)
{
	for(FEquipmentInstanceEntry& Entry : Items)
	{
		if(Entry.Id == Id)
		{
			return &Entry;
		}
	}
	return nullptr;
}

UEquipmentManagerComponent::UEquipmentManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicated(true);
}

void UEquipmentManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UEquipmentManagerComponent, Instances);
}

FExpandedAbilityGrantSource_GrantHandle UEquipmentManagerComponent::HandleGrantAbility(
	IExpandedAbilityGrantSource* Source, UObject* SourceObject)
{
	FExpandedAbilityGrantSource_GrantHandle NewGrantHandle;
	Source->GiveToAbilitySystem(AbilitySystemComponent, SourceObject, NewGrantHandle);
	return NewGrantHandle;
}

void UEquipmentManagerComponent::HandleRemoveAbility(FExpandedAbilityGrantSource_GrantHandle Handle)
{
	Handle.RemoveFromAbilitySystem();
}

void UEquipmentManagerComponent::NotifyInstanceInitialized(AEquipmentInstance* Instance)
{
	OnInstanceInitialized.Broadcast(GetInstanceId(Instance));
}

void UEquipmentManagerComponent::InitializeManager(UAbilitySystemComponent* InAbilitySystemComponent)
{
	AbilitySystemComponent = InAbilitySystemComponent;
}

void UEquipmentManagerComponent::CreateInstance(UEquipmentDefinition* Definition, FGameplayTagContainer FeatureTags)
{
	if(!GetOwner()->HasAuthority())
	{
		return;
	}
	AEquipmentInstance* Instance = GetWorld()->SpawnActor<AEquipmentInstance>();
	Instance->SetOwner(GetOwner());
	Instances.AddToItems(Instance);
	HandleInstanceCreated(GetInstanceId(Instance));
	InitializeInstance(Instance, Definition, FeatureTags);
}

void UEquipmentManagerComponent::RemoveInstance(int32 Id, bool bDestroyInstance)
{
	if(!GetOwner()->HasAuthority())
	{
		return;
	}
	AEquipmentInstance* Instance = GetInstance(Id);
	if(!Instance)
	{
		return;
	}
	if(bDestroyInstance)
	{
		UninitializeInstance(Instance, bDestroyInstance);
	}
	HandleInstanceRemoved(Id);
	Instances.RemoveFromItems(Id);
}

void UEquipmentManagerComponent::InitializeInstance(AEquipmentInstance* Instance, UEquipmentDefinition* Definition,
                                                    FGameplayTagContainer FeatureTags)
{
	Instance->InitializeInstance(Definition, FeatureTags, this);
}

void UEquipmentManagerComponent::UninitializeInstance(AEquipmentInstance* Instance, bool bDestroyInstance)
{
	if(!GetOwner()->HasAuthority())
	{
		return;
	}
	if(!Instance)
	{
		return;
	}
	if(Instance->IsInitialized())
	{
		Instance->UninitializeInstance();
		if(bDestroyInstance)
		{
			Instance->Destroy();
		}
	}
}

void UEquipmentManagerComponent::HandleInstanceCreated(int32 Id)
{
	OnInstanceCreated.Broadcast(Id);
}

void UEquipmentManagerComponent::HandleInstanceRemoved(int32 Id)
{
	OnInstanceRemoved.Broadcast(Id);
}

int32 UEquipmentManagerComponent::GetInstanceId(AEquipmentInstance* Instance)
{
	for(auto& Entry : Instances.Items)
	{
		if(Entry.Instance == Instance)
		{
			return Entry.Id;
		}
	}
	return -1;
}

AEquipmentInstance* UEquipmentManagerComponent::GetInstance(int32 Id)
{
	for(auto& Entry : Instances.Items)
	{
		if(Entry.Id == Id)
		{
			return Entry.Instance;
		}
	}
	return nullptr;
}

TArray<int32> UEquipmentManagerComponent::GetInstanceIdList()
{
	TArray<int32> Ids;
	for(auto& Entry : Instances.Items)
	{
		Ids.Add(Entry.Id);
	}
	return Ids;
}

TArray<int32>& UEquipmentManagerComponent::FilterInstancesByFeatureTags(FGameplayTagContainer FeatureTags,
                                                                        TArray<int32>& OutInstanceIds)
{
	TArray<int32> FilteredIds;
	for(auto& Id: OutInstanceIds)
	{
		FEquipmentInstanceEntry* Entry = GetEntry(Id);
		if(Entry)
		{
			AEquipmentInstance* EquipmentInstance = Entry->Instance;
			if(EquipmentInstance->FeatureTags.HasAll(FeatureTags))
			{
				FilteredIds.Add(Id);
			}
		}
	}
	OutInstanceIds = FilteredIds;
	return OutInstanceIds;
}

TArray<int32>& UEquipmentManagerComponent::FilterInstancesByDefinition(UEquipmentDefinition* Definition,
                                                                       TArray<int32>& OutInstanceIds)
{
	TArray<int32> FilteredIds;
	for(auto& Id: OutInstanceIds)
	{
		FEquipmentInstanceEntry* Entry = GetEntry(Id);
		if(Entry)
		{
			AEquipmentInstance* EquipmentInstance = Entry->Instance;
			if(EquipmentInstance->Definition == Definition)
			{
				FilteredIds.Add(Id);
			}
		}
	}
	OutInstanceIds = FilteredIds;
	return OutInstanceIds;
}

TArray<int32>& UEquipmentManagerComponent::FilterInstancesByFragments(TSet<TSubclassOf<UEquipmentFragment>> Fragments,
                                                                      TArray<int32>& OutInstanceIds)
{
	TArray<int32> FilteredIds;
	for(auto& Id: OutInstanceIds)
	{
		FEquipmentInstanceEntry* Entry = GetEntry(Id);
		if(Entry)
		{
			AEquipmentInstance* EquipmentInstance = Entry->Instance;
			bool bHasAllFragments = true;
			for(auto& Fragment:EquipmentInstance->Fragments)
			{
				if(!Fragments.Contains(Fragment->GetClass()))
				{
					bHasAllFragments = false;
					break;
				}
			}
			if(bHasAllFragments)
			{
				FilteredIds.Add(Id);
			}
		}
	}
	OutInstanceIds = FilteredIds;
	return OutInstanceIds;
}

void UEquipmentManagerComponent::EquipEquipment(int32 Id)
{
	if(GetOwnerRole() == ROLE_AutonomousProxy)
	{
		return;
	}
	if(!GetOwner()->HasAuthority())
	{
		ServerEquipEquipment(Id);
	}
	//predictive equip
	InternalEquipEquipment(Id);
}

void UEquipmentManagerComponent::UnequipEquipment(int32 Id)
{
	if(GetOwnerRole() == ROLE_AutonomousProxy)
	{
		return;
	}
	if(!GetOwner()->HasAuthority())
	{
		ServerUnequipEquipment(Id);
	}
	//predictive unequip
	InternalUnequipEquipment(Id);
}

void UEquipmentManagerComponent::ServerEquipEquipment_Implementation(int32 Id)
{
	InternalEquipEquipment(Id);
	// Used to calibrate the client prediction
	ClientEquipEquipment(Id);
}

void UEquipmentManagerComponent::ServerUnequipEquipment_Implementation(int32 Id)
{
	InternalUnequipEquipment(Id);
	// Used to calibrate the client prediction
	ClientUnequipEquipment(Id);
}

void UEquipmentManagerComponent::ClientEquipEquipment_Implementation(int32 Id)
{
	InternalEquipEquipment(Id);
}

void UEquipmentManagerComponent::ClientUnequipEquipment_Implementation(int32 Id)
{
	InternalUnequipEquipment(Id);
}

void UEquipmentManagerComponent::InternalEquipEquipment(int32 Id)
{
	FEquipmentInstanceEntry* EquipmentInstanceEntry = GetEntry(Id);
	if(EquipmentInstanceEntry)
	{
		if(EquipmentInstanceEntry->LocalEquipped)
		{
			return;
		}
		EquipmentInstanceEntry->LocalEquipped = true;
		AEquipmentInstance* EquipmentInstance = EquipmentInstanceEntry->Instance;
		EquipmentInstance->NotifyEquipped();
		if(GetOwner()->HasAuthority())
		{
			EquipmentInstanceEntry->RemoteEquipped = true;
		}
	}
}

void UEquipmentManagerComponent::InternalUnequipEquipment(int32 Id)
{
	FEquipmentInstanceEntry* EquipmentInstanceEntry = GetEntry(Id);
	if(EquipmentInstanceEntry)
	{
		if(!EquipmentInstanceEntry->LocalEquipped)
		{
			return;
		}
		EquipmentInstanceEntry->LocalEquipped = false;
		AEquipmentInstance* EquipmentInstance = EquipmentInstanceEntry->Instance;
		EquipmentInstance->NotifyUnequipped();
		if(GetOwner()->HasAuthority())
		{
			EquipmentInstanceEntry->RemoteEquipped = false;
		}
	}
}


FEquipmentInstanceEntry* UEquipmentManagerComponent::GetEntry(int32 Id)
{
	for(auto& Entry : Instances.Items)
	{
		if(Entry.Id == Id)
		{
			return &Entry;
		}
	}
	return nullptr;
}



