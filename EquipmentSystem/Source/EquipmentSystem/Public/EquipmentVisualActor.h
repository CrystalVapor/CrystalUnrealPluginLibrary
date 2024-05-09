// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameplayCueInterface.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Actor.h"
#include "EquipmentVisualActor.generated.h"

class AEquipmentInstance;

UCLASS()
class EQUIPMENTSYSTEM_API AEquipmentVisualActor : public AActor, public IGameplayCueInterface, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AEquipmentVisualActor();
	
	// Forced make gameplay cue parameters from hit result where the hit result is a blocking hit or not
	UFUNCTION(Blueprintable, BlueprintPure)
	static FGameplayCueParameters ForceMakeGameplayCueParametersFromHitResult(const FHitResult& HitResult);
	
	void NotifyInstanceUninitialized();
	virtual void InitVisualActor(AEquipmentInstance* InOwnerInstance, AEquipmentVisualActor* InMasterVisualActor = nullptr);
	const FGameplayTagContainer& GetVisualActorTags();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
protected:
	UFUNCTION(BlueprintImplementableEvent)
	void K2_OnVisualActorInitialized();

	// try to get the owner of the instance as a pawn.
	UFUNCTION(BlueprintCallable)
	APawn* GetOwnerPawn() const;
	
	UFUNCTION(BlueprintCallable)
	bool IsEquipped() const;
	virtual void NotifyEquipped(AEquipmentInstance* EquippedInstance);
	virtual void NotifyUnequipped(AEquipmentInstance* UnequippedInstance);
	UFUNCTION(BlueprintImplementableEvent)
	void K2_NotifiedEquipped(AEquipmentInstance* EquippedInstance);
	UFUNCTION(BlueprintImplementableEvent)
	void K2_NotifiedUnequipped(AEquipmentInstance* UnequippedInstance);
	

	// register a sub visual actor to the owner instance's visual actors list.
	UFUNCTION(BlueprintCallable)
	void RegisterSubVisualActor(TSubclassOf<AEquipmentVisualActor> SubVisualActorClass);

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	AEquipmentInstance* OwnerInstance = nullptr;

	// the Visual actor that registered this visual actor as a sub visual actor.
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	AEquipmentVisualActor* MasterVisualActor = nullptr;

	// registered sub visual actors.
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<AEquipmentVisualActor*> SubVisualActors;

	// Specific tags for this visual actor.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FGameplayTagContainer VisualActorTags;
};