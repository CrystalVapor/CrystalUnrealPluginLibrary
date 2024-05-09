// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrystalRecoilEditor/Public/Widget/CRRecoilUnitGraphEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRRecoilUnitGraphEditor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	CRYSTALRECOILEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData();
	UPackage* Z_Construct_UPackage__Script_CrystalRecoilEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRRecoilUnitClipboardData;
class UScriptStruct* FCRRecoilUnitClipboardData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRRecoilUnitClipboardData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRRecoilUnitClipboardData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData, (UObject*)Z_Construct_UPackage__Script_CrystalRecoilEditor(), TEXT("CRRecoilUnitClipboardData"));
	}
	return Z_Registration_Info_UScriptStruct_CRRecoilUnitClipboardData.OuterSingleton;
}
template<> CRYSTALRECOILEDITOR_API UScriptStruct* StaticStruct<FCRRecoilUnitClipboardData>()
{
	return FCRRecoilUnitClipboardData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilUnitLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilUnitLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RecoilUnitLocations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/CRRecoilUnitGraphEditor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRRecoilUnitClipboardData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::NewProp_RecoilUnitLocations_Inner = { "RecoilUnitLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::NewProp_RecoilUnitLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widget/CRRecoilUnitGraphEditor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::NewProp_RecoilUnitLocations = { "RecoilUnitLocations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRRecoilUnitClipboardData, RecoilUnitLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::NewProp_RecoilUnitLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::NewProp_RecoilUnitLocations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::NewProp_RecoilUnitLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::NewProp_RecoilUnitLocations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CrystalRecoilEditor,
		nullptr,
		&NewStructOps,
		"CRRecoilUnitClipboardData",
		sizeof(FCRRecoilUnitClipboardData),
		alignof(FCRRecoilUnitClipboardData),
		Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData()
	{
		if (!Z_Registration_Info_UScriptStruct_CRRecoilUnitClipboardData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRRecoilUnitClipboardData.InnerSingleton, Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CRRecoilUnitClipboardData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_Widget_CRRecoilUnitGraphEditor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_Widget_CRRecoilUnitGraphEditor_h_Statics::ScriptStructInfo[] = {
		{ FCRRecoilUnitClipboardData::StaticStruct, Z_Construct_UScriptStruct_FCRRecoilUnitClipboardData_Statics::NewStructOps, TEXT("CRRecoilUnitClipboardData"), &Z_Registration_Info_UScriptStruct_CRRecoilUnitClipboardData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRRecoilUnitClipboardData), 536180861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_Widget_CRRecoilUnitGraphEditor_h_208185983(TEXT("/Script/CrystalRecoilEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_Widget_CRRecoilUnitGraphEditor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoilEditor_Public_Widget_CRRecoilUnitGraphEditor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
