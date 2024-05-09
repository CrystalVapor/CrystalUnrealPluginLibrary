// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "ExpandedGameplayCueManager.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "BatchedGameplayCueParameter.generated.h"


USTRUCT()
struct FBatchedGameplayCueParameter
{
	GENERATED_BODY()
	virtual ~FBatchedGameplayCueParameter() {}

	// must be implemented by derived class!
	virtual FGameplayCueParameters ToGameplayCueParameters() const
	{
		FGameplayCueParameters Result;
		return Result;
	}
	
	// must be implemented by derived class to keep morphism
	virtual UScriptStruct* GetScriptStruct() const
	{
		return FBatchedGameplayCueParameter::StaticStruct();
	}
};

USTRUCT()
struct FBatchedGameplayCueParameterHandle
{
	GENERATED_BODY()
	FBatchedGameplayCueParameterHandle() {};
	FBatchedGameplayCueParameterHandle(FBatchedGameplayCueParameter* InData)
	{
		Data.Add(TSharedPtr<FBatchedGameplayCueParameter>(InData));
	}
	FBatchedGameplayCueParameterHandle(const TArray<TSharedPtr<FBatchedGameplayCueParameter>>& InData) : Data(InData) {}
	FBatchedGameplayCueParameterHandle(FBatchedGameplayCueParameterHandle&& Other) : Data(MoveTemp(Other.Data)) {}
	FBatchedGameplayCueParameterHandle(const FBatchedGameplayCueParameterHandle& Other) : Data(Other.Data) {}

	FBatchedGameplayCueParameterHandle& operator=(const FBatchedGameplayCueParameterHandle& Other)
	{
		Data = Other.Data;
		return *this;
	}
	FBatchedGameplayCueParameterHandle& operator=(FBatchedGameplayCueParameterHandle&& Other)
	{
		Data = MoveTemp(Other.Data);
		return *this;
	}

	void Add(FBatchedGameplayCueParameter* InData)
	{
		Data.Add(TSharedPtr<FBatchedGameplayCueParameter>(InData));
	}
	
	TArray<TSharedPtr<FBatchedGameplayCueParameter>> Data;

	bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess);
};

template<>
struct TStructOpsTypeTraits<FBatchedGameplayCueParameterHandle> : public TStructOpsTypeTraitsBase2<FBatchedGameplayCueParameterHandle>
{
	enum
	{
		WithCopy = true,
		WithNetSerializer = true
	};
};

USTRUCT()
struct FBatchedGameplayCueParameter_HitResult : public FBatchedGameplayCueParameter
{
	GENERATED_BODY()
	FBatchedGameplayCueParameter_HitResult() {}
	FBatchedGameplayCueParameter_HitResult(FHitResult InHitResult)
	{
		Location = InHitResult.ImpactPoint;
		Normal = InHitResult.ImpactNormal;
		PhysicalMaterial = InHitResult.PhysMaterial.Get();
	}
	FVector Location;
	FVector Normal;
	TWeakObjectPtr<const UPhysicalMaterial> PhysicalMaterial;

	virtual FGameplayCueParameters ToGameplayCueParameters() const override;
	virtual UScriptStruct* GetScriptStruct() const override;
	bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess);
};

template<>
struct TStructOpsTypeTraits<FBatchedGameplayCueParameter_HitResult> : public TStructOpsTypeTraitsBase2<FBatchedGameplayCueParameter_HitResult>
{
	enum
	{
		WithNetSerializer = true
	};
};