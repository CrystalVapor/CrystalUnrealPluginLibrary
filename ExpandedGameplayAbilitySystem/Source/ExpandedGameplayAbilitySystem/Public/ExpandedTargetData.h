// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "ExpandedTargetData.generated.h"

USTRUCT()
struct EXPANDEDGAMEPLAYABILITYSYSTEM_API FGameplayAbilityTargetData_HitResultWithInt: public FGameplayAbilityTargetData
{
	GENERATED_BODY()
	
	FGameplayAbilityTargetData_HitResultWithInt() {};
	FGameplayAbilityTargetData_HitResultWithInt(FHitResult InHitResult, int32 InIntValue): HitResult(MoveTemp(InHitResult)), IntValue(InIntValue) {};
	
	FHitResult HitResult;
	int32 IntValue = 0;
	static int32 GetIntValue(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);

	virtual TArray<TWeakObjectPtr<AActor> >	GetActors() const override
	{
		TArray<TWeakObjectPtr<AActor> >	Actors;
		if (HitResult.HasValidHitObjectHandle())
		{
			Actors.Push(HitResult.HitObjectHandle.FetchActor());
		}
		return Actors;
	}

	// SetActors() will not work here because the actor "array" is drawn from the hit result data, and changing that doesn't make sense.

	// -------------------------------------

	virtual bool HasHitResult() const override
	{
		return true;
	}

	virtual const FHitResult* GetHitResult() const override
	{
		return &HitResult;
	}

	virtual bool HasOrigin() const override
	{
		return true;
	}

	virtual FTransform GetOrigin() const override
	{
		return FTransform((HitResult.TraceEnd - HitResult.TraceStart).Rotation(), HitResult.TraceStart);
	}

	virtual bool HasEndPoint() const override
	{
		return true;
	}

	virtual FVector GetEndPoint() const override
	{
		return HitResult.Location;
	}

	virtual void ReplaceHitWith(AActor* NewHitActor, const FHitResult* NewHitResult)
	{
		bHitReplaced = true;

		HitResult = FHitResult();
		if (NewHitResult != nullptr)
		{
			HitResult = *NewHitResult;
		}
	}

	bool bHitReplaced = false;
	
	virtual UScriptStruct* GetScriptStruct() const override;
	bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool &bOutSuccess);
};

template<>
struct TStructOpsTypeTraits<FGameplayAbilityTargetData_HitResultWithInt> : public TStructOpsTypeTraitsBase2<FGameplayAbilityTargetData_HitResultWithInt>
{
	enum
	{
		WithNetSerializer = true,
	};
};