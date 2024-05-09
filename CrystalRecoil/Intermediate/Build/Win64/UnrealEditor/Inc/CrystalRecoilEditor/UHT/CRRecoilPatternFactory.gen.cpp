// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrystalRecoilEditor/Public/CRRecoilPatternFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRRecoilPatternFactory() {}
// Cross Module References
	CRYSTALRECOILEDITOR_API UClass* Z_Construct_UClass_UCRRecoilPatternFactory();
	CRYSTALRECOILEDITOR_API UClass* Z_Construct_UClass_UCRRecoilPatternFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CrystalRecoilEditor();
// End Cross Module References
	void UCRRecoilPatternFactory::StaticRegisterNativesUCRRecoilPatternFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCRRecoilPatternFactory);
	UClass* Z_Construct_UClass_UCRRecoilPatternFactory_NoRegister()
	{
		return UCRRecoilPatternFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCRRecoilPatternFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCRRecoilPatternFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CrystalRecoilEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilPatternFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "CRRecoilPatternFactory.h" },
		{ "ModuleRelativePath", "Public/CRRecoilPatternFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCRRecoilPatternFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCRRecoilPatternFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCRRecoilPatternFactory_Statics::ClassParams = {
		&UCRRecoilPatternFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCRRecoilPatternFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilPatternFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCRRecoilPatternFactory()
	{
		if (!Z_Registration_Info_UClass_UCRRecoilPatternFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCRRecoilPatternFactory.OuterSingleton, Z_Construct_UClass_UCRRecoilPatternFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCRRecoilPatternFactory.OuterSingleton;
	}
	template<> CRYSTALRECOILEDITOR_API UClass* StaticClass<UCRRecoilPatternFactory>()
	{
		return UCRRecoilPatternFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCRRecoilPatternFactory);
	UCRRecoilPatternFactory::~UCRRecoilPatternFactory() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_CRRecoilPatternFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_CRRecoilPatternFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCRRecoilPatternFactory, UCRRecoilPatternFactory::StaticClass, TEXT("UCRRecoilPatternFactory"), &Z_Registration_Info_UClass_UCRRecoilPatternFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCRRecoilPatternFactory), 4093002500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_CRRecoilPatternFactory_h_2855506697(TEXT("/Script/CrystalRecoilEditor"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_CRRecoilPatternFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_CRRecoilPatternFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
