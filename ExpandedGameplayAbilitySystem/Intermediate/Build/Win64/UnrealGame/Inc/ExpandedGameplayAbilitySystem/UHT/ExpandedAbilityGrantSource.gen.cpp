// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExpandedGameplayAbilitySystem/Public/ExpandedAbilityGrantSource.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandedAbilityGrantSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilityGrantSource();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilityGrantSource_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilitySystemComponent_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedGameplayAbility_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Ability;
class UScriptStruct* FExpandedAbilityGrantSource_Ability::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Ability.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Ability.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("ExpandedAbilityGrantSource_Ability"));
	}
	return Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Ability.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FExpandedAbilityGrantSource_Ability>()
{
	return FExpandedAbilityGrantSource_Ability::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpandedAbilityGrantSource_Ability>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "ExpandedAbilityGrantSource_Ability" },
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilityGrantSource_Ability, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UExpandedGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "ExpandedAbilityGrantSource_Ability" },
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilityGrantSource_Ability, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_DynamicTags_MetaData[] = {
		{ "Category", "ExpandedAbilityGrantSource_Ability" },
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_DynamicTags = { "DynamicTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilityGrantSource_Ability, DynamicTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_DynamicTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_DynamicTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewProp_DynamicTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		nullptr,
		&NewStructOps,
		"ExpandedAbilityGrantSource_Ability",
		sizeof(FExpandedAbilityGrantSource_Ability),
		alignof(FExpandedAbilityGrantSource_Ability),
		Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability()
	{
		if (!Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Ability.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Ability.InnerSingleton, Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Ability.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Effect;
class UScriptStruct* FExpandedAbilityGrantSource_Effect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Effect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Effect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("ExpandedAbilityGrantSource_Effect"));
	}
	return Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Effect.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FExpandedAbilityGrantSource_Effect>()
{
	return FExpandedAbilityGrantSource_Effect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpandedAbilityGrantSource_Effect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "ExpandedAbilityGrantSource_Effect" },
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilityGrantSource_Effect, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "ExpandedAbilityGrantSource_Effect" },
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilityGrantSource_Effect, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::NewProp_Level_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::NewProp_Level,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		nullptr,
		&NewStructOps,
		"ExpandedAbilityGrantSource_Effect",
		sizeof(FExpandedAbilityGrantSource_Effect),
		alignof(FExpandedAbilityGrantSource_Effect),
		Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect()
	{
		if (!Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Effect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Effect.InnerSingleton, Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Effect.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_AttributeSet;
class UScriptStruct* FExpandedAbilityGrantSource_AttributeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_AttributeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_AttributeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("ExpandedAbilityGrantSource_AttributeSet"));
	}
	return Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_AttributeSet.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FExpandedAbilityGrantSource_AttributeSet>()
{
	return FExpandedAbilityGrantSource_AttributeSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpandedAbilityGrantSource_AttributeSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "ExpandedAbilityGrantSource_AttributeSet" },
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilityGrantSource_AttributeSet, AttributeSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::NewProp_AttributeSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::NewProp_AttributeSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		nullptr,
		&NewStructOps,
		"ExpandedAbilityGrantSource_AttributeSet",
		sizeof(FExpandedAbilityGrantSource_AttributeSet),
		alignof(FExpandedAbilityGrantSource_AttributeSet),
		Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet()
	{
		if (!Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_AttributeSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_AttributeSet.InnerSingleton, Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_AttributeSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_GrantHandle;
class UScriptStruct* FExpandedAbilityGrantSource_GrantHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_GrantHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_GrantHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("ExpandedAbilityGrantSource_GrantHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_GrantHandle.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FExpandedAbilityGrantSource_GrantHandle>()
{
	return FExpandedAbilityGrantSource_GrantHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpandedAbilityGrantSource_GrantHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilityGrantSource_GrantHandle, AbilitySystemComponent), Z_Construct_UClass_UExpandedAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_AbilitySpecHandles_Inner = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_AbilitySpecHandles_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_AbilitySpecHandles = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilityGrantSource_GrantHandle, AbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_AbilitySpecHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_AbilitySpecHandles_MetaData)) }; // 3562347300
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles_Inner = { "ActiveGameplayEffectHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles = { "ActiveGameplayEffectHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilityGrantSource_GrantHandle, ActiveGameplayEffectHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles_MetaData)) }; // 3579869929
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_GrantedAttributeSets_Inner = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_GrantedAttributeSets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_GrantedAttributeSets = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpandedAbilityGrantSource_GrantHandle, GrantedAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_GrantedAttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_GrantedAttributeSets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_AbilitySpecHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_AbilitySpecHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_ActiveGameplayEffectHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_GrantedAttributeSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewProp_GrantedAttributeSets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		nullptr,
		&NewStructOps,
		"ExpandedAbilityGrantSource_GrantHandle",
		sizeof(FExpandedAbilityGrantSource_GrantHandle),
		alignof(FExpandedAbilityGrantSource_GrantHandle),
		Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_GrantHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_GrantHandle.InnerSingleton, Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_GrantHandle.InnerSingleton;
	}
	void UExpandedAbilityGrantSource::StaticRegisterNativesUExpandedAbilityGrantSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpandedAbilityGrantSource);
	UClass* Z_Construct_UClass_UExpandedAbilityGrantSource_NoRegister()
	{
		return UExpandedAbilityGrantSource::StaticClass();
	}
	struct Z_Construct_UClass_UExpandedAbilityGrantSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpandedAbilityGrantSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedAbilityGrantSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilityGrantSource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpandedAbilityGrantSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IExpandedAbilityGrantSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpandedAbilityGrantSource_Statics::ClassParams = {
		&UExpandedAbilityGrantSource::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UExpandedAbilityGrantSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilityGrantSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExpandedAbilityGrantSource()
	{
		if (!Z_Registration_Info_UClass_UExpandedAbilityGrantSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpandedAbilityGrantSource.OuterSingleton, Z_Construct_UClass_UExpandedAbilityGrantSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExpandedAbilityGrantSource.OuterSingleton;
	}
	template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UExpandedAbilityGrantSource>()
	{
		return UExpandedAbilityGrantSource::StaticClass();
	}
	UExpandedAbilityGrantSource::UExpandedAbilityGrantSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandedAbilityGrantSource);
	UExpandedAbilityGrantSource::~UExpandedAbilityGrantSource() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilityGrantSource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilityGrantSource_h_Statics::ScriptStructInfo[] = {
		{ FExpandedAbilityGrantSource_Ability::StaticStruct, Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability_Statics::NewStructOps, TEXT("ExpandedAbilityGrantSource_Ability"), &Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExpandedAbilityGrantSource_Ability), 2303708370U) },
		{ FExpandedAbilityGrantSource_Effect::StaticStruct, Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect_Statics::NewStructOps, TEXT("ExpandedAbilityGrantSource_Effect"), &Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_Effect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExpandedAbilityGrantSource_Effect), 1338536718U) },
		{ FExpandedAbilityGrantSource_AttributeSet::StaticStruct, Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet_Statics::NewStructOps, TEXT("ExpandedAbilityGrantSource_AttributeSet"), &Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExpandedAbilityGrantSource_AttributeSet), 1388743448U) },
		{ FExpandedAbilityGrantSource_GrantHandle::StaticStruct, Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_GrantHandle_Statics::NewStructOps, TEXT("ExpandedAbilityGrantSource_GrantHandle"), &Z_Registration_Info_UScriptStruct_ExpandedAbilityGrantSource_GrantHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExpandedAbilityGrantSource_GrantHandle), 2507200418U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilityGrantSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExpandedAbilityGrantSource, UExpandedAbilityGrantSource::StaticClass, TEXT("UExpandedAbilityGrantSource"), &Z_Registration_Info_UClass_UExpandedAbilityGrantSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpandedAbilityGrantSource), 1976364162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilityGrantSource_h_1751028581(TEXT("/Script/ExpandedGameplayAbilitySystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilityGrantSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilityGrantSource_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilityGrantSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilityGrantSource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
