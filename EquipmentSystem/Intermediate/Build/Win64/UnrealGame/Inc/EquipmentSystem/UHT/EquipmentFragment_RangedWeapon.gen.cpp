// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/Fragments/EquipmentFragment_RangedWeapon.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentFragment_RangedWeapon() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_RangedWeapon();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_RangedWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	void UEquipmentFragment_RangedWeapon::StaticRegisterNativesUEquipmentFragment_RangedWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentFragment_RangedWeapon);
	UClass* Z_Construct_UClass_UEquipmentFragment_RangedWeapon_NoRegister()
	{
		return UEquipmentFragment_RangedWeapon::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDamageRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDamageRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSweepRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponSweepRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletsPerCartridge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletsPerCartridge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRecoilHeat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRecoilHeat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRecoilHeat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRecoilHeat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpreadExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyPunchThrough_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemyPunchThrough;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilCoolDownDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilCoolDownDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeatToSpreadCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeatToSpreadCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeatToHeatPerShotCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeatToHeatPerShotCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeatToCoolDownPerSecondCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeatToCoolDownPerSecondCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEquipmentFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fragments/EquipmentFragment_RangedWeapon.h" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "EquipmentFragment_RangedWeapon" },
		{ "Comment", "/**\n\x09 *  Floats\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
		{ "ToolTip", "Floats" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_RangedWeapon, Damage), METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_FireDelay_MetaData[] = {
		{ "Category", "EquipmentFragment_RangedWeapon" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_FireDelay = { "FireDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_RangedWeapon, FireDelay), METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_FireDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_FireDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MaxDamageRange_MetaData[] = {
		{ "Category", "EquipmentFragment_RangedWeapon" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MaxDamageRange = { "MaxDamageRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_RangedWeapon, MaxDamageRange), METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MaxDamageRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MaxDamageRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_WeaponSweepRadius_MetaData[] = {
		{ "Category", "EquipmentFragment_RangedWeapon" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_WeaponSweepRadius = { "WeaponSweepRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_RangedWeapon, WeaponSweepRadius), METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_WeaponSweepRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_WeaponSweepRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_BulletsPerCartridge_MetaData[] = {
		{ "Category", "EquipmentFragment_RangedWeapon" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_BulletsPerCartridge = { "BulletsPerCartridge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_RangedWeapon, BulletsPerCartridge), METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_BulletsPerCartridge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_BulletsPerCartridge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MaxRecoilHeat_MetaData[] = {
		{ "Category", "EquipmentFragment_RangedWeapon" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MaxRecoilHeat = { "MaxRecoilHeat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_RangedWeapon, MaxRecoilHeat), METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MaxRecoilHeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MaxRecoilHeat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MinRecoilHeat_MetaData[] = {
		{ "Category", "EquipmentFragment_RangedWeapon" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MinRecoilHeat = { "MinRecoilHeat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_RangedWeapon, MinRecoilHeat), METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MinRecoilHeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MinRecoilHeat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_SpreadExponent_MetaData[] = {
		{ "Category", "EquipmentFragment_RangedWeapon" },
		{ "Comment", "// Spread exponent, affects how tightly shots will cluster around the center line\n// when the weapon has spread (non-perfect accuracy). Higher values will cause shots\n// to be closer to the center (default is 1.0 which means uniformly within the spread range)\n" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
		{ "ToolTip", "Spread exponent, affects how tightly shots will cluster around the center line\nwhen the weapon has spread (non-perfect accuracy). Higher values will cause shots\nto be closer to the center (default is 1.0 which means uniformly within the spread range)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_SpreadExponent = { "SpreadExponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_RangedWeapon, SpreadExponent), METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_SpreadExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_SpreadExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_EnemyPunchThrough_MetaData[] = {
		{ "Category", "EquipmentFragment_RangedWeapon" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_EnemyPunchThrough = { "EnemyPunchThrough", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_RangedWeapon, EnemyPunchThrough), METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_EnemyPunchThrough_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_EnemyPunchThrough_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_RecoilCoolDownDelay_MetaData[] = {
		{ "Category", "EquipmentFragment_RangedWeapon" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_RecoilCoolDownDelay = { "RecoilCoolDownDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_RangedWeapon, RecoilCoolDownDelay), METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_RecoilCoolDownDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_RecoilCoolDownDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToSpreadCurve_MetaData[] = {
		{ "Category", "EquipmentFragment_RangedWeapon" },
		{ "Comment", "/*\n\x09 *  Curves\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
		{ "ToolTip", "*  Curves" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToSpreadCurve = { "HeatToSpreadCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_RangedWeapon, HeatToSpreadCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToSpreadCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToSpreadCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToHeatPerShotCurve_MetaData[] = {
		{ "Category", "EquipmentFragment_RangedWeapon" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToHeatPerShotCurve = { "HeatToHeatPerShotCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_RangedWeapon, HeatToHeatPerShotCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToHeatPerShotCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToHeatPerShotCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToCoolDownPerSecondCurve_MetaData[] = {
		{ "Category", "EquipmentFragment_RangedWeapon" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToCoolDownPerSecondCurve = { "HeatToCoolDownPerSecondCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_RangedWeapon, HeatToCoolDownPerSecondCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToCoolDownPerSecondCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToCoolDownPerSecondCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_FireDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MaxDamageRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_WeaponSweepRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_BulletsPerCartridge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MaxRecoilHeat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_MinRecoilHeat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_SpreadExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_EnemyPunchThrough,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_RecoilCoolDownDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToSpreadCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToHeatPerShotCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::NewProp_HeatToCoolDownPerSecondCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentFragment_RangedWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::ClassParams = {
		&UEquipmentFragment_RangedWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentFragment_RangedWeapon()
	{
		if (!Z_Registration_Info_UClass_UEquipmentFragment_RangedWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentFragment_RangedWeapon.OuterSingleton, Z_Construct_UClass_UEquipmentFragment_RangedWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentFragment_RangedWeapon.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentFragment_RangedWeapon>()
	{
		return UEquipmentFragment_RangedWeapon::StaticClass();
	}
	UEquipmentFragment_RangedWeapon::UEquipmentFragment_RangedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentFragment_RangedWeapon);
	UEquipmentFragment_RangedWeapon::~UEquipmentFragment_RangedWeapon() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_RangedWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_RangedWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentFragment_RangedWeapon, UEquipmentFragment_RangedWeapon::StaticClass, TEXT("UEquipmentFragment_RangedWeapon"), &Z_Registration_Info_UClass_UEquipmentFragment_RangedWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentFragment_RangedWeapon), 3504969010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_RangedWeapon_h_1490266461(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_RangedWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_RangedWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
