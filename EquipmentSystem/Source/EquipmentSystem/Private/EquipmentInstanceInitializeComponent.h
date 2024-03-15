// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NativeGameplayTags.h"
#include "Components/ActorComponent.h"
#include "EquipmentInstanceInitializeComponent.generated.h"

namespace EquipmentInstanceInitializeComponent
{
	EQUIPMENTSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Equipment_Util_FeatureTagIsEmpty);
}

UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentInstanceInitializeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UEquipmentInstanceInitializeComponent();
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	void CheckInstanceInitializeStatus();
	void SetInitializeSource(class UEquipmentDefinition* Definition, FGameplayTagContainer FeatureTags, class UEquipmentManagerComponent* ManagerComponent);
	void ResetInitializeSource();
	
protected:
	class AEquipmentInstance* GetInstance();
	UFUNCTION()
	void OnRep_Definition();
	UFUNCTION()
	void OnRep_FeatureTags();
	UFUNCTION()
	void OnRep_ManagerComponent();
	
	UPROPERTY(ReplicatedUsing=OnRep_Definition)
	UEquipmentDefinition* Definition = nullptr;
	UPROPERTY(ReplicatedUsing=OnRep_FeatureTags)
	FGameplayTagContainer FeatureTags = FGameplayTagContainer(EquipmentInstanceInitializeComponent::Equipment_Util_FeatureTagIsEmpty);
	UPROPERTY(ReplicatedUsing=OnRep_ManagerComponent)
	UEquipmentManagerComponent* ManagerComponent = nullptr;
};
