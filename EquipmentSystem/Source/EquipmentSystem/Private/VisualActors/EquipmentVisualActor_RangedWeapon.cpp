// Copyright 2024 CrystalVapor


#include "VisualActors/EquipmentVisualActor_RangedWeapon.h"

#include "CRSpreadRecoilComponent.h"
#include "EquipmentInstance.h"
#include "Fragments/EquipmentFragment_RangedWeapon.h"

EXASC_DEFINE_NORMAL_GC_TAG(GameplayCue_Equipment_RangedWeapon_Fire, "GameplayCue.Equipment.RangedWeapon.Fire");
EXASC_DEFINE_BATCH_GC_TAG(GameplayCue_Equipment_RangedWeapon_Impact, "GameplayCue.Equipment.RangedWeapon.Impact");
EXASC_DEFINE_BATCH_GC_TAG(GameplayCue_Equipment_RangedWeapon_Trail, "GameplayCue.Equipment.RangedWeapon.Trail");
EXASC_DEFINE_NORMAL_GC_TAG(GameplayCue_Equipment_RangedWeapon_StartFire, "GameplayCue.Equipment.RangedWeapon.StartFire");
EXASC_DEFINE_NORMAL_GC_TAG(GameplayCue_Equipment_RangedWeapon_StopFire, "GameplayCue.Equipment.RangedWeapon.StopFire");

// Sets default values
AEquipmentVisualActor_RangedWeapon::AEquipmentVisualActor_RangedWeapon()
{
	PrimaryActorTick.bCanEverTick = true;
	RecoilComponent = CreateDefaultSubobject<UCRSpreadRecoilComponent>(TEXT("RecoilComponent"));
}

void AEquipmentVisualActor_RangedWeapon::InitVisualActor(AEquipmentInstance* InOwnerInstance,
	AEquipmentVisualActor* InMasterVisualActor)
{
	Super::InitVisualActor(InOwnerInstance, MasterVisualActor);

	UEquipmentFragment_RangedWeapon* RangedWeaponFragment = InOwnerInstance->GetFragment<UEquipmentFragment_RangedWeapon>();
	RecoilComponent->SetRecoilPattern(RangedWeaponFragment->RecoilPattern);
	RecoilComponent->SetMaxRecoilHeat(RangedWeaponFragment->MaxRecoilHeat);
	RecoilComponent->SetRecoilHeatCoolDownDelay(RangedWeaponFragment->RecoilHeatCoolDownDelay);
	RecoilComponent->SetShotToHeatCurve(RangedWeaponFragment->HeatToHeatPerShotCurve.GetRichCurveConst());
	RecoilComponent->SetHeatToSpreadAngleCurve(RangedWeaponFragment->HeatToSpreadCurve.GetRichCurveConst());
	RecoilComponent->SetHeatToCooldownPerSecondCurve(RangedWeaponFragment->HeatToCoolDownPerSecondCurve.GetRichCurveConst());
	RangedWeaponFragment->GetRecoilHeatSpreadDelegate.BindUObject(RecoilComponent, &UCRSpreadRecoilComponent::GetCurrentSpreadAngle);
}

UCRRecoilComponent* AEquipmentVisualActor_RangedWeapon::GetRecoilComponent()
{
	return RecoilComponent;
}

AController* AEquipmentVisualActor_RangedWeapon::GetTargetController() const
{
	return GetOwnerPawn()->GetController();
}

FVector AEquipmentVisualActor_RangedWeapon::GetTraceStart() const
{
	return GetActorLocation();
}

FVector AEquipmentVisualActor_RangedWeapon::K2_GetTraceStart_Implementation() const
{
	return GetTraceStart();
}

