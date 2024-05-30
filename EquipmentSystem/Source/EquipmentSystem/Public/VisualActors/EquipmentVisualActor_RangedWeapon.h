// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "CRRecoilInterface.h"
#include "Basics/EquipmentVisualActor.h"
#include "ExpandedGameplayCueManager.h"
#include "NativeGameplayTags.h"
#include "EquipmentVisualActor_RangedWeapon.generated.h"

class UCRSpreadRecoilComponent;
EXASC_DECLARE_NORMAL_GC_TAG(GameplayCue_Equipment_RangedWeapon_Fire);
EXASC_DECLARE_BATCH_GC_TAG(GameplayCue_Equipment_RangedWeapon_Impact);
EXASC_DECLARE_BATCH_GC_TAG(GameplayCue_Equipment_RangedWeapon_Trail)
EXASC_DECLARE_NORMAL_GC_TAG(GameplayCue_Equipment_RangedWeapon_StartFire);
EXASC_DECLARE_NORMAL_GC_TAG(GameplayCue_Equipment_RangedWeapon_StopFire);


UCLASS()
class EQUIPMENTSYSTEM_API AEquipmentVisualActor_RangedWeapon : public AEquipmentVisualActor, public ICRRecoilInterface
{
	GENERATED_BODY()

public:
	AEquipmentVisualActor_RangedWeapon();

	virtual void InitVisualActor(AEquipmentInstance* InOwnerInstance) override;

	//ICRRecoilInterface
	virtual UCRRecoilComponent* GetRecoilComponent() override;
	virtual AController* GetTargetController() const override;
	//~ICRRecoilInterface
	
	virtual FVector GetTraceStart() const;
	
	UFUNCTION(BlueprintNativeEvent)
	FVector K2_GetTraceStart() const;

protected:
	UPROPERTY(BlueprintReadOnly)
	UCRSpreadRecoilComponent* RecoilComponent;
};
