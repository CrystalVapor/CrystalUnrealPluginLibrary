// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/Abilities/EquipmentGameplayAbility_TraceRangedWeapon.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentGameplayAbility_TraceRangedWeapon() {}
// Cross Module References
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	DEFINE_FUNCTION(UEquipmentGameplayAbility_TraceRangedWeapon::execStartLineTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartLineTrace();
		P_NATIVE_END;
	}
	struct EquipmentGameplayAbility_TraceRangedWeapon_eventOnLineTraceTargetDataReady_Parms
	{
		FGameplayAbilityTargetDataHandle Data;
	};
	static FName NAME_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady = FName(TEXT("OnLineTraceTargetDataReady"));
	void UEquipmentGameplayAbility_TraceRangedWeapon::OnLineTraceTargetDataReady(FGameplayAbilityTargetDataHandle const& Data)
	{
		EquipmentGameplayAbility_TraceRangedWeapon_eventOnLineTraceTargetDataReady_Parms Parms;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady),&Parms);
	}
	void UEquipmentGameplayAbility_TraceRangedWeapon::StaticRegisterNativesUEquipmentGameplayAbility_TraceRangedWeapon()
	{
		UClass* Class = UEquipmentGameplayAbility_TraceRangedWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartLineTrace", &UEquipmentGameplayAbility_TraceRangedWeapon::execStartLineTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_TraceRangedWeapon_eventOnLineTraceTargetDataReady_Parms, Data), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics::NewProp_Data_MetaData)) }; // 3993235140
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called both on server and client to process the hit results\n\x09 * @param Data the hit results from the trace\n\x09 */" },
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_TraceRangedWeapon.h" },
		{ "ToolTip", "Called both on server and client to process the hit results\n@param Data the hit results from the trace" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon, nullptr, "OnLineTraceTargetDataReady", nullptr, nullptr, sizeof(EquipmentGameplayAbility_TraceRangedWeapon_eventOnLineTraceTargetDataReady_Parms), Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_StartLineTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_StartLineTrace_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Start a Trace depend on the properties of the weapon\n\x09 */" },
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_TraceRangedWeapon.h" },
		{ "ToolTip", "Start a Trace depend on the properties of the weapon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_StartLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon, nullptr, "StartLineTrace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_StartLineTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_StartLineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_StartLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_StartLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentGameplayAbility_TraceRangedWeapon);
	UClass* Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon_NoRegister()
	{
		return UEquipmentGameplayAbility_TraceRangedWeapon::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_OnLineTraceTargetDataReady, "OnLineTraceTargetDataReady" }, // 3302740214
		{ &Z_Construct_UFunction_UEquipmentGameplayAbility_TraceRangedWeapon_StartLineTrace, "StartLineTrace" }, // 1313265917
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An Example Ability for constructing a trace-based ranged weapon, \n * codes copied from Lyra Game. \n */" },
		{ "IncludePath", "Abilities/EquipmentGameplayAbility_TraceRangedWeapon.h" },
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_TraceRangedWeapon.h" },
		{ "ToolTip", "An Example Ability for constructing a trace-based ranged weapon,\ncodes copied from Lyra Game." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentGameplayAbility_TraceRangedWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon_Statics::ClassParams = {
		&UEquipmentGameplayAbility_TraceRangedWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon()
	{
		if (!Z_Registration_Info_UClass_UEquipmentGameplayAbility_TraceRangedWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentGameplayAbility_TraceRangedWeapon.OuterSingleton, Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentGameplayAbility_TraceRangedWeapon.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentGameplayAbility_TraceRangedWeapon>()
	{
		return UEquipmentGameplayAbility_TraceRangedWeapon::StaticClass();
	}
	UEquipmentGameplayAbility_TraceRangedWeapon::UEquipmentGameplayAbility_TraceRangedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentGameplayAbility_TraceRangedWeapon);
	UEquipmentGameplayAbility_TraceRangedWeapon::~UEquipmentGameplayAbility_TraceRangedWeapon() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_TraceRangedWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_TraceRangedWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentGameplayAbility_TraceRangedWeapon, UEquipmentGameplayAbility_TraceRangedWeapon::StaticClass, TEXT("UEquipmentGameplayAbility_TraceRangedWeapon"), &Z_Registration_Info_UClass_UEquipmentGameplayAbility_TraceRangedWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentGameplayAbility_TraceRangedWeapon), 2018007125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_TraceRangedWeapon_h_2143181117(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_TraceRangedWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_TraceRangedWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
