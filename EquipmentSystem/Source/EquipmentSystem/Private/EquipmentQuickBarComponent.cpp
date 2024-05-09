// Copyright 2024 CrystalVapor


#include "EquipmentQuickBarComponent.h"

#include "EquipmentManagerComponent.h"
#include "Fragments/EquipmentFragment_Equippable.h"


UEquipmentQuickBarComponent::UEquipmentQuickBarComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UEquipmentQuickBarComponent::InitializeQuickBar(UEquipmentManagerComponent* EquipmentManager)
{
	EquipmentManagerComponent = EquipmentManager;
}

void UEquipmentQuickBarComponent::OnEquipmentCreated(int32 Id)
{
	AEquipmentInstance* EquipmentInstance = EquipmentManagerComponent->GetInstance(Id);
	if(EquipmentInstance)
	{
		UEquipmentFragment_Equippable* EquippableFragment = EquipmentInstance->GetFragment<UEquipmentFragment_Equippable>();
		if(EquippableFragment)
		{
			AddToQuickBar(Id, EquippableFragment);
		}
	}
}

void UEquipmentQuickBarComponent::OnEquipmentRemoved(int32 Id)
{
	for(auto& EquipmentInfo:EquipmentInfos)
	{
		if(EquipmentInfo.Id == Id)
		{
			RemoveFromQuickBar(Id);
			break;
		}
	}
}

void UEquipmentQuickBarComponent::AddToQuickBar(int32 Id, UEquipmentFragment_Equippable* EquippableFragment)
{
	FGameplayTagContainer ActivationGroups = EquippableFragment->ActivationGroups;
	FEquipmentQuickBarInfo NewInfo = EquipmentInfos.AddDefaulted_GetRef();
	NewInfo.Id = Id;
	NewInfo.ActivationGroups = ActivationGroups;
	for(auto& ActivationGroup:ActivationGroups)
	{
		ActivationGroupsMap.FindOrAdd(ActivationGroup).Add(Id);
	}
	NewInfo.CanActivate.BindUObject(EquippableFragment, &UEquipmentFragment_Equippable::CanActivate);
	NewInfo.CanDeactivate.BindUObject(EquippableFragment, &UEquipmentFragment_Equippable::CanDeactivate);
}

void UEquipmentQuickBarComponent::RemoveFromQuickBar(int32 Id)
{
	FEquipmentQuickBarInfo* EquipmentInfo = GetEquipmentInfo(Id);
	if(EquipmentInfo)
	{
		for(auto& ActivationGroup:EquipmentInfo->ActivationGroups)
		{
			TArray<int32>* EquipmentIds = ActivationGroupsMap.Find(ActivationGroup);
			if(EquipmentIds)
			{
				EquipmentIds->Remove(Id);
			}
		}
		EquipmentInfos.Remove(*EquipmentInfo);
	}
}

TArray<int32>* UEquipmentQuickBarComponent::GetEquipmentIdsForActivationGroup(FGameplayTag ActivationGroup)
{
	return ActivationGroupsMap.Find(ActivationGroup);
}

void UEquipmentQuickBarComponent::SwitchInActivationGroup(FGameplayTag ActivationGroup)
{
	TArray<int32>* EquipmentIdsPtr = GetEquipmentIdsForActivationGroup(ActivationGroup);
	if(!EquipmentIdsPtr)
	{
		return;
	}
	TArray<int32>& EquipmentIds = *EquipmentIdsPtr;
	int32 ActivatedEquipmentInfoIndex = -1;
	for(int32 i = 0; i < EquipmentIds.Num(); i++)
	{
		AEquipmentInstance* EquipmentInstance = EquipmentManagerComponent->GetInstance(EquipmentIds[i]);
		if(EquipmentInstance)
		{
			if(EquipmentInstance->IsEquipped())
			{
				ActivatedEquipmentInfoIndex = i;
			}
		}
	}
	if(ActivatedEquipmentInfoIndex == -1)
	{
		if(EquipmentIds.Num() > 0)
		{
			ActivateEquipment(EquipmentIds[0]);
		}
	}
	else
	{
		if(EquipmentIds.Num() == 1)
		{
			return;
		}
		if(CanDeactivateEquipment(EquipmentIds[ActivatedEquipmentInfoIndex]))
		{
			int32 NextId = (ActivatedEquipmentInfoIndex + 1) % EquipmentIds.Num();
			for(;NextId != ActivatedEquipmentInfoIndex; NextId = (NextId + 1) % EquipmentIds.Num())
			{
				if(CanActivateEquipment(EquipmentIds[NextId]))
				{
					DeactivateEquipment(EquipmentIds[ActivatedEquipmentInfoIndex]);
					ActivateEquipment(EquipmentIds[NextId]);
					return;
				}
			}
		}
	}
}

bool UEquipmentQuickBarComponent::CanActivateEquipment(int32 Id)
{
	FEquipmentQuickBarInfo* EquipmentQuickBarInfo = GetEquipmentInfo(Id);
	if(EquipmentQuickBarInfo)
	{
		return EquipmentQuickBarInfo->CanActivate.Execute(Id, this);
	}
	return false;
}

bool UEquipmentQuickBarComponent::CanDeactivateEquipment(int32 Id)
{
	FEquipmentQuickBarInfo* EquipmentQuickBarInfo = GetEquipmentInfo(Id);
	if(EquipmentQuickBarInfo)
	{
		return EquipmentQuickBarInfo->CanDeactivate.Execute(Id, this);
	}
	return false;
}

void UEquipmentQuickBarComponent::TryActivateEquipment(int32 Id)
{
	if(CanActivateEquipment(Id))
	{
		ActivateEquipment(Id);
	}
}

void UEquipmentQuickBarComponent::TryDeactivateEquipment(int32 Id)
{
	if(CanDeactivateEquipment(Id))
	{
		DeactivateEquipment(Id);
	}
}

void UEquipmentQuickBarComponent::ActivateEquipment(int32 Id)
{
	EquipmentManagerComponent->EquipEquipment(Id);
}

void UEquipmentQuickBarComponent::DeactivateEquipment(int32 Id)
{
	EquipmentManagerComponent->UnequipEquipment(Id);
}

FGameplayTagContainer UEquipmentQuickBarComponent::GetActivationGroups()
{
	FGameplayTagContainer Result;
	FGameplayTagContainer EmptyGroups;
	for(auto& Pair:ActivationGroupsMap)
	{
		if(Pair.Value.Num()!=0)
		{
			Result.AddTag(Pair.Key);
		}
		else
		{
			EmptyGroups.AddTag(Pair.Key);
		}
	}
	for(auto& Tag:EmptyGroups)
	{
		Result.RemoveTag(Tag);
	}
	return Result;
}

FGameplayTagContainer UEquipmentQuickBarComponent::GetActivationGroupsForEquipment(int32 Id)
{
	FEquipmentQuickBarInfo* EquipmentQuickBarInfo = GetEquipmentInfo(Id);
	if(EquipmentQuickBarInfo)
	{
		return EquipmentQuickBarInfo->ActivationGroups;
	}
	return FGameplayTagContainer();
}

UEquipmentManagerComponent* UEquipmentQuickBarComponent::GetEquipmentManagerComponent()
{
	return EquipmentManagerComponent;
}

FEquipmentQuickBarInfo* UEquipmentQuickBarComponent::GetEquipmentInfo(int32 Id)
{
	for(auto& EquipmentInfo:EquipmentInfos)
	{
		if(EquipmentInfo.Id == Id)
		{
			return &EquipmentInfo;
		}
	}
	return nullptr;
}

