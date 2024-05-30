// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Test1.generated.h"

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UTest1 : public UObject
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable)
	void Test1Function(TSubclassOf<UObject> TestParam);
};
