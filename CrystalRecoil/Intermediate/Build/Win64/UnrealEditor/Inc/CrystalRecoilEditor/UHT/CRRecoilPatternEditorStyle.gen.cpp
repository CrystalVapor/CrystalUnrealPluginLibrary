// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrystalRecoilEditor/Public/CRRecoilPatternEditorStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRRecoilPatternEditorStyle() {}
// Cross Module References
	CRYSTALRECOILEDITOR_API UClass* Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle();
	CRYSTALRECOILEDITOR_API UClass* Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_NoRegister();
	CRYSTALRECOILEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCRRecoilEditorStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_CrystalRecoilEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FCRRecoilEditorStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FCRRecoilEditorStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRRecoilEditorStyle;
class UScriptStruct* FCRRecoilEditorStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRRecoilEditorStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRRecoilEditorStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRRecoilEditorStyle, (UObject*)Z_Construct_UPackage__Script_CrystalRecoilEditor(), TEXT("CRRecoilEditorStyle"));
	}
	return Z_Registration_Info_UScriptStruct_CRRecoilEditorStyle.OuterSingleton;
}
template<> CRYSTALRECOILEDITOR_API UScriptStruct* StaticStruct<FCRRecoilEditorStyle>()
{
	return FCRRecoilEditorStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCRRecoilEditorStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRRecoilEditorStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/CRRecoilPatternEditorStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCRRecoilEditorStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRRecoilEditorStyle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRRecoilEditorStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CrystalRecoilEditor,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"CRRecoilEditorStyle",
		sizeof(FCRRecoilEditorStyle),
		alignof(FCRRecoilEditorStyle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCRRecoilEditorStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRRecoilEditorStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCRRecoilEditorStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_CRRecoilEditorStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRRecoilEditorStyle.InnerSingleton, Z_Construct_UScriptStruct_FCRRecoilEditorStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CRRecoilEditorStyle.InnerSingleton;
	}
	void UCRRecoilEditorStyleWidgetStyle::StaticRegisterNativesUCRRecoilEditorStyleWidgetStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCRRecoilEditorStyleWidgetStyle);
	UClass* Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_NoRegister()
	{
		return UCRRecoilEditorStyleWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CrystalRecoilEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "CRRecoilPatternEditorStyle.h" },
		{ "ModuleRelativePath", "Public/CRRecoilPatternEditorStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/CRRecoilPatternEditorStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilEditorStyleWidgetStyle, WidgetStyle), Z_Construct_UScriptStruct_FCRRecoilEditorStyle, METADATA_PARAMS(Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::NewProp_WidgetStyle_MetaData)) }; // 602819267
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCRRecoilEditorStyleWidgetStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::ClassParams = {
		&UCRRecoilEditorStyleWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle()
	{
		if (!Z_Registration_Info_UClass_UCRRecoilEditorStyleWidgetStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCRRecoilEditorStyleWidgetStyle.OuterSingleton, Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCRRecoilEditorStyleWidgetStyle.OuterSingleton;
	}
	template<> CRYSTALRECOILEDITOR_API UClass* StaticClass<UCRRecoilEditorStyleWidgetStyle>()
	{
		return UCRRecoilEditorStyleWidgetStyle::StaticClass();
	}
	UCRRecoilEditorStyleWidgetStyle::UCRRecoilEditorStyleWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCRRecoilEditorStyleWidgetStyle);
	UCRRecoilEditorStyleWidgetStyle::~UCRRecoilEditorStyleWidgetStyle() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_CRRecoilPatternEditorStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_CRRecoilPatternEditorStyle_h_Statics::ScriptStructInfo[] = {
		{ FCRRecoilEditorStyle::StaticStruct, Z_Construct_UScriptStruct_FCRRecoilEditorStyle_Statics::NewStructOps, TEXT("CRRecoilEditorStyle"), &Z_Registration_Info_UScriptStruct_CRRecoilEditorStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRRecoilEditorStyle), 602819267U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_CRRecoilPatternEditorStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCRRecoilEditorStyleWidgetStyle, UCRRecoilEditorStyleWidgetStyle::StaticClass, TEXT("UCRRecoilEditorStyleWidgetStyle"), &Z_Registration_Info_UClass_UCRRecoilEditorStyleWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCRRecoilEditorStyleWidgetStyle), 3505250311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_CRRecoilPatternEditorStyle_h_2282602491(TEXT("/Script/CrystalRecoilEditor"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_CRRecoilPatternEditorStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_CRRecoilPatternEditorStyle_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_CRRecoilPatternEditorStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_CRRecoilPatternEditorStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
