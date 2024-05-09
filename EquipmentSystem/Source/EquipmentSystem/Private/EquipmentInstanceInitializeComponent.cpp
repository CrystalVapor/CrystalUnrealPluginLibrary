// Copyright 2024 CrystalVapor


#include "EquipmentInstanceInitializeComponent.h"

#include "../Public/EquipmentInstance.h"
#include "Net/UnrealNetwork.h"

namespace EquipmentInstanceInitializeComponent
{
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Equipment_Util_FeatureTagIsEmpty, "Equipment.Util.FeatureTagIsEmpty", "This tag is used to check if the feature tag container is empty.");
}

UEquipmentInstanceInitializeComponent::UEquipmentInstanceInitializeComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);
}

void UEquipmentInstanceInitializeComponent::BeginPlay()
{
	Super::BeginPlay();
	CheckInstanceInitializeStatus();
}

void UEquipmentInstanceInitializeComponent::GetLifetimeReplicatedProps(
	TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UEquipmentInstanceInitializeComponent, Definition);
	DOREPLIFETIME(UEquipmentInstanceInitializeComponent, FeatureTags);
	DOREPLIFETIME(UEquipmentInstanceInitializeComponent, ManagerComponent);
}

void UEquipmentInstanceInitializeComponent::CheckInstanceInitializeStatus()
{
	if(GetInstance()->IsInitialized())
	{
		return;
	}
	if (    Definition
		&&  ManagerComponent
		&& !FeatureTags.HasTag(EquipmentInstanceInitializeComponent::Equipment_Util_FeatureTagIsEmpty))
	{
		GetInstance()->LocalInitializeInstance(Definition, FeatureTags, ManagerComponent);
	}
}

void UEquipmentInstanceInitializeComponent::SetInitializeSource(UEquipmentDefinition* InDefinition,
	FGameplayTagContainer InFeatureTags, UEquipmentManagerComponent* InManagerComponent)
{
	if(!GetOwner()->HasAuthority())
	{
		return;
	}
	Definition = InDefinition;
	FeatureTags = InFeatureTags;
	ManagerComponent = InManagerComponent;
	CheckInstanceInitializeStatus();
}

void UEquipmentInstanceInitializeComponent::ResetInitializeSource()
{
	Definition = nullptr;
	FeatureTags = FGameplayTagContainer(EquipmentInstanceInitializeComponent::Equipment_Util_FeatureTagIsEmpty);
	ManagerComponent = nullptr;
}

AEquipmentInstance* UEquipmentInstanceInitializeComponent::GetInstance()
{
	return Cast<AEquipmentInstance>(GetOwner());
}

void UEquipmentInstanceInitializeComponent::OnRep_Definition()
{
	CheckInstanceInitializeStatus();
}

void UEquipmentInstanceInitializeComponent::OnRep_FeatureTags()
{
	CheckInstanceInitializeStatus();
}

void UEquipmentInstanceInitializeComponent::OnRep_ManagerComponent()
{
	CheckInstanceInitializeStatus();
}

