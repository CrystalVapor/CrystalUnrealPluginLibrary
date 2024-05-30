// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Test2.generated.h"

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UTest2 : public UObject
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, CustomThunk)
	void Test2Function(TSubclassOf<UObject> TestParam);
	DECLARE_FUNCTION(execTest2Function);
};
