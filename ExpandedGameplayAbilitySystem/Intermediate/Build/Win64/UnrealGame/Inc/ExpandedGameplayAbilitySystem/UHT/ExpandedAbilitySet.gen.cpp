// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExpandedGameplayAbilitySystem/Public/ExpandedAbilitySet.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandedAbilitySet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilitySet();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilitySet_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilitySystemComponent_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedGameplayAbility_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Ability;
class UScriptStruct* FExpandedAbilitySet_Ability::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Ability.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Ability.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("ExpandedAbilitySet_Ability"));
	}
	return Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Ability.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FExpandedAbilitySet_Ability>()
{
	return FExpandedAbilitySet_Ability::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpandedAbilitySet_Ability>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "ExpandedAbilitySet_Ability" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilitySet_Ability, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UExpandedGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "ExpandedAbilitySet_Ability" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilitySet_Ability, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_DynamicTags_MetaData[] = {
		{ "Category", "ExpandedAbilitySet_Ability" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_DynamicTags = { "DynamicTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilitySet_Ability, DynamicTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_DynamicTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_DynamicTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewProp_DynamicTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		nullptr,
		&NewStructOps,
		"ExpandedAbilitySet_Ability",
		sizeof(FExpandedAbilitySet_Ability),
		alignof(FExpandedAbilitySet_Ability),
		Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability()
	{
		if (!Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Ability.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Ability.InnerSingleton, Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Ability.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Effect;
class UScriptStruct* FExpandedAbilitySet_Effect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Effect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Effect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("ExpandedAbilitySet_Effect"));
	}
	return Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Effect.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FExpandedAbilitySet_Effect>()
{
	return FExpandedAbilitySet_Effect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpandedAbilitySet_Effect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "ExpandedAbilitySet_Effect" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilitySet_Effect, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "ExpandedAbilitySet_Effect" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilitySet_Effect, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::NewProp_Level_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::NewProp_Level,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		nullptr,
		&NewStructOps,
		"ExpandedAbilitySet_Effect",
		sizeof(FExpandedAbilitySet_Effect),
		alignof(FExpandedAbilitySet_Effect),
		Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect()
	{
		if (!Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Effect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Effect.InnerSingleton, Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Effect.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_AttributeSet;
class UScriptStruct* FExpandedAbilitySet_AttributeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_AttributeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_AttributeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("ExpandedAbilitySet_AttributeSet"));
	}
	return Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_AttributeSet.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FExpandedAbilitySet_AttributeSet>()
{
	return FExpandedAbilitySet_AttributeSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpandedAbilitySet_AttributeSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "ExpandedAbilitySet_AttributeSet" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilitySet_AttributeSet, AttributeSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::NewProp_AttributeSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::NewProp_AttributeSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		nullptr,
		&NewStructOps,
		"ExpandedAbilitySet_AttributeSet",
		sizeof(FExpandedAbilitySet_AttributeSet),
		alignof(FExpandedAbilitySet_AttributeSet),
		Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet()
	{
		if (!Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_AttributeSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_AttributeSet.InnerSingleton, Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_AttributeSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_GrantHandle;
class UScriptStruct* FExpandedAbilitySet_GrantHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_GrantHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_GrantHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("ExpandedAbilitySet_GrantHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_GrantHandle.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FExpandedAbilitySet_GrantHandle>()
{
	return FExpandedAbilitySet_GrantHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySpecHandles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveGameplayEffectHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGameplayEffectHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGameplayEffectHandles;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrantedAttributeSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributeSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributeSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpandedAbilitySet_GrantHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilitySet_GrantHandle, AbilitySystemComponent), Z_Construct_UClass_UExpandedAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_AbilitySpecHandles_Inner = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_AbilitySpecHandles_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_AbilitySpecHandles = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilitySet_GrantHandle, AbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_AbilitySpecHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_AbilitySpecHandles_MetaData)) }; // 3562347300
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles_Inner = { "ActiveGameplayEffectHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles = { "ActiveGameplayEffectHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilitySet_GrantHandle, ActiveGameplayEffectHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles_MetaData)) }; // 3579869929
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_GrantedAttributeSets_Inner = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_GrantedAttributeSets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_GrantedAttributeSets = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilitySet_GrantHandle, GrantedAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_GrantedAttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_GrantedAttributeSets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_AbilitySpecHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_AbilitySpecHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_GrantedAttributeSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewProp_GrantedAttributeSets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		nullptr,
		&NewStructOps,
		"ExpandedAbilitySet_GrantHandle",
		sizeof(FExpandedAbilitySet_GrantHandle),
		alignof(FExpandedAbilitySet_GrantHandle),
		Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_GrantHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_GrantHandle.InnerSingleton, Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_GrantHandle.InnerSingleton;
	}
	void UExpandedAbilitySet::StaticRegisterNativesUExpandedAbilitySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpandedAbilitySet);
	UClass* Z_Construct_UClass_UExpandedAbilitySet_NoRegister()
	{
		return UExpandedAbilitySet::StaticClass();
	}
	struct Z_Construct_UClass_UExpandedAbilitySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpandedAbilitySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedAbilitySet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An AbilitySet for grant Ability, effect and attribute set in batch.\n */" },
		{ "IncludePath", "ExpandedAbilitySet.h" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
		{ "ToolTip", "An AbilitySet for grant Ability, effect and attribute set in batch." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability, METADATA_PARAMS(nullptr, 0) }; // 860380553
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "ExpandedAbilitySet" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExpandedAbilitySet, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities_MetaData)) }; // 860380553
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect, METADATA_PARAMS(nullptr, 0) }; // 201706474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "ExpandedAbilitySet" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExpandedAbilitySet, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects_MetaData)) }; // 201706474
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets_Inner = { "AttributeSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet, METADATA_PARAMS(nullptr, 0) }; // 2241508966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets_MetaData[] = {
		{ "Category", "ExpandedAbilitySet" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets = { "AttributeSets", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExpandedAbilitySet, AttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets_MetaData)) }; // 2241508966
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExpandedAbilitySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpandedAbilitySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpandedAbilitySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpandedAbilitySet_Statics::ClassParams = {
		&UExpandedAbilitySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExpandedAbilitySet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExpandedAbilitySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExpandedAbilitySet()
	{
		if (!Z_Registration_Info_UClass_UExpandedAbilitySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpandedAbilitySet.OuterSingleton, Z_Construct_UClass_UExpandedAbilitySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExpandedAbilitySet.OuterSingleton;
	}
	template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UExpandedAbilitySet>()
	{
		return UExpandedAbilitySet::StaticClass();
	}
	UExpandedAbilitySet::UExpandedAbilitySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandedAbilitySet);
	UExpandedAbilitySet::~UExpandedAbilitySet() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySet_h_Statics::ScriptStructInfo[] = {
		{ FExpandedAbilitySet_Ability::StaticStruct, Z_Construct_UScriptStruct_FExpandedAbilitySet_Ability_Statics::NewStructOps, TEXT("ExpandedAbilitySet_Ability"), &Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExpandedAbilitySet_Ability), 860380553U) },
		{ FExpandedAbilitySet_Effect::StaticStruct, Z_Construct_UScriptStruct_FExpandedAbilitySet_Effect_Statics::NewStructOps, TEXT("ExpandedAbilitySet_Effect"), &Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_Effect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExpandedAbilitySet_Effect), 201706474U) },
		{ FExpandedAbilitySet_AttributeSet::StaticStruct, Z_Construct_UScriptStruct_FExpandedAbilitySet_AttributeSet_Statics::NewStructOps, TEXT("ExpandedAbilitySet_AttributeSet"), &Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExpandedAbilitySet_AttributeSet), 2241508966U) },
		{ FExpandedAbilitySet_GrantHandle::StaticStruct, Z_Construct_UScriptStruct_FExpandedAbilitySet_GrantHandle_Statics::NewStructOps, TEXT("ExpandedAbilitySet_GrantHandle"), &Z_Registration_Info_UScriptStruct_ExpandedAbilitySet_GrantHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExpandedAbilitySet_GrantHandle), 2432598336U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExpandedAbilitySet, UExpandedAbilitySet::StaticClass, TEXT("UExpandedAbilitySet"), &Z_Registration_Info_UClass_UExpandedAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpandedAbilitySet), 1931612175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySet_h_3222685992(TEXT("/Script/ExpandedGameplayAbilitySystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
