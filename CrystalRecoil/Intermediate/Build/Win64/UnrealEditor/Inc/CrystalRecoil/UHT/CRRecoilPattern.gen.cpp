// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrystalRecoil/Public/CRRecoilPattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRRecoilPattern() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRRecoilPattern();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRRecoilPattern_NoRegister();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRRecoilUnitGraph_NoRegister();
	CRYSTALRECOIL_API UEnum* Z_Construct_UEnum_CrystalRecoil_ERecoilBehaviorOnShotLimitReached();
	CRYSTALRECOIL_API UScriptStruct* Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_CrystalRecoil();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERecoilBehaviorOnShotLimitReached;
	static UEnum* ERecoilBehaviorOnShotLimitReached_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERecoilBehaviorOnShotLimitReached.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERecoilBehaviorOnShotLimitReached.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrystalRecoil_ERecoilBehaviorOnShotLimitReached, (UObject*)Z_Construct_UPackage__Script_CrystalRecoil(), TEXT("ERecoilBehaviorOnShotLimitReached"));
		}
		return Z_Registration_Info_UEnum_ERecoilBehaviorOnShotLimitReached.OuterSingleton;
	}
	template<> CRYSTALRECOIL_API UEnum* StaticEnum<ERecoilBehaviorOnShotLimitReached>()
	{
		return ERecoilBehaviorOnShotLimitReached_StaticEnum();
	}
	struct Z_Construct_UEnum_CrystalRecoil_ERecoilBehaviorOnShotLimitReached_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CrystalRecoil_ERecoilBehaviorOnShotLimitReached_Statics::Enumerators[] = {
		{ "ERecoilBehaviorOnShotLimitReached::RepeatLast", (int64)ERecoilBehaviorOnShotLimitReached::RepeatLast },
		{ "ERecoilBehaviorOnShotLimitReached::Stop", (int64)ERecoilBehaviorOnShotLimitReached::Stop },
		{ "ERecoilBehaviorOnShotLimitReached::RestartFromCustomIndex", (int64)ERecoilBehaviorOnShotLimitReached::RestartFromCustomIndex },
		{ "ERecoilBehaviorOnShotLimitReached::Random", (int64)ERecoilBehaviorOnShotLimitReached::Random },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CrystalRecoil_ERecoilBehaviorOnShotLimitReached_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
		{ "Random.Name", "ERecoilBehaviorOnShotLimitReached::Random" },
		{ "RepeatLast.Name", "ERecoilBehaviorOnShotLimitReached::RepeatLast" },
		{ "RestartFromCustomIndex.Name", "ERecoilBehaviorOnShotLimitReached::RestartFromCustomIndex" },
		{ "Stop.Name", "ERecoilBehaviorOnShotLimitReached::Stop" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrystalRecoil_ERecoilBehaviorOnShotLimitReached_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CrystalRecoil,
		nullptr,
		"ERecoilBehaviorOnShotLimitReached",
		"ERecoilBehaviorOnShotLimitReached",
		Z_Construct_UEnum_CrystalRecoil_ERecoilBehaviorOnShotLimitReached_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CrystalRecoil_ERecoilBehaviorOnShotLimitReached_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CrystalRecoil_ERecoilBehaviorOnShotLimitReached_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CrystalRecoil_ERecoilBehaviorOnShotLimitReached_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CrystalRecoil_ERecoilBehaviorOnShotLimitReached()
	{
		if (!Z_Registration_Info_UEnum_ERecoilBehaviorOnShotLimitReached.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERecoilBehaviorOnShotLimitReached.InnerSingleton, Z_Construct_UEnum_CrystalRecoil_ERecoilBehaviorOnShotLimitReached_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERecoilBehaviorOnShotLimitReached.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecoilPatternRandomizedRecoil;
class UScriptStruct* FRecoilPatternRandomizedRecoil::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecoilPatternRandomizedRecoil.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecoilPatternRandomizedRecoil.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil, (UObject*)Z_Construct_UPackage__Script_CrystalRecoil(), TEXT("RecoilPatternRandomizedRecoil"));
	}
	return Z_Registration_Info_UScriptStruct_RecoilPatternRandomizedRecoil.OuterSingleton;
}
template<> CRYSTALRECOIL_API UScriptStruct* StaticStruct<FRecoilPatternRandomizedRecoil>()
{
	return FRecoilPatternRandomizedRecoil::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomXRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomXRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomYRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomYRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecoilPatternRandomizedRecoil>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::NewProp_RandomXRange_MetaData[] = {
		{ "Category", "RecoilPatternRandomizedRecoil" },
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::NewProp_RandomXRange = { "RandomXRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecoilPatternRandomizedRecoil, RandomXRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::NewProp_RandomXRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::NewProp_RandomXRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::NewProp_RandomYRange_MetaData[] = {
		{ "Category", "RecoilPatternRandomizedRecoil" },
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::NewProp_RandomYRange = { "RandomYRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecoilPatternRandomizedRecoil, RandomYRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::NewProp_RandomYRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::NewProp_RandomYRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::NewProp_RandomXRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::NewProp_RandomYRange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CrystalRecoil,
		nullptr,
		&NewStructOps,
		"RecoilPatternRandomizedRecoil",
		sizeof(FRecoilPatternRandomizedRecoil),
		alignof(FRecoilPatternRandomizedRecoil),
		Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil()
	{
		if (!Z_Registration_Info_UScriptStruct_RecoilPatternRandomizedRecoil.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecoilPatternRandomizedRecoil.InnerSingleton, Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RecoilPatternRandomizedRecoil.InnerSingleton;
	}
	void UCRRecoilPattern::StaticRegisterNativesUCRRecoilPattern()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCRRecoilPattern);
	UClass* Z_Construct_UClass_UCRRecoilPattern_NoRegister()
	{
		return UCRRecoilPattern::StaticClass();
	}
	struct Z_Construct_UClass_UCRRecoilPattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilUnitGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RecoilUnitGraph;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RecoilBehaviorOnShotLimitReached_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilBehaviorOnShotLimitReached_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RecoilBehaviorOnShotLimitReached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRecoilRestartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomRecoilRestartIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomizedRecoil_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomizedRecoil;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilUpliftDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilUpliftDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilShiftAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilShiftAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoveryDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoveryDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRecoverySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRecoverySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoveryAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoveryAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCRRecoilPattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CrystalRecoil,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilPattern_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CRRecoilPattern.h" },
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilUnitGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilUnitGraph = { "RecoilUnitGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilPattern, RecoilUnitGraph), Z_Construct_UClass_UCRRecoilUnitGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilUnitGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilUnitGraph_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilBehaviorOnShotLimitReached_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilBehaviorOnShotLimitReached_MetaData[] = {
		{ "Category", "CRRecoilPattern" },
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilBehaviorOnShotLimitReached = { "RecoilBehaviorOnShotLimitReached", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilPattern, RecoilBehaviorOnShotLimitReached), Z_Construct_UEnum_CrystalRecoil_ERecoilBehaviorOnShotLimitReached, METADATA_PARAMS(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilBehaviorOnShotLimitReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilBehaviorOnShotLimitReached_MetaData)) }; // 734737317
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_CustomRecoilRestartIndex_MetaData[] = {
		{ "Category", "CRRecoilPattern" },
		{ "EditCondition", "RecoilBehaviorOnShotLimitReached == ERecoilBehaviorOnShotLimitReached::RestartFromCustomIndex" },
		{ "EditConditionHides", "TRUE" },
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_CustomRecoilRestartIndex = { "CustomRecoilRestartIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilPattern, CustomRecoilRestartIndex), METADATA_PARAMS(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_CustomRecoilRestartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_CustomRecoilRestartIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RandomizedRecoil_MetaData[] = {
		{ "Category", "CRRecoilPattern" },
		{ "EditCondition", "RecoilBehaviorOnShotLimitReached == ERecoilBehaviorOnShotLimitReached::Random" },
		{ "EditConditionHides", "TRUE" },
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RandomizedRecoil = { "RandomizedRecoil", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilPattern, RandomizedRecoil), Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil, METADATA_PARAMS(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RandomizedRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RandomizedRecoil_MetaData)) }; // 3148532394
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilUpliftDuration_MetaData[] = {
		{ "Category", "Recoil Basics" },
		{ "Comment", "// The time it takes to reach the recoil uplift\n" },
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
		{ "ToolTip", "The time it takes to reach the recoil uplift" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilUpliftDuration = { "RecoilUpliftDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilPattern, RecoilUpliftDuration), METADATA_PARAMS(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilUpliftDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilUpliftDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilShiftAcceleration_MetaData[] = {
		{ "Category", "Recoil Basics" },
		{ "Comment", "// The Shift Acceleration of the recoil, affects the initial speed of the recoil\n" },
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
		{ "ToolTip", "The Shift Acceleration of the recoil, affects the initial speed of the recoil" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilShiftAcceleration = { "RecoilShiftAcceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilPattern, RecoilShiftAcceleration), METADATA_PARAMS(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilShiftAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilShiftAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoveryDelay_MetaData[] = {
		{ "Category", "Recoil Basics" },
		{ "Comment", "// The Delay before we start the recovery of the recoil since fired\n" },
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
		{ "ToolTip", "The Delay before we start the recovery of the recoil since fired" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoveryDelay = { "RecoveryDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilPattern, RecoveryDelay), METADATA_PARAMS(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoveryDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoveryDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_MaxRecoverySpeed_MetaData[] = {
		{ "Category", "Recoil Basics" },
		{ "Comment", "// Max Recovery Speed\n" },
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
		{ "ToolTip", "Max Recovery Speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_MaxRecoverySpeed = { "MaxRecoverySpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilPattern, MaxRecoverySpeed), METADATA_PARAMS(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_MaxRecoverySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_MaxRecoverySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoveryAcceleration_MetaData[] = {
		{ "Category", "Recoil Basics" },
		{ "Comment", "// Acceleration of the recovery\n" },
		{ "ModuleRelativePath", "Public/CRRecoilPattern.h" },
		{ "ToolTip", "Acceleration of the recovery" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoveryAcceleration = { "RecoveryAcceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilPattern, RecoveryAcceleration), METADATA_PARAMS(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoveryAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoveryAcceleration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCRRecoilPattern_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilUnitGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilBehaviorOnShotLimitReached_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilBehaviorOnShotLimitReached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_CustomRecoilRestartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RandomizedRecoil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilUpliftDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoilShiftAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoveryDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_MaxRecoverySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilPattern_Statics::NewProp_RecoveryAcceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCRRecoilPattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCRRecoilPattern>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCRRecoilPattern_Statics::ClassParams = {
		&UCRRecoilPattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCRRecoilPattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilPattern_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCRRecoilPattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilPattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCRRecoilPattern()
	{
		if (!Z_Registration_Info_UClass_UCRRecoilPattern.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCRRecoilPattern.OuterSingleton, Z_Construct_UClass_UCRRecoilPattern_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCRRecoilPattern.OuterSingleton;
	}
	template<> CRYSTALRECOIL_API UClass* StaticClass<UCRRecoilPattern>()
	{
		return UCRRecoilPattern::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCRRecoilPattern);
	UCRRecoilPattern::~UCRRecoilPattern() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilPattern_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilPattern_h_Statics::EnumInfo[] = {
		{ ERecoilBehaviorOnShotLimitReached_StaticEnum, TEXT("ERecoilBehaviorOnShotLimitReached"), &Z_Registration_Info_UEnum_ERecoilBehaviorOnShotLimitReached, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 734737317U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilPattern_h_Statics::ScriptStructInfo[] = {
		{ FRecoilPatternRandomizedRecoil::StaticStruct, Z_Construct_UScriptStruct_FRecoilPatternRandomizedRecoil_Statics::NewStructOps, TEXT("RecoilPatternRandomizedRecoil"), &Z_Registration_Info_UScriptStruct_RecoilPatternRandomizedRecoil, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecoilPatternRandomizedRecoil), 3148532394U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilPattern_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCRRecoilPattern, UCRRecoilPattern::StaticClass, TEXT("UCRRecoilPattern"), &Z_Registration_Info_UClass_UCRRecoilPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCRRecoilPattern), 3998719643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilPattern_h_1655953204(TEXT("/Script/CrystalRecoil"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilPattern_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilPattern_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilPattern_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilPattern_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilPattern_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilPattern_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
