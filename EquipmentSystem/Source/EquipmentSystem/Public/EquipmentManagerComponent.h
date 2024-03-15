// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "../../../../ExpandedGameplayAbilitySystem/Source/ExpandedGameplayAbilitySystem/Public/ExpandedAbilityGrantSource.h"
#include "Components/ActorComponent.h"
#include "EquipmentManagerComponent.generated.h"


UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UEquipmentManagerComponent();

	FExpandedAbilityGrantSource_GrantHandle HandleGrantAbility(IExpandedAbilityGrantSource* Source);
	void HandleRemoveAbility(FExpandedAbilityGrantSource_GrantHandle Handle);
	void NotifyInstanceInitialized(AEquipmentInstance* Instance);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
