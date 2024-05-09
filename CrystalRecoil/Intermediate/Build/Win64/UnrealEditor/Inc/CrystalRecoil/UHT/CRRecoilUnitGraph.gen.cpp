// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrystalRecoil/Public/CRRecoilUnitGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRRecoilUnitGraph() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRRecoilUnitGraph();
	CRYSTALRECOIL_API UClass* Z_Construct_UClass_UCRRecoilUnitGraph_NoRegister();
	CRYSTALRECOIL_API UEnum* Z_Construct_UEnum_CrystalRecoil_ECRRecoilUnitGraphRearrangePolicy();
	CRYSTALRECOIL_API UScriptStruct* Z_Construct_UScriptStruct_FCRRecoilUnit();
	UPackage* Z_Construct_UPackage__Script_CrystalRecoil();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECRRecoilUnitGraphRearrangePolicy;
	static UEnum* ECRRecoilUnitGraphRearrangePolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECRRecoilUnitGraphRearrangePolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECRRecoilUnitGraphRearrangePolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CrystalRecoil_ECRRecoilUnitGraphRearrangePolicy, (UObject*)Z_Construct_UPackage__Script_CrystalRecoil(), TEXT("ECRRecoilUnitGraphRearrangePolicy"));
		}
		return Z_Registration_Info_UEnum_ECRRecoilUnitGraphRearrangePolicy.OuterSingleton;
	}
	template<> CRYSTALRECOIL_API UEnum* StaticEnum<ECRRecoilUnitGraphRearrangePolicy>()
	{
		return ECRRecoilUnitGraphRearrangePolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_CrystalRecoil_ECRRecoilUnitGraphRearrangePolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CrystalRecoil_ECRRecoilUnitGraphRearrangePolicy_Statics::Enumerators[] = {
		{ "ECRRecoilUnitGraphRearrangePolicy::AscendByY", (int64)ECRRecoilUnitGraphRearrangePolicy::AscendByY },
		{ "ECRRecoilUnitGraphRearrangePolicy::DescendByY", (int64)ECRRecoilUnitGraphRearrangePolicy::DescendByY },
		{ "ECRRecoilUnitGraphRearrangePolicy::AscendByX", (int64)ECRRecoilUnitGraphRearrangePolicy::AscendByX },
		{ "ECRRecoilUnitGraphRearrangePolicy::DescendByX", (int64)ECRRecoilUnitGraphRearrangePolicy::DescendByX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CrystalRecoil_ECRRecoilUnitGraphRearrangePolicy_Statics::Enum_MetaDataParams[] = {
		{ "AscendByX.Name", "ECRRecoilUnitGraphRearrangePolicy::AscendByX" },
		{ "AscendByY.Name", "ECRRecoilUnitGraphRearrangePolicy::AscendByY" },
		{ "DescendByX.Name", "ECRRecoilUnitGraphRearrangePolicy::DescendByX" },
		{ "DescendByY.Name", "ECRRecoilUnitGraphRearrangePolicy::DescendByY" },
		{ "ModuleRelativePath", "Public/CRRecoilUnitGraph.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CrystalRecoil_ECRRecoilUnitGraphRearrangePolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CrystalRecoil,
		nullptr,
		"ECRRecoilUnitGraphRearrangePolicy",
		"ECRRecoilUnitGraphRearrangePolicy",
		Z_Construct_UEnum_CrystalRecoil_ECRRecoilUnitGraphRearrangePolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CrystalRecoil_ECRRecoilUnitGraphRearrangePolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CrystalRecoil_ECRRecoilUnitGraphRearrangePolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CrystalRecoil_ECRRecoilUnitGraphRearrangePolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CrystalRecoil_ECRRecoilUnitGraphRearrangePolicy()
	{
		if (!Z_Registration_Info_UEnum_ECRRecoilUnitGraphRearrangePolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECRRecoilUnitGraphRearrangePolicy.InnerSingleton, Z_Construct_UEnum_CrystalRecoil_ECRRecoilUnitGraphRearrangePolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECRRecoilUnitGraphRearrangePolicy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRRecoilUnit;
class UScriptStruct* FCRRecoilUnit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRRecoilUnit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRRecoilUnit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRRecoilUnit, (UObject*)Z_Construct_UPackage__Script_CrystalRecoil(), TEXT("CRRecoilUnit"));
	}
	return Z_Registration_Info_UScriptStruct_CRRecoilUnit.OuterSingleton;
}
template<> CRYSTALRECOIL_API UScriptStruct* StaticStruct<FCRRecoilUnit>()
{
	return FCRRecoilUnit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCRRecoilUnit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CRRecoilUnitGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRRecoilUnit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "CRRecoilUnit" },
		{ "ModuleRelativePath", "Public/CRRecoilUnitGraph.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRRecoilUnit, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "CRRecoilUnit" },
		{ "ModuleRelativePath", "Public/CRRecoilUnitGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRRecoilUnit, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::NewProp_Location,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CrystalRecoil,
		nullptr,
		&NewStructOps,
		"CRRecoilUnit",
		sizeof(FCRRecoilUnit),
		alignof(FCRRecoilUnit),
		Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCRRecoilUnit()
	{
		if (!Z_Registration_Info_UScriptStruct_CRRecoilUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRRecoilUnit.InnerSingleton, Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CRRecoilUnit.InnerSingleton;
	}
	void UCRRecoilUnitGraph::StaticRegisterNativesUCRRecoilUnitGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCRRecoilUnitGraph);
	UClass* Z_Construct_UClass_UCRRecoilUnitGraph_NoRegister()
	{
		return UCRRecoilUnitGraph::StaticClass();
	}
	struct Z_Construct_UClass_UCRRecoilUnitGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawUnitNumbers_MetaData[];
#endif
		static void NewProp_bDrawUnitNumbers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawUnitNumbers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawUnitLines_MetaData[];
#endif
		static void NewProp_bDrawUnitLines_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawUnitLines;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RearrangePolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RearrangePolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RearrangePolicy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilUnits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilUnits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RecoilUnits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NextID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCRRecoilUnitGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CrystalRecoil,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilUnitGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CRRecoilUnitGraph.h" },
		{ "ModuleRelativePath", "Public/CRRecoilUnitGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitNumbers_MetaData[] = {
		{ "Category", "CRRecoilUnitGraph" },
		{ "ModuleRelativePath", "Public/CRRecoilUnitGraph.h" },
	};
#endif
	void Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitNumbers_SetBit(void* Obj)
	{
		((UCRRecoilUnitGraph*)Obj)->bDrawUnitNumbers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitNumbers = { "bDrawUnitNumbers", nullptr, (EPropertyFlags)0x0010000400002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCRRecoilUnitGraph), &Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitNumbers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitNumbers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitNumbers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitLines_MetaData[] = {
		{ "Category", "CRRecoilUnitGraph" },
		{ "ModuleRelativePath", "Public/CRRecoilUnitGraph.h" },
	};
#endif
	void Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitLines_SetBit(void* Obj)
	{
		((UCRRecoilUnitGraph*)Obj)->bDrawUnitLines = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitLines = { "bDrawUnitLines", nullptr, (EPropertyFlags)0x0010000400002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCRRecoilUnitGraph), &Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitLines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitLines_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RearrangePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RearrangePolicy_MetaData[] = {
		{ "Category", "CRRecoilUnitGraph" },
		{ "ModuleRelativePath", "Public/CRRecoilUnitGraph.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RearrangePolicy = { "RearrangePolicy", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilUnitGraph, RearrangePolicy), Z_Construct_UEnum_CrystalRecoil_ECRRecoilUnitGraphRearrangePolicy, METADATA_PARAMS(Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RearrangePolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RearrangePolicy_MetaData)) }; // 2681400843
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RecoilUnits_Inner = { "RecoilUnits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCRRecoilUnit, METADATA_PARAMS(nullptr, 0) }; // 927283123
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RecoilUnits_MetaData[] = {
		{ "Category", "CRRecoilUnitGraph" },
		{ "ModuleRelativePath", "Public/CRRecoilUnitGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RecoilUnits = { "RecoilUnits", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilUnitGraph, RecoilUnits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RecoilUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RecoilUnits_MetaData)) }; // 927283123
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_NextID_MetaData[] = {
		{ "ModuleRelativePath", "Public/CRRecoilUnitGraph.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_NextID = { "NextID", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCRRecoilUnitGraph, NextID), METADATA_PARAMS(Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_NextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_NextID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCRRecoilUnitGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitNumbers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_bDrawUnitLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RearrangePolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RearrangePolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RecoilUnits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_RecoilUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCRRecoilUnitGraph_Statics::NewProp_NextID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCRRecoilUnitGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCRRecoilUnitGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCRRecoilUnitGraph_Statics::ClassParams = {
		&UCRRecoilUnitGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCRRecoilUnitGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilUnitGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCRRecoilUnitGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCRRecoilUnitGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCRRecoilUnitGraph()
	{
		if (!Z_Registration_Info_UClass_UCRRecoilUnitGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCRRecoilUnitGraph.OuterSingleton, Z_Construct_UClass_UCRRecoilUnitGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCRRecoilUnitGraph.OuterSingleton;
	}
	template<> CRYSTALRECOIL_API UClass* StaticClass<UCRRecoilUnitGraph>()
	{
		return UCRRecoilUnitGraph::StaticClass();
	}
	UCRRecoilUnitGraph::UCRRecoilUnitGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCRRecoilUnitGraph);
	UCRRecoilUnitGraph::~UCRRecoilUnitGraph() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilUnitGraph_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilUnitGraph_h_Statics::EnumInfo[] = {
		{ ECRRecoilUnitGraphRearrangePolicy_StaticEnum, TEXT("ECRRecoilUnitGraphRearrangePolicy"), &Z_Registration_Info_UEnum_ECRRecoilUnitGraphRearrangePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2681400843U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilUnitGraph_h_Statics::ScriptStructInfo[] = {
		{ FCRRecoilUnit::StaticStruct, Z_Construct_UScriptStruct_FCRRecoilUnit_Statics::NewStructOps, TEXT("CRRecoilUnit"), &Z_Registration_Info_UScriptStruct_CRRecoilUnit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRRecoilUnit), 927283123U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilUnitGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCRRecoilUnitGraph, UCRRecoilUnitGraph::StaticClass, TEXT("UCRRecoilUnitGraph"), &Z_Registration_Info_UClass_UCRRecoilUnitGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCRRecoilUnitGraph), 1612676554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilUnitGraph_h_1624662536(TEXT("/Script/CrystalRecoil"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilUnitGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilUnitGraph_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilUnitGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilUnitGraph_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilUnitGraph_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilUnitGraph_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
