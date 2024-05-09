// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrystalRecoil/Public/CRRecoilInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRRecoilInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRRecoilComponent_NoRegister();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRRecoilInterface();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRRecoilInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CrystalRecoil();
// End Cross Module References
	DEFINE_FUNCTION(ICRRecoilInterface::execK2_GetRecoilComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCRRecoilComponent**)Z_Param__Result=P_THIS->K2_GetRecoilComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICRRecoilInterface::execK2_ApplyShot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ApplyShot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICRRecoilInterface::execK2_EndShooting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_EndShooting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICRRecoilInterface::execK2_StartShooting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_StartShooting();
		P_NATIVE_END;
	}
	void UCRRecoilInterface::StaticRegisterNativesUCRRecoilInterface()
	{
		UClass* Class = UCRRecoilInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_ApplyShot", &ICRRecoilInterface::execK2_ApplyShot },
			{ "K2_EndShooting", &ICRRecoilInterface::execK2_EndShooting },
			{ "K2_GetRecoilComponent", &ICRRecoilInterface::execK2_GetRecoilComponent },
			{ "K2_StartShooting", &ICRRecoilInterface::execK2_StartShooting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCRRecoilInterface_K2_ApplyShot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCRRecoilInterface_K2_ApplyShot_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Apply Shot" },
		{ "ModuleRelativePath", "Public/CRRecoilInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCRRecoilInterface_K2_ApplyShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCRRecoilInterface, nullptr, "K2_ApplyShot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCRRecoilInterface_K2_ApplyShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCRRecoilInterface_K2_ApplyShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCRRecoilInterface_K2_ApplyShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCRRecoilInterface_K2_ApplyShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCRRecoilInterface_K2_EndShooting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCRRecoilInterface_K2_EndShooting_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "End Shooting" },
		{ "ModuleRelativePath", "Public/CRRecoilInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCRRecoilInterface_K2_EndShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCRRecoilInterface, nullptr, "K2_EndShooting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCRRecoilInterface_K2_EndShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCRRecoilInterface_K2_EndShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCRRecoilInterface_K2_EndShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCRRecoilInterface_K2_EndShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics
	{
		struct CRRecoilInterface_eventK2_GetRecoilComponent_Parms
		{
			UCRRecoilComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CRRecoilInterface_eventK2_GetRecoilComponent_Parms, ReturnValue), Z_Construct_UClass_UCRRecoilComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Get Recoil Component" },
		{ "ModuleRelativePath", "Public/CRRecoilInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCRRecoilInterface, nullptr, "K2_GetRecoilComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::CRRecoilInterface_eventK2_GetRecoilComponent_Parms), Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCRRecoilInterface_K2_StartShooting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCRRecoilInterface_K2_StartShooting_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Start Shooting" },
		{ "ModuleRelativePath", "Public/CRRecoilInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCRRecoilInterface_K2_StartShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCRRecoilInterface, nullptr, "K2_StartShooting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCRRecoilInterface_K2_StartShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCRRecoilInterface_K2_StartShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCRRecoilInterface_K2_StartShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCRRecoilInterface_K2_StartShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCRRecoilInterface);
	UClass* Z_Construct_UClass_UCRRecoilInterface_NoRegister()
	{
		return UCRRecoilInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCRRecoilInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCRRecoilInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CrystalRecoil,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCRRecoilInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCRRecoilInterface_K2_ApplyShot, "K2_ApplyShot" }, // 1686192142
		{ &Z_Construct_UFunction_UCRRecoilInterface_K2_EndShooting, "K2_EndShooting" }, // 3147665136
		{ &Z_Construct_UFunction_UCRRecoilInterface_K2_GetRecoilComponent, "K2_GetRecoilComponent" }, // 1969405948
		{ &Z_Construct_UFunction_UCRRecoilInterface_K2_StartShooting, "K2_StartShooting" }, // 2861962026
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilInterface_Statics::Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/CRRecoilInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCRRecoilInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICRRecoilInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCRRecoilInterface_Statics::ClassParams = {
		&UCRRecoilInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCRRecoilInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCRRecoilInterface()
	{
		if (!Z_Registration_Info_UClass_UCRRecoilInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCRRecoilInterface.OuterSingleton, Z_Construct_UClass_UCRRecoilInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCRRecoilInterface.OuterSingleton;
	}
	template<> CRYSTALRECOIL_API UClass* StaticClass<UCRRecoilInterface>()
	{
		return UCRRecoilInterface::StaticClass();
	}
	UCRRecoilInterface::UCRRecoilInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCRRecoilInterface);
	UCRRecoilInterface::~UCRRecoilInterface() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCRRecoilInterface, UCRRecoilInterface::StaticClass, TEXT("UCRRecoilInterface"), &Z_Registration_Info_UClass_UCRRecoilInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCRRecoilInterface), 2554892468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_334781418(TEXT("/Script/CrystalRecoil"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
