// Copyright CrystalVapor 2024, All rights reserved.


#include "Features/EquipmentFeature_RangedWeapon.h"

BEGIN_EQUIPMENT_PROPERTY_TAG_DEFINE(UEquipmentFeature_RangedWeapon)
	EQUIPMENT_DEFINE_PROPERTY_TAG(BulletsPerCartridge)
	EQUIPMENT_DEFINE_PROPERTY_TAG(MaxDamageRange)
	EQUIPMENT_DEFINE_PROPERTY_TAG(SpreadExponent)
	EQUIPMENT_DEFINE_PROPERTY_TAG(BulletTraceSweepRadius)
	EQUIPMENT_DEFINE_PROPERTY_TAG(EnemyPunchThrough)
	EQUIPMENT_DEFINE_PROPERTY_TAG(SpreadHeatCooldownDelay)
	EQUIPMENT_DEFINE_PROPERTY_TAG(FireDelay)
	EQUIPMENT_DEFINE_PROPERTY_TAG(RecoilHeatCooldownDelay)
	EQUIPMENT_DEFINE_PROPERTY_TAG(MaxSpreadHeat)
	EQUIPMENT_DEFINE_PROPERTY_TAG(HeatToSpreadCurve)
	EQUIPMENT_DEFINE_PROPERTY_TAG(HeatToHeatPerShotCurve)
	EQUIPMENT_DEFINE_PROPERTY_TAG(HeatToCooldownPerSecondCurve)
END_EQUIPMENT_PROPERTY_TAG_DEFINE()

// Sets default values for this component's properties
UEquipmentFeature_RangedWeapon::UEquipmentFeature_RangedWeapon()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}
