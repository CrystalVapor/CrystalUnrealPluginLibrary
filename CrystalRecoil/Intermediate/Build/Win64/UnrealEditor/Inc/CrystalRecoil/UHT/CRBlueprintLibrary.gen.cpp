// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrystalRecoil/Public/CRBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRBlueprintLibrary();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRBlueprintLibrary_NoRegister();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRCppLibrary();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRCppLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CrystalRecoil();
// End Cross Module References
	void UCRBlueprintLibrary::StaticRegisterNativesUCRBlueprintLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCRBlueprintLibrary);
	UClass* Z_Construct_UClass_UCRBlueprintLibrary_NoRegister()
	{
		return UCRBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCRBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCRBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CrystalRecoil,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CRBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/CRBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCRBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCRBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCRBlueprintLibrary_Statics::ClassParams = {
		&UCRBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCRBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCRBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCRBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCRBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCRBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCRBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCRBlueprintLibrary.OuterSingleton;
	}
	template<> CRYSTALRECOIL_API UClass* StaticClass<UCRBlueprintLibrary>()
	{
		return UCRBlueprintLibrary::StaticClass();
	}
	UCRBlueprintLibrary::UCRBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCRBlueprintLibrary);
	UCRBlueprintLibrary::~UCRBlueprintLibrary() {}
	void UCRCppLibrary::StaticRegisterNativesUCRCppLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCRCppLibrary);
	UClass* Z_Construct_UClass_UCRCppLibrary_NoRegister()
	{
		return UCRCppLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCRCppLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCRCppLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CrystalRecoil,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRCppLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CRBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/CRBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCRCppLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCRCppLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCRCppLibrary_Statics::ClassParams = {
		&UCRCppLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCRCppLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCRCppLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCRCppLibrary()
	{
		if (!Z_Registration_Info_UClass_UCRCppLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCRCppLibrary.OuterSingleton, Z_Construct_UClass_UCRCppLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCRCppLibrary.OuterSingleton;
	}
	template<> CRYSTALRECOIL_API UClass* StaticClass<UCRCppLibrary>()
	{
		return UCRCppLibrary::StaticClass();
	}
	UCRCppLibrary::UCRCppLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCRCppLibrary);
	UCRCppLibrary::~UCRCppLibrary() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCRBlueprintLibrary, UCRBlueprintLibrary::StaticClass, TEXT("UCRBlueprintLibrary"), &Z_Registration_Info_UClass_UCRBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCRBlueprintLibrary), 2264953916U) },
		{ Z_Construct_UClass_UCRCppLibrary, UCRCppLibrary::StaticClass, TEXT("UCRCppLibrary"), &Z_Registration_Info_UClass_UCRCppLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCRCppLibrary), 2081576070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRBlueprintLibrary_h_1707246637(TEXT("/Script/CrystalRecoil"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
