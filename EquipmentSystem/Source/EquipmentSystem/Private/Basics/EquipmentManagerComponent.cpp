// Copyright 2024 CrystalVapor


#include "Basics/EquipmentManagerComponent.h"

#include "EquipmentSystem.h"
#include "ExpandedAbilityGrantSource.h"
#include "Misc/DataValidation.h"

#include "Net/UnrealNetwork.h"
#include "Systems/EquipmentVisualActorManager.h"


void FEquipmentInstancesContainer::PreReplicatedRemove(const TArrayView<int32>& RemovedIndices, int32 FinalSize)
{
	for(auto& Index:RemovedIndices)
	{
		FEquipmentInstanceEntry& Entry = Items[Index];
		if(Manager)
		{
			Manager->HandleInstanceDestroyed(Entry.Instance);
		}
	}
}

void FEquipmentInstancesContainer::PostReplicatedAdd(const TArrayView<int32>& AddedIndices, int32 FinalSize)
{
	for(auto& Index:AddedIndices)
	{
		FEquipmentInstanceEntry& Entry = Items[Index];
		if(Manager)
		{
			//Manager->HandleInstanceAddToManager(Entry.Id);
		}
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
				Manager->EquipEquipment_Internal(Entry.Id);
			}
			else
			{
				Manager->UnequipEquipment_Internal(Entry.Id);
			}
		}
	}
}

int32 FEquipmentInstancesContainer::AddToItems(AEquipmentInstance* Instance)
{
	FEquipmentInstanceEntry& Entry = Items.AddDefaulted_GetRef();
	Entry.Id = GetNextId();
	Entry.Instance = Instance;
	Manager->FeatureRegistry.AddRegistryEntry(Entry.Id);
	MarkItemDirty(Entry);
	return Entry.Id;
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
		Manager->FeatureRegistry.RemoveRegistryEntry(Id);
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

void FEquipmentFeatureRegistryContainer::AddRegistryEntry(int32 Id)
{
	FEquipmentFeatureRegistryEntry& Entry = Items.AddDefaulted_GetRef();
	Entry.Id = Id;
	MarkItemDirty(Entry);
}

void FEquipmentFeatureRegistryContainer::RemoveRegistryEntry(int32 Id)
{
	for(int i = 0; i < Items.Num(); i++)
	{
		if(Items[i].Id == Id)
		{
			Items.RemoveAt(i);
			MarkArrayDirty();
			break;
		}
	}
}

FEquipmentFeatureRegistryEntry* FEquipmentFeatureRegistryContainer::GetRegistryEntry(int32 Id)
{
	for(int i = 0; i < Items.Num(); i++)
	{
		if(Items[i].Id == Id)
		{
			return &Items[i];
		}
	}
	return nullptr;
}

void FEquipmentFeatureRegistryContainer::PreReplicatedRemove(const TArrayView<int32>& RemovedIndices, int32 FinalSize)
{
}

void FEquipmentFeatureRegistryContainer::PostReplicatedAdd(const TArrayView<int32>& AddedIndices, int32 FinalSize)
{
	for(auto& Index:AddedIndices)
	{
		FEquipmentFeatureRegistryEntry& Entry = Items[Index];
		if(Manager)
		{
			Manager->NotifyFeatureRegistryChanged(Entry.Id);
		}
	}
}

void FEquipmentFeatureRegistryContainer::PostReplicatedChange(const TArrayView<int32>& ChangedIndices, int32 FinalSize)
{
	for(auto& Index:ChangedIndices)
	{
		FEquipmentFeatureRegistryEntry& Entry = Items[Index];
		if(Manager)
		{
			Manager->NotifyFeatureRegistryChanged(Entry.Id);
		}
	}
}

EDataValidationResult UEquipmentManagerComponent::IsDataValid(FDataValidationContext& Context)
{
	if(!GetOwner()->IsA(APawn::StaticClass()))
	{
		Context.AddError(FText::FromString(TEXT("Equipment Manager expects be on a pawn")));
		return EDataValidationResult::Invalid;
	}
	return Super::IsDataValid(Context);
}

UEquipmentManagerComponent::UEquipmentManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);
	Instances = FEquipmentInstancesContainer(this);
	FeatureRegistry = FEquipmentFeatureRegistryContainer(this);
}

bool UEquipmentManagerComponent::HasAuthority()
{
	return GetOwner()->HasAuthority();
}

UEquipmentManagerComponent* UEquipmentManagerComponent::FindEquipmentManagerComponent(AActor* Actor)
{
	return Actor ? Actor->FindComponentByClass<UEquipmentManagerComponent>() : nullptr;
}

void UEquipmentManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UEquipmentManagerComponent, Instances);
	DOREPLIFETIME(UEquipmentManagerComponent, FeatureRegistry);
}

int32 UEquipmentManagerComponent::ServerOnly_CreateInstance()
{
	if(!GetOwner()->HasAuthority())
	{
		return -1;
	}
	AEquipmentInstance* NewInstance = GetWorld()->SpawnActor<AEquipmentInstance>();
	NewInstance->SetOwner(GetOwner());
	int32 InstanceId = Instances.AddToItems(NewInstance);
	NewInstance->InstanceId = InstanceId;
	NewInstance->ManagerComponent = this;
	return InstanceId;
}

void UEquipmentManagerComponent::NotifyInstanceReplicated(int32 Id, AEquipmentInstance* Instance)
{
	FEquipmentInstanceEntry* Entry = Instances.GetEntry(Id);
	Entry->Instance = Instance;
	// process feature registry
	ProcessFeatureRegistryChange(Id);
}

void UEquipmentManagerComponent::ServerOnly_DestroyInstance(int32 Id)
{
	if(!GetOwner()->HasAuthority())
	{
		return;
	}
	AEquipmentInstance* Instance = GetInstance(Id);
	HandleInstanceDestroyed(Instance);
	Instances.RemoveFromItems(Id);
	Instance->PreInstanceDestroyed();
	Instance->Destroy();
}

void UEquipmentManagerComponent::HandleInstanceDestroyed(AEquipmentInstance* Instance)
{
	OnInstanceRemoved.Broadcast(GetInstanceId(Instance));
}

void UEquipmentManagerComponent::AddFeature(int32 Id, const FName& FeatureName)
{
	AddFeatures(Id, {FeatureName});
}

void UEquipmentManagerComponent::AddFeatures(int32 Id, const TArray<FName>& FeatureNames)
{
	FEquipmentFeatureRegistryEntry* RegistryEntry = FeatureRegistry.GetRegistryEntry(Id);
	if(RegistryEntry)
	{
		RegistryEntry->RegisteredFeatures.Append(FeatureNames);
		ProcessFeatureRegistryChange(Id);
	}
}

void UEquipmentManagerComponent::RemoveFeature(int32 Id, const FName& FeatureName)
{
	RemoveFeatures(Id, {FeatureName});
}

void UEquipmentManagerComponent::RemoveFeatures(int32 Id, const TArray<FName>& FeatureNames)
{
	FEquipmentFeatureRegistryEntry* RegistryEntry = FeatureRegistry.GetRegistryEntry(Id);
	if(RegistryEntry)
	{
		for(auto& FeatureName:FeatureNames)
		{
			RegistryEntry->RegisteredFeatures.Remove(FeatureName);
		}
		ProcessFeatureRegistryChange(Id);
	}
}

void UEquipmentManagerComponent::ProcessFeatureRegistryChange(int32 Id)
{
	if(!IsInitialized())
	{
		return;
	}
	FEquipmentFeatureRegistryEntry* EquipmentFeatureRegistryEntry = FeatureRegistry.GetRegistryEntry(Id);
	if(!EquipmentFeatureRegistryEntry)
	{
		return;
	}
	AEquipmentInstance* EquipmentInstance = GetInstance(Id);
	if(!EquipmentInstance)
	{
		return;
	}
	const TArray<FName> RegisteredFeatures = EquipmentFeatureRegistryEntry->RegisteredFeatures;
	const TArray<FName> AppliedFeatures = EquipmentInstance->GetAppliedFeatures();
	
	FEquipmentManagerFeatureEvent AddEvent;
	AddEvent.Id = Id;
	AddEvent.Type = EEquipmentManagerFeatureEventType::AddFeature;
	for(auto& Feature:RegisteredFeatures)
	{
		if(!AppliedFeatures.Contains(Feature))
		{
			AddEvent.Features.AddUnique(Feature);
		}
	}
	if(!AddEvent.Features.IsEmpty())
	{
		PendingFeatureEvents.Add(AddEvent);
	}
	
	FEquipmentManagerFeatureEvent RemoveEvent;
	RemoveEvent.Id = Id;
	RemoveEvent.Type = EEquipmentManagerFeatureEventType::RemoveFeature;
	for(auto& Feature:AppliedFeatures)
	{
		if(!RegisteredFeatures.Contains(Feature))
		{
			RemoveEvent.Features.Add(Feature);
		}
	}
	if(!RemoveEvent.Features.IsEmpty())
	{
		PendingFeatureEvents.Add(RemoveEvent);
	}
	if(!GetOwner()->HasAuthority())
	{
		int i = 1;
	}
	FlushPendingFeatureEvents();
}

void UEquipmentManagerComponent::NotifyFeatureRegistryChanged(int32 Id)
{
	ProcessFeatureRegistryChange(Id);
}

void UEquipmentManagerComponent::FlushPendingFeatureEvents()
{
	TArray<int32> EventAppliedIndices;
	for(int32 i = 0; i < PendingFeatureEvents.Num(); i++)
	{
		auto& Event = PendingFeatureEvents[i];
		if(HandleFeatureEvent(Event))
		{
			EventAppliedIndices.Add(i);
		}
	}
	for(int32 i = EventAppliedIndices.Num() - 1; i >= 0; i--)
	{
		PendingFeatureEvents.RemoveAtSwap(EventAppliedIndices[i]);
	}
}

bool UEquipmentManagerComponent::HandleFeatureEvent(const FEquipmentManagerFeatureEvent& Event)
{
	AEquipmentInstance* Instance = GetInstance(Event.Id);
	if(Instance)
	{
		if(Event.Type == EEquipmentManagerFeatureEventType::AddFeature)
        {
			Instance->AddFeatures(Event.Features);
        }else
        {
        	Instance->RemoveFeatures(Event.Features);
        }	
		return true;
	}
	return false;
}


FExpandedAbilityGrantSource_GrantHandle UEquipmentManagerComponent::HandleGrantAbility(
	IExpandedAbilityGrantSource* Source, UObject* SourceObject)
{
	FExpandedAbilityGrantSource_GrantHandle NewGrantHandle;
	Source->GiveToAbilitySystem(AbilitySystemComponent, SourceObject, NewGrantHandle);
	return NewGrantHandle;
}

void UEquipmentManagerComponent::HandleRemoveAbility(FExpandedAbilityGrantSource_GrantHandle& Handle)
{
	Handle.RemoveFromAbilitySystem();
}

void UEquipmentManagerComponent::InitializeManager(UAbilitySystemComponent* InAbilitySystemComponent)
{
	AbilitySystemComponent = InAbilitySystemComponent;
	HandleManagerInitialized();
}

void UEquipmentManagerComponent::HandleManagerInitialized()
{
	for(auto& Entry:Instances.Items)
	{
		if(Entry.Instance)
		{
			ProcessFeatureRegistryChange(Entry.Id);
		}
	}
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
	//predictively equip
	EquipEquipment_Internal(Id);
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
	//predictively unequip
	UnequipEquipment_Internal(Id);
}

void UEquipmentManagerComponent::ServerEquipEquipment_Implementation(int32 Id)
{
	EquipEquipment_Internal(Id);
	// Used to calibrate the client prediction
	ClientEquipEquipment(Id);
}

void UEquipmentManagerComponent::ServerUnequipEquipment_Implementation(int32 Id)
{
	UnequipEquipment_Internal(Id);
	// Used to calibrate the client prediction
	ClientUnequipEquipment(Id);
}

void UEquipmentManagerComponent::ClientEquipEquipment_Implementation(int32 Id)
{
	EquipEquipment_Internal(Id);
}

void UEquipmentManagerComponent::ClientUnequipEquipment_Implementation(int32 Id)
{
	UnequipEquipment_Internal(Id);
}

void UEquipmentManagerComponent::EquipEquipment_Internal(int32 Id)
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

void UEquipmentManagerComponent::UnequipEquipment_Internal(int32 Id)
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

void UEquipmentManagerComponent::HandleGameplayCue(UObject* Self, FGameplayTag GameplayCueTag,
	EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters)
{
	for(auto& InstanceEntry:Instances.Items)
	{
		InstanceEntry.Instance->HandleGameplayCue(InstanceEntry.Instance, GameplayCueTag, EventType, Parameters);
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



