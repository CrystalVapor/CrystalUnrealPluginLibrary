// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/VisualActors/EquipmentVisualActor_RangedWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentVisualActor_RangedWeapon() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentVisualActor();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	DEFINE_FUNCTION(AEquipmentVisualActor_RangedWeapon::execK2_GetTraceStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->K2_GetTraceStart_Implementation();
		P_NATIVE_END;
	}
	struct EquipmentVisualActor_RangedWeapon_eventK2_GetTraceStart_Parms
	{
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		EquipmentVisualActor_RangedWeapon_eventK2_GetTraceStart_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	static FName NAME_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart = FName(TEXT("K2_GetTraceStart"));
	FVector AEquipmentVisualActor_RangedWeapon::K2_GetTraceStart() const
	{
		EquipmentVisualActor_RangedWeapon_eventK2_GetTraceStart_Parms Parms;
		const_cast<AEquipmentVisualActor_RangedWeapon*>(this)->ProcessEvent(FindFunctionChecked(NAME_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart),&Parms);
		return Parms.ReturnValue;
	}
	void AEquipmentVisualActor_RangedWeapon::StaticRegisterNativesAEquipmentVisualActor_RangedWeapon()
	{
		UClass* Class = AEquipmentVisualActor_RangedWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_GetTraceStart", &AEquipmentVisualActor_RangedWeapon::execK2_GetTraceStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentVisualActor_RangedWeapon_eventK2_GetTraceStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VisualActors/EquipmentVisualActor_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon, nullptr, "K2_GetTraceStart", nullptr, nullptr, sizeof(EquipmentVisualActor_RangedWeapon_eventK2_GetTraceStart_Parms), Z_Construct_UFunction_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEquipmentVisualActor_RangedWeapon);
	UClass* Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon_NoRegister()
	{
		return AEquipmentVisualActor_RangedWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEquipmentVisualActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEquipmentVisualActor_RangedWeapon_K2_GetTraceStart, "K2_GetTraceStart" }, // 3429393805
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VisualActors/EquipmentVisualActor_RangedWeapon.h" },
		{ "ModuleRelativePath", "Public/VisualActors/EquipmentVisualActor_RangedWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEquipmentVisualActor_RangedWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon_Statics::ClassParams = {
		&AEquipmentVisualActor_RangedWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon()
	{
		if (!Z_Registration_Info_UClass_AEquipmentVisualActor_RangedWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEquipmentVisualActor_RangedWeapon.OuterSingleton, Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEquipmentVisualActor_RangedWeapon.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<AEquipmentVisualActor_RangedWeapon>()
	{
		return AEquipmentVisualActor_RangedWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEquipmentVisualActor_RangedWeapon);
	AEquipmentVisualActor_RangedWeapon::~AEquipmentVisualActor_RangedWeapon() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_VisualActors_EquipmentVisualActor_RangedWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_VisualActors_EquipmentVisualActor_RangedWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEquipmentVisualActor_RangedWeapon, AEquipmentVisualActor_RangedWeapon::StaticClass, TEXT("AEquipmentVisualActor_RangedWeapon"), &Z_Registration_Info_UClass_AEquipmentVisualActor_RangedWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEquipmentVisualActor_RangedWeapon), 1416048597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_VisualActors_EquipmentVisualActor_RangedWeapon_h_1018858940(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_VisualActors_EquipmentVisualActor_RangedWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_VisualActors_EquipmentVisualActor_RangedWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
