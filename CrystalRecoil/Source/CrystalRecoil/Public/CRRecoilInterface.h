// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CRRecoilInterface.generated.h"

class UCRRecoilComponent;
// This class does not need to be modified.
UINTERFACE(NotBlueprintable)
class UCRRecoilInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CRYSTALRECOIL_API ICRRecoilInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual UCRRecoilComponent* GetRecoilComponent() = 0;
	
	virtual AController* GetTargetController() const = 0;
	
	UFUNCTION(BlueprintCallable, DisplayName = "Start Shooting")
	virtual void K2_StartShooting()
	{
		StartShooting();
	}

	UFUNCTION(BlueprintCallable, DisplayName = "End Shooting")
	virtual void K2_EndShooting()
	{
		EndShooting();
	}

	UFUNCTION(BlueprintCallable, DisplayName = "Apply Shot")
	virtual void K2_ApplyShot()
	{
		ApplyShot();
	}

	UFUNCTION(BlueprintCallable, DisplayName = "Get Recoil Component")
	virtual UCRRecoilComponent* K2_GetRecoilComponent()
	{
		return GetRecoilComponent();
	}

	virtual void StartShooting();

	virtual void EndShooting();

	virtual void ApplyShot();


	
};
