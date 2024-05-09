// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentGameplayAbility_RangedWeapon.h"
#include "EquipmentGameplayAbility_TraceRangedWeapon.generated.h"

class UEquipmentFragment_TraceRangedWeapon;
/**
 * An Example Ability for constructing a trace-based ranged weapon, 
 * codes copied from Lyra Game. 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentGameplayAbility_TraceRangedWeapon : public UEquipmentGameplayAbility_RangedWeapon
{
	GENERATED_BODY()
public:

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	
	UEquipmentFragment_TraceRangedWeapon* GetTraceRangedWeaponFragment();
	
	static int32 FindFirstPawnHitIndex(const TArray<FHitResult>& Hits, int32 StartIndex = 0);

	/**
	 * Add all the actor attached to the avatar to the ignore list
	 * @param Params the params to add to
	 */
	void AddAditionalTraceIgnoreActors(FCollisionQueryParams& Params);

	const ECollisionChannel DetermineTraceChannel(FCollisionQueryParams QueryParams, bool bIsSimulated);
	
	/**
	 * Start a Trace depend on the properties of the weapon
	 */
	UFUNCTION(BlueprintCallable)
	void StartLineTrace();

	/**
	 * Called both on server and client to process the hit results
	 * @param Data the hit results from the trace
	 */
	UFUNCTION(BlueprintImplementableEvent)
	void OnLineTraceTargetDataReady(const FGameplayAbilityTargetDataHandle& Data);

	/**
	 * Called on both server and client to process the hit results. 
	 * on server, the target data will be validated.
	 * @param Data
	 * @param ApplicationTag 
	 */
	void OnLineTraceTargetDataPrepared(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ApplicationTag);
	/**
	 * Get the current firing input from the avatar pawn
	 */
	void GetCurrentFiringInput(APawn* AvatarPawn, FRangedWeaponFiringInput& FiringInput);

	/**
	 * Do the actual trace Locally.
	 * @param OutHits the hit results from the trace
	 */
	void PerformLocalTargeting(OUT TArray<FHitResult>& OutHits);

	/**
	 * Do line trace for all the bullets in the cartridge
	 * @param InputData the input data for the trace, include startLoc and aimDir
	 * @param OutHits the hit results from the trace
	 */
	void TraceBulletsInCartridge(const FRangedWeaponFiringInput& InputData, OUT TArray<FHitResult>& OutHits);

	/**
	 * Perform a single bullet trace
	 * @param StartTrace where the trace starts
	 * @param EndTrace where the trace ends
	 * @param SweepRadius the radius of the sweep, 0 to disable
	 * @param bIsSimulated 
	 * @param OutHits the hit results from the trace
	 * @return the first hit result
	 */
	FHitResult DoSingleBulletTrace(const FVector& StartTrace, const FVector& EndTrace, float SweepRadius, bool bIsSimulated, OUT TArray<FHitResult>& OutHits);

	/**
	 * Filter the hit results by the weapon's punch through, will remove all the hits that are not valid
	 * an automatically set the last hit's a blocking hit
	 * @param OutHits
	 * @param Impact 
	 * @return 
	 */
	FHitResult FilterSingleBulletPunchThrough(TArray<FHitResult>& OutHits, FHitResult Impact);

	/**
	 * Where the line trace is performed
	 */
	FHitResult WeaponTrace(const FVector& StartTrace, const FVector& EndTrace, float SweepRadius, bool bIsSimulated, OUT TArray<FHitResult>& OutHitResults);
	
	bool ServerValidateTargetData(FRangedWeaponFiringInput& InputData, const FGameplayAbilityTargetDataHandle& Data);

	FDelegateHandle OnTargetDataReadyCallbackDelegateHandle;
};
