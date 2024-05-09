// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrystalRecoil/Public/CRRecoilComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRRecoilComponent() {}
// Cross Module References
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRRecoilComponent();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRRecoilComponent_NoRegister();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRRecoilPattern_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CrystalRecoil();
// End Cross Module References
	DEFINE_FUNCTION(UCRRecoilComponent::execGetRecoilStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRecoilStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRecoilStrength(Z_Param_InRecoilStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCRRecoilComponent::execSetRecoilStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRecoilStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRecoilStrength(Z_Param_InRecoilStrength);
		P_NATIVE_END;
	}
	void UCRRecoilComponent::StaticRegisterNativesUCRRecoilComponent()
	{
		UClass* Class = UCRRecoilComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRecoilStrength", &UCRRecoilComponent::execGetRecoilStrength },
			{ "SetRecoilStrength", &UCRRecoilComponent::execSetRecoilStrength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics
	{
		struct CRRecoilComponent_eventGetRecoilStrength_Parms
		{
			float InRecoilStrength;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRecoilStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics::NewProp_InRecoilStrength = { "InRecoilStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CRRecoilComponent_eventGetRecoilStrength_Parms, InRecoilStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CRRecoilComponent_eventGetRecoilStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics::NewProp_InRecoilStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CRRecoilComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCRRecoilComponent, nullptr, "GetRecoilStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics::CRRecoilComponent_eventGetRecoilStrength_Parms), Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength_Statics
	{
		struct CRRecoilComponent_eventSetRecoilStrength_Parms
		{
			float InRecoilStrength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRecoilStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength_Statics::NewProp_InRecoilStrength = { "InRecoilStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CRRecoilComponent_eventSetRecoilStrength_Parms, InRecoilStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength_Statics::NewProp_InRecoilStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CRRecoilComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCRRecoilComponent, nullptr, "SetRecoilStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength_Statics::CRRecoilComponent_eventSetRecoilStrength_Parms), Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCRRecoilComponent);
	UClass* Z_Construct_UClass_UCRRecoilComponent_NoRegister()
	{
		return UCRRecoilComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCRRecoilComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilPattern_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RecoilPattern;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCRRecoilComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CrystalRecoil,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCRRecoilComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCRRecoilComponent_GetRecoilStrength, "GetRecoilStrength" }, // 604433285
		{ &Z_Construct_UFunction_UCRRecoilComponent_SetRecoilStrength, "SetRecoilStrength" }, // 18252841
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CRRecoilComponent.h" },
		{ "ModuleRelativePath", "Public/CRRecoilComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilComponent_Statics::NewProp_RecoilPattern_MetaData[] = {
		{ "ModuleRelativePath", "Public/CRRecoilComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCRRecoilComponent_Statics::NewProp_RecoilPattern = { "RecoilPattern", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilComponent, RecoilPattern), Z_Construct_UClass_UCRRecoilPattern_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCRRecoilComponent_Statics::NewProp_RecoilPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilComponent_Statics::NewProp_RecoilPattern_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCRRecoilComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilComponent_Statics::NewProp_RecoilPattern,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCRRecoilComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCRRecoilComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCRRecoilComponent_Statics::ClassParams = {
		&UCRRecoilComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCRRecoilComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCRRecoilComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCRRecoilComponent()
	{
		if (!Z_Registration_Info_UClass_UCRRecoilComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCRRecoilComponent.OuterSingleton, Z_Construct_UClass_UCRRecoilComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCRRecoilComponent.OuterSingleton;
	}
	template<> CRYSTALRECOIL_API UClass* StaticClass<UCRRecoilComponent>()
	{
		return UCRRecoilComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCRRecoilComponent);
	UCRRecoilComponent::~UCRRecoilComponent() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCRRecoilComponent, UCRRecoilComponent::StaticClass, TEXT("UCRRecoilComponent"), &Z_Registration_Info_UClass_UCRRecoilComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCRRecoilComponent), 2133498518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilComponent_h_2272438145(TEXT("/Script/CrystalRecoil"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
