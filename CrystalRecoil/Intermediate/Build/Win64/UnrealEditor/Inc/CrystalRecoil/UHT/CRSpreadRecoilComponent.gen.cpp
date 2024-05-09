// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrystalRecoil/Public/CRSpreadRecoilComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRSpreadRecoilComponent() {}
// Cross Module References
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRRecoilComponent();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRSpreadRecoilComponent();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRSpreadRecoilComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CrystalRecoil();
// End Cross Module References
	DEFINE_FUNCTION(UCRSpreadRecoilComponent::execGetRecoilHeat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRecoilHeat();
		P_NATIVE_END;
	}
	void UCRSpreadRecoilComponent::StaticRegisterNativesUCRSpreadRecoilComponent()
	{
		UClass* Class = UCRSpreadRecoilComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRecoilHeat", &UCRSpreadRecoilComponent::execGetRecoilHeat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat_Statics
	{
		struct CRSpreadRecoilComponent_eventGetRecoilHeat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CRSpreadRecoilComponent_eventGetRecoilHeat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CRSpreadRecoilComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCRSpreadRecoilComponent, nullptr, "GetRecoilHeat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat_Statics::CRSpreadRecoilComponent_eventGetRecoilHeat_Parms), Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCRSpreadRecoilComponent);
	UClass* Z_Construct_UClass_UCRSpreadRecoilComponent_NoRegister()
	{
		return UCRSpreadRecoilComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCRSpreadRecoilComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRecoilHeat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRecoilHeat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCRRecoilComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CrystalRecoil,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCRSpreadRecoilComponent_GetRecoilHeat, "GetRecoilHeat" }, // 125932088
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CRSpreadRecoilComponent.h" },
		{ "ModuleRelativePath", "Public/CRSpreadRecoilComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::NewProp_CurrentRecoilHeat_MetaData[] = {
		{ "Category", "CRSpreadRecoilComponent" },
		{ "ModuleRelativePath", "Public/CRSpreadRecoilComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::NewProp_CurrentRecoilHeat = { "CurrentRecoilHeat", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRSpreadRecoilComponent, CurrentRecoilHeat), METADATA_PARAMS(Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::NewProp_CurrentRecoilHeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::NewProp_CurrentRecoilHeat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::NewProp_CurrentRecoilHeat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCRSpreadRecoilComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::ClassParams = {
		&UCRSpreadRecoilComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCRSpreadRecoilComponent()
	{
		if (!Z_Registration_Info_UClass_UCRSpreadRecoilComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCRSpreadRecoilComponent.OuterSingleton, Z_Construct_UClass_UCRSpreadRecoilComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCRSpreadRecoilComponent.OuterSingleton;
	}
	template<> CRYSTALRECOIL_API UClass* StaticClass<UCRSpreadRecoilComponent>()
	{
		return UCRSpreadRecoilComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCRSpreadRecoilComponent);
	UCRSpreadRecoilComponent::~UCRSpreadRecoilComponent() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRSpreadRecoilComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRSpreadRecoilComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCRSpreadRecoilComponent, UCRSpreadRecoilComponent::StaticClass, TEXT("UCRSpreadRecoilComponent"), &Z_Registration_Info_UClass_UCRSpreadRecoilComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCRSpreadRecoilComponent), 3038276644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRSpreadRecoilComponent_h_3777165841(TEXT("/Script/CrystalRecoil"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRSpreadRecoilComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRSpreadRecoilComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
