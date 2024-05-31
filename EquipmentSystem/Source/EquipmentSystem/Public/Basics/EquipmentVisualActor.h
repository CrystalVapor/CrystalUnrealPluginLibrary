// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameplayCueInterface.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Actor.h"
#include "Utils/EquipmentSystemTypes.h"
#include "EquipmentVisualActor.generated.h"

class AEquipmentInstance;

UENUM()
enum class EEquipmentVisualActorRegisterSetting:uint8
{
	AfterSubVisualActors,
	BeforeSubVisualActors
};

USTRUCT()
struct FEquipmentSubVisualActorRegisterEntry
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	FName SubVisualActorName;
	UPROPERTY(EditDefaultsOnly)
	EEquipmentVisualActorRegisterSetting RegisterSetting = EEquipmentVisualActorRegisterSetting::BeforeSubVisualActors;
};

UCLASS()
class EQUIPMENTSYSTEM_API AEquipmentVisualActor : public AActor, public IGameplayCueInterface, public IAbilitySystemInterface
{
	GENERATED_BODY()
	friend class UEquipmentVisualActorManager;
	friend class AEquipmentInstance;
public:
	AEquipmentVisualActor();
	const FName& GetVisualActorName();
	
	// Forced make gameplay cue parameters from hit result where the hit result is a blocking hit or not
	UFUNCTION(Blueprintable, BlueprintPure)
	static FGameplayCueParameters ForceMakeGameplayCueParametersFromHitResult(const FHitResult& HitResult);
	
	void NotifyInstanceUninitialized();
	virtual void InitVisualActor(AEquipmentInstance* InOwnerInstance);

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

	UPROPERTY(EditAnywhere, AssetRegistrySearchable)
	FName VisualActorName;

	UPROPERTY(EditAnywhere, AssetRegistrySearchable)
	FEquipmentVisualActorSpecifier VisualActorSpecifier;

	UPROPERTY(EditAnywhere)
	TArray<FEquipmentSubVisualActorRegisterEntry> SubVisualActorRegisterEntries;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	AEquipmentInstance* OwnerInstance = nullptr;
};