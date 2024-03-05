// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentAbilitySet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentAbilitySet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentAbilitySet();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentAbilitySet_NoRegister();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilitySet();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedGameplayAbility_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References

static_assert(std::is_polymorphic<FEquipmentAbilitySet_Ability>() == std::is_polymorphic<FExpandedAbilitySet_Ability>(), "USTRUCT FEquipmentAbilitySet_Ability cannot be polymorphic unless super FExpandedAbilitySet_Ability is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Ability;
class UScriptStruct* FEquipmentAbilitySet_Ability::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Ability.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Ability.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EquipmentAbilitySet_Ability"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Ability.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FEquipmentAbilitySet_Ability>()
{
	return FEquipmentAbilitySet_Ability::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredAbilityClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RequiredAbilityClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentAbilitySet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentAbilitySet_Ability>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::NewProp_RequiredAbilityClass_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "EquipmentAbilitySet_Ability" },
		{ "Comment", "// used to limit the ability\n" },
		{ "ModuleRelativePath", "Public/EquipmentAbilitySet.h" },
		{ "ToolTip", "used to limit the ability" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::NewProp_RequiredAbilityClass = { "RequiredAbilityClass", nullptr, (EPropertyFlags)0x0014000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentAbilitySet_Ability, RequiredAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UExpandedGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::NewProp_RequiredAbilityClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::NewProp_RequiredAbilityClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::NewProp_RequiredAbilityClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability,
		&NewStructOps,
		"EquipmentAbilitySet_Ability",
		sizeof(FEquipmentAbilitySet_Ability),
		alignof(FEquipmentAbilitySet_Ability),
		Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Ability.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Ability.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Ability.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEquipmentAbilitySet_Effect>() == std::is_polymorphic<FExpandedAbilitySet_Effect>(), "USTRUCT FEquipmentAbilitySet_Effect cannot be polymorphic unless super FExpandedAbilitySet_Effect is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Effect;
class UScriptStruct* FEquipmentAbilitySet_Effect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Effect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Effect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EquipmentAbilitySet_Effect"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Effect.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FEquipmentAbilitySet_Effect>()
{
	return FEquipmentAbilitySet_Effect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RequiredEffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentAbilitySet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentAbilitySet_Effect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::NewProp_RequiredEffectClass_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "EquipmentAbilitySet_Effect" },
		{ "Comment", "// used to limit the effect\n" },
		{ "ModuleRelativePath", "Public/EquipmentAbilitySet.h" },
		{ "ToolTip", "used to limit the effect" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::NewProp_RequiredEffectClass = { "RequiredEffectClass", nullptr, (EPropertyFlags)0x0014000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentAbilitySet_Effect, RequiredEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::NewProp_RequiredEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::NewProp_RequiredEffectClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::NewProp_RequiredEffectClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect,
		&NewStructOps,
		"EquipmentAbilitySet_Effect",
		sizeof(FEquipmentAbilitySet_Effect),
		alignof(FEquipmentAbilitySet_Effect),
		Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Effect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Effect.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Effect.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEquipmentAbilitySet_AttributeSet>() == std::is_polymorphic<FExpandedAbilitySet_AttributeSet>(), "USTRUCT FEquipmentAbilitySet_AttributeSet cannot be polymorphic unless super FExpandedAbilitySet_AttributeSet is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_AttributeSet;
class UScriptStruct* FEquipmentAbilitySet_AttributeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_AttributeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_AttributeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EquipmentAbilitySet_AttributeSet"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_AttributeSet.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FEquipmentAbilitySet_AttributeSet>()
{
	return FEquipmentAbilitySet_AttributeSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredAttributeSetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RequiredAttributeSetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentAbilitySet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentAbilitySet_AttributeSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::NewProp_RequiredAttributeSetClass_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "EquipmentAbilitySet_AttributeSet" },
		{ "Comment", "// used to limit the attribute set\n" },
		{ "ModuleRelativePath", "Public/EquipmentAbilitySet.h" },
		{ "ToolTip", "used to limit the attribute set" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::NewProp_RequiredAttributeSetClass = { "RequiredAttributeSetClass", nullptr, (EPropertyFlags)0x0014000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentAbilitySet_AttributeSet, RequiredAttributeSetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::NewProp_RequiredAttributeSetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::NewProp_RequiredAttributeSetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::NewProp_RequiredAttributeSetClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet,
		&NewStructOps,
		"EquipmentAbilitySet_AttributeSet",
		sizeof(FEquipmentAbilitySet_AttributeSet),
		alignof(FEquipmentAbilitySet_AttributeSet),
		Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_AttributeSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_AttributeSet.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_AttributeSet.InnerSingleton;
	}
	void UEquipmentAbilitySet::StaticRegisterNativesUEquipmentAbilitySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentAbilitySet);
	UClass* Z_Construct_UClass_UEquipmentAbilitySet_NoRegister()
	{
		return UEquipmentAbilitySet::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentAbilitySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentAbilities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentEffects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentAttributeSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentAttributeSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentAttributeSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentAbilitySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExpandedAbilitySet,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentAbilitySet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EquipmentAbilitySet.h" },
		{ "ModuleRelativePath", "Public/EquipmentAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAbilities_Inner = { "EquipmentAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability, METADATA_PARAMS(nullptr, 0) }; // 1350757875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAbilities_MetaData[] = {
		{ "Category", "EquipmentAbilitySet" },
		{ "DisplayName", "Equipment Abilities" },
		{ "ModuleRelativePath", "Public/EquipmentAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAbilities = { "EquipmentAbilities", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentAbilitySet, EquipmentAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAbilities_MetaData)) }; // 1350757875
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentEffects_Inner = { "EquipmentEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect, METADATA_PARAMS(nullptr, 0) }; // 3829728944
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentEffects_MetaData[] = {
		{ "Category", "EquipmentAbilitySet" },
		{ "DisplayName", "Equipment Effects" },
		{ "ModuleRelativePath", "Public/EquipmentAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentEffects = { "EquipmentEffects", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentAbilitySet, EquipmentEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentEffects_MetaData)) }; // 3829728944
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAttributeSets_Inner = { "EquipmentAttributeSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet, METADATA_PARAMS(nullptr, 0) }; // 4175239515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAttributeSets_MetaData[] = {
		{ "Category", "EquipmentAbilitySet" },
		{ "DisplayName", "Equipment Attribute Sets" },
		{ "ModuleRelativePath", "Public/EquipmentAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAttributeSets = { "EquipmentAttributeSets", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentAbilitySet, EquipmentAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAttributeSets_MetaData)) }; // 4175239515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentAbilitySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAttributeSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentAbilitySet_Statics::NewProp_EquipmentAttributeSets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentAbilitySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentAbilitySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentAbilitySet_Statics::ClassParams = {
		&UEquipmentAbilitySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentAbilitySet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentAbilitySet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentAbilitySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentAbilitySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentAbilitySet()
	{
		if (!Z_Registration_Info_UClass_UEquipmentAbilitySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentAbilitySet.OuterSingleton, Z_Construct_UClass_UEquipmentAbilitySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentAbilitySet.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentAbilitySet>()
	{
		return UEquipmentAbilitySet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentAbilitySet);
	UEquipmentAbilitySet::~UEquipmentAbilitySet() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentAbilitySet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentAbilitySet_h_Statics::ScriptStructInfo[] = {
		{ FEquipmentAbilitySet_Ability::StaticStruct, Z_Construct_UScriptStruct_FEquipmentAbilitySet_Ability_Statics::NewStructOps, TEXT("EquipmentAbilitySet_Ability"), &Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentAbilitySet_Ability), 1350757875U) },
		{ FEquipmentAbilitySet_Effect::StaticStruct, Z_Construct_UScriptStruct_FEquipmentAbilitySet_Effect_Statics::NewStructOps, TEXT("EquipmentAbilitySet_Effect"), &Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_Effect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentAbilitySet_Effect), 3829728944U) },
		{ FEquipmentAbilitySet_AttributeSet::StaticStruct, Z_Construct_UScriptStruct_FEquipmentAbilitySet_AttributeSet_Statics::NewStructOps, TEXT("EquipmentAbilitySet_AttributeSet"), &Z_Registration_Info_UScriptStruct_EquipmentAbilitySet_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentAbilitySet_AttributeSet), 4175239515U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentAbilitySet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentAbilitySet, UEquipmentAbilitySet::StaticClass, TEXT("UEquipmentAbilitySet"), &Z_Registration_Info_UClass_UEquipmentAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentAbilitySet), 676284922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentAbilitySet_h_2727945087(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentAbilitySet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentAbilitySet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentAbilitySet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
