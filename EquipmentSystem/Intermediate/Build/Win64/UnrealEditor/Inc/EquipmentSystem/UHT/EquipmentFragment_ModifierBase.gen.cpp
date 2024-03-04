// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/Fragments/EquipmentFragment_ModifierBase.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentFragment_ModifierBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_ModifierBase();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_ModifierBase_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_NoRegister();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierFloat;
class UScriptStruct* FEquipmentFragmentPropertyModifierFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EquipmentFragmentPropertyModifierFloat"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierFloat.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FEquipmentFragmentPropertyModifierFloat>()
{
	return FEquipmentFragmentPropertyModifierFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFragment_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetFragment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueToAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentsToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentsToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentFragmentPropertyModifierFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_TargetFragment_MetaData[] = {
		{ "Category", "EquipmentFragmentPropertyModifierFloat" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_TargetFragment = { "TargetFragment", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFragmentPropertyModifierFloat, TargetFragment), Z_Construct_UClass_UClass, Z_Construct_UClass_UEquipmentFragment_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_TargetFragment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_TargetFragment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_PropertyTag_MetaData[] = {
		{ "Categories", "Equipment.Property" },
		{ "Category", "EquipmentFragmentPropertyModifierFloat" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_PropertyTag = { "PropertyTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFragmentPropertyModifierFloat, PropertyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_PropertyTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_PropertyTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_ValueToAdd_MetaData[] = {
		{ "Category", "EquipmentFragmentPropertyModifierFloat" },
		{ "Comment", "// FinalValue = (Value * (1 + PercentsToAdd / 100)) + ValueToAdd\n" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
		{ "ToolTip", "FinalValue = (Value * (1 + PercentsToAdd / 100)) + ValueToAdd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_ValueToAdd = { "ValueToAdd", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFragmentPropertyModifierFloat, ValueToAdd), METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_ValueToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_ValueToAdd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_PercentsToAdd_MetaData[] = {
		{ "Category", "EquipmentFragmentPropertyModifierFloat" },
		{ "Comment", "// FinalValue = (Value * (1 + PercentsToAdd / 100)) + ValueToAdd\n" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
		{ "ToolTip", "FinalValue = (Value * (1 + PercentsToAdd / 100)) + ValueToAdd" },
		{ "Units", "Percent" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_PercentsToAdd = { "PercentsToAdd", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFragmentPropertyModifierFloat, PercentsToAdd), METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_PercentsToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_PercentsToAdd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_TargetFragment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_PropertyTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_ValueToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewProp_PercentsToAdd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		nullptr,
		&NewStructOps,
		"EquipmentFragmentPropertyModifierFloat",
		sizeof(FEquipmentFragmentPropertyModifierFloat),
		alignof(FEquipmentFragmentPropertyModifierFloat),
		Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierFloat.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierFloat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierTagContainer;
class UScriptStruct* FEquipmentFragmentPropertyModifierTagContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierTagContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierTagContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EquipmentFragmentPropertyModifierTagContainer"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierTagContainer.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FEquipmentFragmentPropertyModifierTagContainer>()
{
	return FEquipmentFragmentPropertyModifierTagContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFragment_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetFragment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentFragmentPropertyModifierTagContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_TargetFragment_MetaData[] = {
		{ "Category", "EquipmentFragmentPropertyModifierTagContainer" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_TargetFragment = { "TargetFragment", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFragmentPropertyModifierTagContainer, TargetFragment), Z_Construct_UClass_UClass, Z_Construct_UClass_UEquipmentFragment_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_TargetFragment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_TargetFragment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_PropertyTag_MetaData[] = {
		{ "Categories", "Equipment.Property" },
		{ "Category", "EquipmentFragmentPropertyModifierTagContainer" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_PropertyTag = { "PropertyTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFragmentPropertyModifierTagContainer, PropertyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_PropertyTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_PropertyTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_AddTags_MetaData[] = {
		{ "Category", "EquipmentFragmentPropertyModifierTagContainer" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_AddTags = { "AddTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFragmentPropertyModifierTagContainer, AddTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_AddTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_AddTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_RemoveTags_MetaData[] = {
		{ "Category", "EquipmentFragmentPropertyModifierTagContainer" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_RemoveTags = { "RemoveTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFragmentPropertyModifierTagContainer, RemoveTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_RemoveTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_RemoveTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_TargetFragment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_PropertyTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_AddTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewProp_RemoveTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		nullptr,
		&NewStructOps,
		"EquipmentFragmentPropertyModifierTagContainer",
		sizeof(FEquipmentFragmentPropertyModifierTagContainer),
		alignof(FEquipmentFragmentPropertyModifierTagContainer),
		Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierTagContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierTagContainer.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierTagContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierCurve;
class UScriptStruct* FEquipmentFragmentPropertyModifierCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EquipmentFragmentPropertyModifierCurve"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierCurve.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FEquipmentFragmentPropertyModifierCurve>()
{
	return FEquipmentFragmentPropertyModifierCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFragment_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetFragment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentFragmentPropertyModifierCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_TargetFragment_MetaData[] = {
		{ "Category", "EquipmentFragmentPropertyModifierCurve" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_TargetFragment = { "TargetFragment", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFragmentPropertyModifierCurve, TargetFragment), Z_Construct_UClass_UClass, Z_Construct_UClass_UEquipmentFragment_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_TargetFragment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_TargetFragment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_PropertyTag_MetaData[] = {
		{ "Categories", "Equipment.Property" },
		{ "Category", "EquipmentFragmentPropertyModifierCurve" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_PropertyTag = { "PropertyTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFragmentPropertyModifierCurve, PropertyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_PropertyTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_PropertyTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "EquipmentFragmentPropertyModifierCurve" },
		{ "Comment", "// FinalValue = Curve in this struct, when multiple modified, bigger priority value will be used\n" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
		{ "ToolTip", "FinalValue = Curve in this struct, when multiple modified, bigger priority value will be used" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFragmentPropertyModifierCurve, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_Curve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "EquipmentFragmentPropertyModifierCurve" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFragmentPropertyModifierCurve, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_TargetFragment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_PropertyTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		nullptr,
		&NewStructOps,
		"EquipmentFragmentPropertyModifierCurve",
		sizeof(FEquipmentFragmentPropertyModifierCurve),
		alignof(FEquipmentFragmentPropertyModifierCurve),
		Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierCurve.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierCurve.InnerSingleton;
	}
	void UEquipmentFragment_ModifierBase::StaticRegisterNativesUEquipmentFragment_ModifierBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentFragment_ModifierBase);
	UClass* Z_Construct_UClass_UEquipmentFragment_ModifierBase_NoRegister()
	{
		return UEquipmentFragment_ModifierBase::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatModifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatModifiers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainerModifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainerModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TagContainerModifiers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveModifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveModifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEquipmentFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fragments/EquipmentFragment_ModifierBase.h" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_FloatModifiers_Inner = { "FloatModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat, METADATA_PARAMS(nullptr, 0) }; // 1978262724
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_FloatModifiers_MetaData[] = {
		{ "Category", "EquipmentFragment_ModifierBase" },
		{ "DisplayName", "Float Modifiers" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
		{ "TitleProperty", "{PropertyTag} | {ValueToAdd} | {PercentsToAdd}%" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_FloatModifiers = { "FloatModifiers", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_ModifierBase, FloatModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_FloatModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_FloatModifiers_MetaData)) }; // 1978262724
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_TagContainerModifiers_Inner = { "TagContainerModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer, METADATA_PARAMS(nullptr, 0) }; // 549355529
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_TagContainerModifiers_MetaData[] = {
		{ "Category", "EquipmentFragment_ModifierBase" },
		{ "DisplayName", "Tag Conatiner Modifiers" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_TagContainerModifiers = { "TagContainerModifiers", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_ModifierBase, TagContainerModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_TagContainerModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_TagContainerModifiers_MetaData)) }; // 549355529
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_CurveModifiers_Inner = { "CurveModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve, METADATA_PARAMS(nullptr, 0) }; // 3396834948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_CurveModifiers_MetaData[] = {
		{ "Category", "EquipmentFragment_ModifierBase" },
		{ "DisplayName", "Curve Modifiers" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_ModifierBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_CurveModifiers = { "CurveModifiers", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_ModifierBase, CurveModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_CurveModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_CurveModifiers_MetaData)) }; // 3396834948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_FloatModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_FloatModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_TagContainerModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_TagContainerModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_CurveModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::NewProp_CurveModifiers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentFragment_ModifierBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::ClassParams = {
		&UEquipmentFragment_ModifierBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentFragment_ModifierBase()
	{
		if (!Z_Registration_Info_UClass_UEquipmentFragment_ModifierBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentFragment_ModifierBase.OuterSingleton, Z_Construct_UClass_UEquipmentFragment_ModifierBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentFragment_ModifierBase.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentFragment_ModifierBase>()
	{
		return UEquipmentFragment_ModifierBase::StaticClass();
	}
	UEquipmentFragment_ModifierBase::UEquipmentFragment_ModifierBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentFragment_ModifierBase);
	UEquipmentFragment_ModifierBase::~UEquipmentFragment_ModifierBase() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_ModifierBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_ModifierBase_h_Statics::ScriptStructInfo[] = {
		{ FEquipmentFragmentPropertyModifierFloat::StaticStruct, Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierFloat_Statics::NewStructOps, TEXT("EquipmentFragmentPropertyModifierFloat"), &Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentFragmentPropertyModifierFloat), 1978262724U) },
		{ FEquipmentFragmentPropertyModifierTagContainer::StaticStruct, Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierTagContainer_Statics::NewStructOps, TEXT("EquipmentFragmentPropertyModifierTagContainer"), &Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierTagContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentFragmentPropertyModifierTagContainer), 549355529U) },
		{ FEquipmentFragmentPropertyModifierCurve::StaticStruct, Z_Construct_UScriptStruct_FEquipmentFragmentPropertyModifierCurve_Statics::NewStructOps, TEXT("EquipmentFragmentPropertyModifierCurve"), &Z_Registration_Info_UScriptStruct_EquipmentFragmentPropertyModifierCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentFragmentPropertyModifierCurve), 3396834948U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_ModifierBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentFragment_ModifierBase, UEquipmentFragment_ModifierBase::StaticClass, TEXT("UEquipmentFragment_ModifierBase"), &Z_Registration_Info_UClass_UEquipmentFragment_ModifierBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentFragment_ModifierBase), 1766303488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_ModifierBase_h_596311531(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_ModifierBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_ModifierBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_ModifierBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_ModifierBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
