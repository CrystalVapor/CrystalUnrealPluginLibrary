// Copyright 2024 CrystalVapor


#include "EquipmentInstance.h"

#include "EquipmentInstanceInitializeComponent.h"
#include "EquipmentManagerComponent.h"
#include "EquipmentReplicatedPropertyManagerComponent.h"
#include "EquipmentVisualActor.h"


// Sets default values
AEquipmentInstance::AEquipmentInstance()
{
	PrimaryActorTick.bCanEverTick = false;
	SetReplicates(true);

	InitializeComponent = CreateDefaultSubobject<UEquipmentInstanceInitializeComponent>(TEXT("InitializeComponent"));
	InitializeComponent->SetIsReplicated(true);

	ReplicatedPropertyManagerComponent = CreateDefaultSubobject<UEquipmentReplicatedPropertyManagerComponent>(
		TEXT("ReplicatedPropertyManagerComponent"));
	
}

UEquipmentFragment* AEquipmentInstance::GetFragment(TSubclassOf<UEquipmentFragment> FragmentClass)
{
	for(auto& Fragment:Fragments)
	{
		if(Fragment->IsA(FragmentClass))
		{
			return Fragment;
		}
	}
	return nullptr;
}

const float& AEquipmentInstance::GetFloatProperty(FGameplayTag PropertyTag)
{
	for(auto& Fragment:Fragments)
	{
		if(Fragment->HasProperty(PropertyTag))
		{
			return Fragment->GetFloatProperty(PropertyTag);
		}
	}
	checkNoEntry();
	return DefaultFloatProperty;
}

const float& AEquipmentInstance::GetFloatProperty(FGameplayTag PropertyTag,
	TSubclassOf<UEquipmentFragment> FragmentClass)
{
	return GetFragment(FragmentClass)->GetFloatProperty(PropertyTag);
}

const FGameplayTagContainer& AEquipmentInstance::GetTagContainerProperty(FGameplayTag PropertyTag)
{
	for(auto& Fragment:Fragments)
	{
		if(Fragment->HasProperty(PropertyTag))
		{
			return Fragment->GetTagContainerProperty(PropertyTag);
		}
	}
	checkNoEntry();
	return DefaultTagContainerProperty;
}

const FGameplayTagContainer& AEquipmentInstance::GetTagContainerProperty(FGameplayTag PropertyTag,
	TSubclassOf<UEquipmentFragment> FragmentClass)
{
	return GetFragment(FragmentClass)->GetTagContainerProperty(PropertyTag);
}

const FRuntimeFloatCurve& AEquipmentInstance::GetCurveProperty(FGameplayTag PropertyTag)
{
	for(auto& Fragment : Fragments)
	{
		if (Fragment->HasProperty(PropertyTag))
		{
			return Fragment->GetCurveProperty(PropertyTag);
		}
	}
	checkNoEntry();
	return DefaultCurveProperty;
}

const FRuntimeFloatCurve& AEquipmentInstance::GetCurveProperty(FGameplayTag PropertyTag,
	TSubclassOf<UEquipmentFragment> FragmentClass)
{
	return GetFragment(FragmentClass)->GetCurveProperty(PropertyTag);
}

void AEquipmentInstance::InitializeInstance(UEquipmentDefinition* InDefinition, FGameplayTagContainer InFeatureTags,
                                            UEquipmentManagerComponent* InManagerComponent)
{
	if(!HasAuthority())
	{
		return;
	}
	InitializeComponent->SetInitializeSource(InDefinition, InFeatureTags, InManagerComponent);
}

void AEquipmentInstance::LocalInitializeInstance(UEquipmentDefinition* InDefinition, FGameplayTagContainer InFeatureTags,
	UEquipmentManagerComponent* InManagerComponent)
{
	if(InitializeState!=EEquipmentInstanceState::NotInitialized)
	{
		return;
	}
	Definition = InDefinition;
	FeatureTags = InFeatureTags;
	ManagerComponent = InManagerComponent;
	Definition->GetFeatureData(FeatureTags, FeatureData);
	ContinueInitializeInstance();
}

void AEquipmentInstance::ContinueInitializeInstance()
{
	while(CanChangeInitializeState() && InitializeState!=EEquipmentInstanceState::Initialized)
	{
		ToNextInitializeState();
		HandleInitializeInstanceChanged();
	}
}

void AEquipmentInstance::ToNextInitializeState()
{
	InitializeState = static_cast<EEquipmentInstanceState>(static_cast<uint8>(InitializeState) + 1);
}

void AEquipmentInstance::HandleInitializeInstanceChanged()
{
	if(InitializeState == EEquipmentInstanceState::InsideInitializingFragments)
	{
		// Continue initializing fragments
		for(auto& FragmentClass:FeatureData.FragmentClasses)
		{
			TObjectPtr<UEquipmentFragment> Fragment = Fragments.Add_GetRef(NewObject<UEquipmentFragment>(this, FragmentClass));
			Fragment->NotifyStartInsideInitialize(this);
		}
	}
	if(InitializeState == EEquipmentInstanceState::OutsideInitializingFragments)
	{
		// Continue initializing fragments
		for(auto& Fragment:Fragments)
		{
			Fragment->NotifyStartOutsideInitialize(this);
		}
	}
	if(InitializeState == EEquipmentInstanceState::RuminativeInitializingFragments)
	{
		// Continue initializing fragments
		for(auto& Fragment:Fragments)
		{
			Fragment->NotifyStartRuminativeInitialize(this);
		}
	}
	if(InitializeState == EEquipmentInstanceState::FinalInitializingFragments)
	{
		// Continue initializing fragments
		for(auto& Fragment:Fragments)
		{
			Fragment->NotifyStartFinalInitialize(this);
		}
	}
	if(InitializeState == EEquipmentInstanceState::GrantingAbility)
	{
		// Grant Ability
		if(HasAuthority())
		{
			for(auto& AbilityGrantSource:FeatureData.AbilityGrantSources)
			{
				if(AbilityGrantSource->Implements<UExpandedAbilityGrantSource>())
				{
					FExpandedAbilityGrantSource_GrantHandle NewGrantHandle = ManagerComponent->HandleGrantAbility(
						Cast<IExpandedAbilityGrantSource>(AbilityGrantSource), this);
					GrantedAbilityHandle.Append(NewGrantHandle);
				}
			}
		}
	}
	if(InitializeState == EEquipmentInstanceState::Initialized)
	{
		// Finish Initialize, send notification
		ManagerComponent->NotifyInstanceInitialized(this);
		FeatureData.OnFragmentInitialized.Broadcast(this, ManagerComponent);
	}
}

bool AEquipmentInstance::CanChangeInitializeState() const
{
	if(InitializeState == EEquipmentInstanceState::NotInitialized)
	{
		// Can Continue Initialize Instance
		return true;
	}
	if(InitializeState == EEquipmentInstanceState::InsideInitializingFragments)
	{
		// Can Continue Initialize Instance
		for(auto& Fragment:Fragments)
		{
			if(!Fragment->bIsInsideInitialized)
			{
				return false;
			}
		}
		return true;
	}
	if(InitializeState == EEquipmentInstanceState::OutsideInitializingFragments)
	{
		// Can Continue Initialize Instance
		for(auto& Fragment:Fragments)
		{
			if(!Fragment->bIsOutsideInitialized)
			{
				return false;
			}
		}
		return true;
	}
	if(InitializeState == EEquipmentInstanceState::RuminativeInitializingFragments)
	{
		// Can Continue Initialize Instance
		for(auto& Fragment:Fragments)
		{
			if(!Fragment->bIsRuminativeInitialized)
			{
				return false;
			}
		}
		return true;
	}
	if(InitializeState == EEquipmentInstanceState::FinalInitializingFragments)
	{
		// Can Continue Initialize Instance
		for(auto& Fragment:Fragments)
		{
			if(!Fragment->bIsFinialInitialized)
			{
				return false;
			}
		}
		return true;
	}
	if(InitializeState == EEquipmentInstanceState::GrantingAbility)
	{
		// Can Continue Initialize Instance
		return true;
	}
	return false;
}

bool AEquipmentInstance::IsInitializing() const
{
	return InitializeState != EEquipmentInstanceState::Initialized && InitializeState !=
		EEquipmentInstanceState::NotInitialized;
}

void AEquipmentInstance::UninitializeInstance_Implementation()
{
	LocalUninitializeInstance();
}

void AEquipmentInstance::LocalUninitializeInstance()
{
	if (!IsInitialized() || IsInitializing())
	{
		return;
	}
	ManagerComponent->HandleRemoveAbility(GrantedAbilityHandle);
	GrantedAbilityHandle = FExpandedAbilityGrantSource_GrantHandle();
	for (auto& Fragment : Fragments)
	{
		Fragment->NotifyInstanceUninitialized();
	}
	Fragments.Empty();
	for (auto& VisualActor : VisualActors)
	{
		VisualActor->NotifyInstanceUninitialized();
	}
	VisualActors.Empty();
	InitializeState = EEquipmentInstanceState::NotInitialized;
	ManagerComponent = nullptr;
	Definition = nullptr;
	FeatureTags = FGameplayTagContainer();
	FeatureData = FEquipmentFeatureData();
	InitializeComponent->ResetInitializeSource();
}

bool AEquipmentInstance::IsEquipped()
{
	return bIsEquipped; 
}

void AEquipmentInstance::NotifyEquipped()
{
	if(bIsEquipped)
	{
		return;
	}
	bIsEquipped = true;
	OnEquipped.Broadcast(this);
}

void AEquipmentInstance::NotifyUnequipped()
{
	if(!bIsEquipped)
	{
		return;
	}
	bIsEquipped = false;
	OnUnequipped.Broadcast(this);
}

