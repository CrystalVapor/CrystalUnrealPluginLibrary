// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/Features/EquipmentFeature_LimitedFeature.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentFeature_LimitedFeature() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_ConditionalBase();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_LimitedFeature();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_LimitedFeature_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_NoRegister();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FLimitedAttributeSet();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FLimitedFragment();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FLimitedGameplayAbility();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FLimitedGameplayEffect();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilityGrantSource_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedGameplayAbility_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LimitedFragment;
class UScriptStruct* FLimitedFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LimitedFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LimitedFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLimitedFragment, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("LimitedFragment"));
	}
	return Z_Registration_Info_UScriptStruct_LimitedFragment.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FLimitedFragment>()
{
	return FLimitedFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLimitedFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlockFeature_MetaData[];
#endif
		static void NewProp_UnlockFeature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UnlockFeature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredFragmentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RequiredFragmentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FragmentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimitedFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLimitedFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_UnlockFeature_MetaData[] = {
		{ "Category", "LimitedFragment" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_UnlockFeature_SetBit(void* Obj)
	{
		((FLimitedFragment*)Obj)->UnlockFeature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_UnlockFeature = { "UnlockFeature", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLimitedFragment), &Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_UnlockFeature_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_UnlockFeature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_UnlockFeature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_RequiredFragmentClass_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "LimitedFragment" },
		{ "Comment", "// used to limit the fragment\n" },
		{ "EditCondition", "UnlockFeature" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
		{ "ToolTip", "used to limit the fragment" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_RequiredFragmentClass = { "RequiredFragmentClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLimitedFragment, RequiredFragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEquipmentFragment_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_RequiredFragmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_RequiredFragmentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_FragmentClass_MetaData[] = {
		{ "Category", "LimitedFragment" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLimitedFragment, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEquipmentFragment_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_FragmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_FragmentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLimitedFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_UnlockFeature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_RequiredFragmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewProp_FragmentClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLimitedFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		nullptr,
		&NewStructOps,
		"LimitedFragment",
		sizeof(FLimitedFragment),
		alignof(FLimitedFragment),
		Z_Construct_UScriptStruct_FLimitedFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLimitedFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLimitedFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_LimitedFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LimitedFragment.InnerSingleton, Z_Construct_UScriptStruct_FLimitedFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LimitedFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLimitedGameplayAbility>() == std::is_polymorphic<FExpandedAbilityGrantSource_Ability>(), "USTRUCT FLimitedGameplayAbility cannot be polymorphic unless super FExpandedAbilityGrantSource_Ability is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LimitedGameplayAbility;
class UScriptStruct* FLimitedGameplayAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LimitedGameplayAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LimitedGameplayAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLimitedGameplayAbility, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("LimitedGameplayAbility"));
	}
	return Z_Registration_Info_UScriptStruct_LimitedGameplayAbility.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FLimitedGameplayAbility>()
{
	return FLimitedGameplayAbility::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlockFeature_MetaData[];
#endif
		static void NewProp_UnlockFeature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UnlockFeature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredAbilityClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RequiredAbilityClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLimitedGameplayAbility>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewProp_UnlockFeature_MetaData[] = {
		{ "Category", "LimitedGameplayAbility" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewProp_UnlockFeature_SetBit(void* Obj)
	{
		((FLimitedGameplayAbility*)Obj)->UnlockFeature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewProp_UnlockFeature = { "UnlockFeature", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLimitedGameplayAbility), &Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewProp_UnlockFeature_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewProp_UnlockFeature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewProp_UnlockFeature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewProp_RequiredAbilityClass_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "LimitedGameplayAbility" },
		{ "Comment", "// used to limit the ability\n" },
		{ "EditCondition", "UnlockFeature" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
		{ "ToolTip", "used to limit the ability" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewProp_RequiredAbilityClass = { "RequiredAbilityClass", nullptr, (EPropertyFlags)0x0014000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLimitedGameplayAbility, RequiredAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UExpandedGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewProp_RequiredAbilityClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewProp_RequiredAbilityClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewProp_UnlockFeature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewProp_RequiredAbilityClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability,
		&NewStructOps,
		"LimitedGameplayAbility",
		sizeof(FLimitedGameplayAbility),
		alignof(FLimitedGameplayAbility),
		Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLimitedGameplayAbility()
	{
		if (!Z_Registration_Info_UScriptStruct_LimitedGameplayAbility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LimitedGameplayAbility.InnerSingleton, Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LimitedGameplayAbility.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLimitedGameplayEffect>() == std::is_polymorphic<FExpandedAbilityGrantSource_Effect>(), "USTRUCT FLimitedGameplayEffect cannot be polymorphic unless super FExpandedAbilityGrantSource_Effect is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LimitedGameplayEffect;
class UScriptStruct* FLimitedGameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LimitedGameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LimitedGameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLimitedGameplayEffect, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("LimitedGameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_LimitedGameplayEffect.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FLimitedGameplayEffect>()
{
	return FLimitedGameplayEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlockFeature_MetaData[];
#endif
		static void NewProp_UnlockFeature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UnlockFeature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RequiredEffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLimitedGameplayEffect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewProp_UnlockFeature_MetaData[] = {
		{ "Category", "LimitedGameplayEffect" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewProp_UnlockFeature_SetBit(void* Obj)
	{
		((FLimitedGameplayEffect*)Obj)->UnlockFeature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewProp_UnlockFeature = { "UnlockFeature", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLimitedGameplayEffect), &Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewProp_UnlockFeature_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewProp_UnlockFeature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewProp_UnlockFeature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewProp_RequiredEffectClass_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "LimitedGameplayEffect" },
		{ "Comment", "// used to limit the effect\n" },
		{ "EditCondition", "UnlockFeature" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
		{ "ToolTip", "used to limit the effect" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewProp_RequiredEffectClass = { "RequiredEffectClass", nullptr, (EPropertyFlags)0x0014000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLimitedGameplayEffect, RequiredEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewProp_RequiredEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewProp_RequiredEffectClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewProp_UnlockFeature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewProp_RequiredEffectClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect,
		&NewStructOps,
		"LimitedGameplayEffect",
		sizeof(FLimitedGameplayEffect),
		alignof(FLimitedGameplayEffect),
		Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLimitedGameplayEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_LimitedGameplayEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LimitedGameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LimitedGameplayEffect.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLimitedAttributeSet>() == std::is_polymorphic<FExpandedAbilityGrantSource_AttributeSet>(), "USTRUCT FLimitedAttributeSet cannot be polymorphic unless super FExpandedAbilityGrantSource_AttributeSet is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LimitedAttributeSet;
class UScriptStruct* FLimitedAttributeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LimitedAttributeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LimitedAttributeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLimitedAttributeSet, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("LimitedAttributeSet"));
	}
	return Z_Registration_Info_UScriptStruct_LimitedAttributeSet.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FLimitedAttributeSet>()
{
	return FLimitedAttributeSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlockFeature_MetaData[];
#endif
		static void NewProp_UnlockFeature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UnlockFeature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredAttributeSetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RequiredAttributeSetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLimitedAttributeSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewProp_UnlockFeature_MetaData[] = {
		{ "Category", "LimitedAttributeSet" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewProp_UnlockFeature_SetBit(void* Obj)
	{
		((FLimitedAttributeSet*)Obj)->UnlockFeature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewProp_UnlockFeature = { "UnlockFeature", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLimitedAttributeSet), &Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewProp_UnlockFeature_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewProp_UnlockFeature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewProp_UnlockFeature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewProp_RequiredAttributeSetClass_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "LimitedAttributeSet" },
		{ "Comment", "// used to limit the attribute set\n" },
		{ "EditCondition", "UnlockFeature" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
		{ "ToolTip", "used to limit the attribute set" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewProp_RequiredAttributeSetClass = { "RequiredAttributeSetClass", nullptr, (EPropertyFlags)0x0014000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLimitedAttributeSet, RequiredAttributeSetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewProp_RequiredAttributeSetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewProp_RequiredAttributeSetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewProp_UnlockFeature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewProp_RequiredAttributeSetClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet,
		&NewStructOps,
		"LimitedAttributeSet",
		sizeof(FLimitedAttributeSet),
		alignof(FLimitedAttributeSet),
		Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLimitedAttributeSet()
	{
		if (!Z_Registration_Info_UScriptStruct_LimitedAttributeSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LimitedAttributeSet.InnerSingleton, Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LimitedAttributeSet.InnerSingleton;
	}
	void UEquipmentFeature_LimitedFeature::StaticRegisterNativesUEquipmentFeature_LimitedFeature()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentFeature_LimitedFeature);
	UClass* Z_Construct_UClass_UEquipmentFeature_LimitedFeature_NoRegister()
	{
		return UEquipmentFeature_LimitedFeature::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetailsUnlocked_MetaData[];
#endif
		static void NewProp_bDetailsUnlocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetailsUnlocked;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DependencyFeatures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependencyFeatures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DependencyFeatures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimitedFragment_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitedFragment_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LimitedFragment;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimitedAbilityList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitedAbilityList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LimitedAbilityList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimitedEffectList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitedEffectList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LimitedEffectList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimitedAttributeSetList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitedAttributeSetList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LimitedAttributeSetList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEquipmentFeature_ConditionalBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Features/EquipmentFeature_LimitedFeature.h" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_bDetailsUnlocked_MetaData[] = {
		{ "Category", "EquipmentFeature_LimitedFeature" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
	};
#endif
	void Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_bDetailsUnlocked_SetBit(void* Obj)
	{
		((UEquipmentFeature_LimitedFeature*)Obj)->bDetailsUnlocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_bDetailsUnlocked = { "bDetailsUnlocked", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEquipmentFeature_LimitedFeature), &Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_bDetailsUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_bDetailsUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_bDetailsUnlocked_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_DependencyFeatures_Inner = { "DependencyFeatures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEquipmentFeature_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_DependencyFeatures_MetaData[] = {
		{ "Category", "EquipmentFeature_LimitedFeature" },
		{ "DisplayName", "Dependency Feature" },
		{ "EditCondition", "bDetailsUnlocked" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_DependencyFeatures = { "DependencyFeatures", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFeature_LimitedFeature, DependencyFeatures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_DependencyFeatures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_DependencyFeatures_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedFragment_Inner = { "LimitedFragment", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLimitedFragment, METADATA_PARAMS(nullptr, 0) }; // 4069044596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedFragment_MetaData[] = {
		{ "Category", "LimitedFeatures" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
		{ "TitleProperty", "RequiredFragmentClass" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedFragment = { "LimitedFragment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFeature_LimitedFeature, LimitedFragment), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedFragment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedFragment_MetaData)) }; // 4069044596
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAbilityList_Inner = { "LimitedAbilityList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLimitedGameplayAbility, METADATA_PARAMS(nullptr, 0) }; // 2852041414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAbilityList_MetaData[] = {
		{ "Category", "LimitedFeatures" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
		{ "TitleProperty", "RequiredAbilityClass" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAbilityList = { "LimitedAbilityList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFeature_LimitedFeature, LimitedAbilityList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAbilityList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAbilityList_MetaData)) }; // 2852041414
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedEffectList_Inner = { "LimitedEffectList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLimitedGameplayEffect, METADATA_PARAMS(nullptr, 0) }; // 4101951392
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedEffectList_MetaData[] = {
		{ "Category", "LimitedFeatures" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
		{ "TitleProperty", "RequiredEffectClass" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedEffectList = { "LimitedEffectList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFeature_LimitedFeature, LimitedEffectList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedEffectList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedEffectList_MetaData)) }; // 4101951392
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAttributeSetList_Inner = { "LimitedAttributeSetList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLimitedAttributeSet, METADATA_PARAMS(nullptr, 0) }; // 1380831332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAttributeSetList_MetaData[] = {
		{ "Category", "LimitedFeatures" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_LimitedFeature.h" },
		{ "TitleProperty", "RequiredAttributeSetClass" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAttributeSetList = { "LimitedAttributeSetList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFeature_LimitedFeature, LimitedAttributeSetList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAttributeSetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAttributeSetList_MetaData)) }; // 1380831332
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_bDetailsUnlocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_DependencyFeatures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_DependencyFeatures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedFragment_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedFragment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAbilityList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAbilityList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedEffectList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedEffectList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAttributeSetList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::NewProp_LimitedAttributeSetList,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UExpandedAbilityGrantSource_NoRegister, (int32)VTABLE_OFFSET(UEquipmentFeature_LimitedFeature, IExpandedAbilityGrantSource), false },  // 1976364162
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentFeature_LimitedFeature>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::ClassParams = {
		&UEquipmentFeature_LimitedFeature::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x043010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentFeature_LimitedFeature()
	{
		if (!Z_Registration_Info_UClass_UEquipmentFeature_LimitedFeature.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentFeature_LimitedFeature.OuterSingleton, Z_Construct_UClass_UEquipmentFeature_LimitedFeature_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentFeature_LimitedFeature.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentFeature_LimitedFeature>()
	{
		return UEquipmentFeature_LimitedFeature::StaticClass();
	}
	UEquipmentFeature_LimitedFeature::UEquipmentFeature_LimitedFeature(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentFeature_LimitedFeature);
	UEquipmentFeature_LimitedFeature::~UEquipmentFeature_LimitedFeature() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_LimitedFeature_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_LimitedFeature_h_Statics::ScriptStructInfo[] = {
		{ FLimitedFragment::StaticStruct, Z_Construct_UScriptStruct_FLimitedFragment_Statics::NewStructOps, TEXT("LimitedFragment"), &Z_Registration_Info_UScriptStruct_LimitedFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLimitedFragment), 4069044596U) },
		{ FLimitedGameplayAbility::StaticStruct, Z_Construct_UScriptStruct_FLimitedGameplayAbility_Statics::NewStructOps, TEXT("LimitedGameplayAbility"), &Z_Registration_Info_UScriptStruct_LimitedGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLimitedGameplayAbility), 2852041414U) },
		{ FLimitedGameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FLimitedGameplayEffect_Statics::NewStructOps, TEXT("LimitedGameplayEffect"), &Z_Registration_Info_UScriptStruct_LimitedGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLimitedGameplayEffect), 4101951392U) },
		{ FLimitedAttributeSet::StaticStruct, Z_Construct_UScriptStruct_FLimitedAttributeSet_Statics::NewStructOps, TEXT("LimitedAttributeSet"), &Z_Registration_Info_UScriptStruct_LimitedAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLimitedAttributeSet), 1380831332U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_LimitedFeature_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentFeature_LimitedFeature, UEquipmentFeature_LimitedFeature::StaticClass, TEXT("UEquipmentFeature_LimitedFeature"), &Z_Registration_Info_UClass_UEquipmentFeature_LimitedFeature, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentFeature_LimitedFeature), 2140080343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_LimitedFeature_h_1882783505(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_LimitedFeature_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_LimitedFeature_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_LimitedFeature_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_LimitedFeature_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
