// Copyright 2024 CrystalVapor


#include "Basics/EquipmentManagerComponent.h"

#include "EquipmentSystem.h"
#include "ExpandedAbilityGrantSource.h"
#include "Misc/DataValidation.h"

#include "Net/UnrealNetwork.h"
#include "Systems/EquipmentAssetManager.h"


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
			Manager->HandleInstanceCreated(Entry.Instance);
			// when replicated, try to apply pending feature events associated with this instance
			Manager->FlushPendingFeatureEvents();
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
				Manager->InternalEquipEquipment(Entry.Id);
			}
			else
			{
				Manager->InternalUnequipEquipment(Entry.Id);
			}
		}
	}
}

int32 FEquipmentInstancesContainer::AddToItems(AEquipmentInstance* Instance)
{
	FEquipmentInstanceEntry& Entry = Items.AddDefaulted_GetRef();
	Entry.Id = GetNextId();
	Entry.Instance = Instance;
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
}

UEquipmentManagerComponent* UEquipmentManagerComponent::FindEquipmentManagerComponent(AActor* Actor)
{
	return Actor ? Actor->FindComponentByClass<UEquipmentManagerComponent>() : nullptr;
}

void UEquipmentManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UEquipmentManagerComponent, Instances);
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
	HandleInstanceCreated(NewInstance);
	return InstanceId;
}

void UEquipmentManagerComponent::HandleInstanceCreated(AEquipmentInstance* NewInstance)
{
	NewInstance->ManagerComponent = this;
	OnInstanceCreated.Broadcast(GetInstanceId(NewInstance));
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

void UEquipmentManagerComponent::AddFeature(int32 Id, TSubclassOf<UEquipmentFeature> FeatureClass,
                                            bool bFlushImmediately)
{
	FEquipmentManagerFeatureEvent* Event = nullptr;
 	const int32 Len = PendingFeatureEvents.Num();
	// First try removing any pending remove event for the same feature
	for(int i = 0; i <Len; i++)
	{
		if(PendingFeatureEvents[i].Id == Id && PendingFeatureEvents[i].Type == EEquipmentManagerFeatureEventType::RemoveFeature)
		{
			Event = &PendingFeatureEvents[i];
		}
	}
	if(Event)
	{
		Event->FeatureClasses.RemoveSwap(FeatureClass);
	}
	Event = nullptr;
	// Then try to add the feature
	for(int i = 0; i <Len; i++)
	{
		if(PendingFeatureEvents[i].Id == Id && PendingFeatureEvents[i].Type == EEquipmentManagerFeatureEventType::AddFeature)
		{
			Event = &PendingFeatureEvents[i];
		}
	}
	if(!Event)
	{
		Event = &PendingFeatureEvents.AddDefaulted_GetRef();
		Event->Id = Id;
		Event->Type = EEquipmentManagerFeatureEventType::AddFeature;
	}
	Event->FeatureClasses.AddUnique(FeatureClass);
	if(bFlushImmediately)
	{
		FlushPendingFeatureEvents();
	}
}

void UEquipmentManagerComponent::AddFeatures(int32 Id, const TArray<TSubclassOf<UEquipmentFeature>>& FeatureClasses)
{
	for(const auto FeatureClass: FeatureClasses)
	{
		AddFeature(Id, FeatureClass, false);
	}
	if(FeatureClasses.Num() > 0)
	{
		FlushPendingFeatureEvents();
	}
}

void UEquipmentManagerComponent::AddFeature(int32 Id, const FName& FeatureName, bool bFlushImmediately)
{
	UClass* FeatureClass = FEquipmentSystemModule::Get().GetEquipmentSystemGlobal()->GetEquipmentAssetManager()->GetFeatureClass(FeatureName);
	AddFeature(Id, FeatureClass, bFlushImmediately);
}

void UEquipmentManagerComponent::AddFeatures(int32 Id, const TArray<FName>& FeatureNames)
{
	for(auto& FeatureName:FeatureNames)
	{
		AddFeature(Id, FeatureName, false);
	}
	if(FeatureNames.Num() > 0)
	{
		FlushPendingFeatureEvents();
	}
}

void UEquipmentManagerComponent::RemoveFeature(int32 Id, const FName& FeatureName, bool bFlushImmediately)
{
	UClass* FeatureClass = FEquipmentSystemModule::Get().GetEquipmentSystemGlobal()->GetEquipmentAssetManager()->GetFeatureClass(FeatureName);
	RemoveFeature(Id, FeatureClass, bFlushImmediately);
}

void UEquipmentManagerComponent::RemoveFeatures(int32 Id, const TArray<FName>& FeatureNames)
{
	for(auto& FeatureName:FeatureNames)
	{
		RemoveFeature(Id, FeatureName, false);
	}
	if(FeatureNames.Num() > 0)
	{
		FlushPendingFeatureEvents();
	}
}

void UEquipmentManagerComponent::RemoveFeature(int32 Id, TSubclassOf<UEquipmentFeature> FeatureClass,
                                               bool bFlushImmediately)
{
	FEquipmentManagerFeatureEvent* Event = nullptr;
	const int32 Len = PendingFeatureEvents.Num();
	for(int i = 0; i <Len; i++)
	{
		if(PendingFeatureEvents[i].Id == Id && PendingFeatureEvents[i].Type == EEquipmentManagerFeatureEventType::AddFeature)
		{
			Event = &PendingFeatureEvents[i];
		}
	}
	// we first try to remove the feature before it was added
	if(Event)
	{
		if(Event->FeatureClasses.RemoveSwap(FeatureClass))
		{
			// we have removed the feature from the pending events
			// no more things to do
			return;
		}
	}
	Event = nullptr;
	// No pending add event, we need a remove event
	for(int i = 0; i < Len; i++)
	{
		if(PendingFeatureEvents[i].Id == Id && PendingFeatureEvents[i].Type == EEquipmentManagerFeatureEventType::RemoveFeature)
		{
			Event = &PendingFeatureEvents[i];
		}
	}
	if(!Event)
	{
		Event = &PendingFeatureEvents.AddDefaulted_GetRef();
		Event->Id = Id;
		Event->Type = EEquipmentManagerFeatureEventType::RemoveFeature;
	}
	Event->FeatureClasses.AddUnique(FeatureClass);
}

void UEquipmentManagerComponent::RemoveFeatures(int32 Id, const TArray<TSubclassOf<UEquipmentFeature>>& FeatureClasses)
{
	for(auto& FeatureClass:FeatureClasses)
	{
		RemoveFeature(Id, FeatureClass, false);
	}
	if(FeatureClasses.Num() > 0)
	{
		FlushPendingFeatureEvents();
	}
}

void UEquipmentManagerComponent::MULTICAST_HandleFeatureEvent_Implementation(
	const FEquipmentManagerFeatureEvent& Event)
{
	if(GetOwner()->HasAuthority())
	{
		// We are server, the event is already handled
		return;
	}
	PendingFeatureEvents.Add(Event);
	FlushPendingFeatureEvents();
}

void UEquipmentManagerComponent::FlushPendingFeatureEvents()
{
	if(GetOwner()->HasAuthority())
	{
		ServerOnly_DispatchPendingFeatureEvents();
	}
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

void UEquipmentManagerComponent::ServerOnly_DispatchPendingFeatureEvents()
{
	if(!GetOwner()->HasAuthority())
	{
		return;
	}
	for(auto& Event:PendingFeatureEvents)
	{
		MULTICAST_HandleFeatureEvent(Event);
	}
}

bool UEquipmentManagerComponent::HandleFeatureEvent(const FEquipmentManagerFeatureEvent& Event)
{
	AEquipmentInstance* Instance = GetInstance(Event.Id);
	// On Client, the instance may not be replicated yet
	if(Instance)
	{
		if(Event.Type == EEquipmentManagerFeatureEventType::AddFeature)
        {
        	Instance->AddFeatures(Event.FeatureClasses);
        }else
        {
        	Instance->RemoveFeatures(Event.FeatureClasses);
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

void UEquipmentManagerComponent::NotifyInstanceInitialized(AEquipmentInstance* Instance)
{
	OnInstanceInitialized.Broadcast(GetInstanceId(Instance));
}

void UEquipmentManagerComponent::InitializeManager(UAbilitySystemComponent* InAbilitySystemComponent)
{
	AbilitySystemComponent = InAbilitySystemComponent;
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



