// Copyright 2024 CrystalVapor


#include "VisualActors/EquipmentVisualActor_RangedWeapon.h"

#include "CRSpreadRecoilComponent.h"
#include "Basics/EquipmentInstance.h"
#include "Features/EquipmentFeature_RangedWeapon.h"

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

void AEquipmentVisualActor_RangedWeapon::InitVisualActor(AEquipmentInstance* InOwnerInstance)
{
	Super::InitVisualActor(InOwnerInstance);
	auto Feature = InOwnerInstance->GetFeature<UEquipmentFeature_RangedWeapon>();
	check(Feature);
	RecoilComponent->SetRecoilPattern(Feature->RecoilPattern);
	RecoilComponent->SetMaxRecoilHeat(Feature->MaxSpreadHeat);
	RecoilComponent->SetRecoilHeatCoolDownDelay(Feature->RecoilHeatCooldownDelay);
	RecoilComponent->SetShotToHeatCurve(Feature->HeatToHeatPerShotCurve.GetRichCurveConst());
	RecoilComponent->SetHeatToCooldownPerSecondCurve(Feature->HeatToCooldownPerSecondCurve.GetRichCurveConst());
	RecoilComponent->SetHeatToSpreadAngleCurve(Feature->HeatToSpreadCurve.GetRichCurveConst());
	Feature->GetRecoilHeatSpreadDelegate.BindUObject(RecoilComponent, &UCRSpreadRecoilComponent::GetCurrentSpreadAngle);
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

