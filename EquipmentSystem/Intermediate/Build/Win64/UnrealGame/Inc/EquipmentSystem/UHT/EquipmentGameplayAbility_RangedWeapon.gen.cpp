// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/Abilities/EquipmentGameplayAbility_RangedWeapon.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentGameplayAbility_RangedWeapon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_RangedWeapon_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentGameplayAbility();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_NoRegister();
	EQUIPMENTSYSTEM_API UEnum* Z_Construct_UEnum_EquipmentSystem_ERangedWeaponTargetingSource();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRangedWeaponFiringInput();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RangedWeaponFiringInput;
class UScriptStruct* FRangedWeaponFiringInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RangedWeaponFiringInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RangedWeaponFiringInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRangedWeaponFiringInput, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("RangedWeaponFiringInput"));
	}
	return Z_Registration_Info_UScriptStruct_RangedWeaponFiringInput.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FRangedWeaponFiringInput>()
{
	return FRangedWeaponFiringInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRangedWeaponFiringInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRangedWeaponFiringInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_RangedWeapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRangedWeaponFiringInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRangedWeaponFiringInput>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRangedWeaponFiringInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		nullptr,
		&NewStructOps,
		"RangedWeaponFiringInput",
		sizeof(FRangedWeaponFiringInput),
		alignof(FRangedWeaponFiringInput),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRangedWeaponFiringInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangedWeaponFiringInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRangedWeaponFiringInput()
	{
		if (!Z_Registration_Info_UScriptStruct_RangedWeaponFiringInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RangedWeaponFiringInput.InnerSingleton, Z_Construct_UScriptStruct_FRangedWeaponFiringInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RangedWeaponFiringInput.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERangedWeaponTargetingSource;
	static UEnum* ERangedWeaponTargetingSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERangedWeaponTargetingSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERangedWeaponTargetingSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EquipmentSystem_ERangedWeaponTargetingSource, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("ERangedWeaponTargetingSource"));
		}
		return Z_Registration_Info_UEnum_ERangedWeaponTargetingSource.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UEnum* StaticEnum<ERangedWeaponTargetingSource>()
	{
		return ERangedWeaponTargetingSource_StaticEnum();
	}
	struct Z_Construct_UEnum_EquipmentSystem_ERangedWeaponTargetingSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EquipmentSystem_ERangedWeaponTargetingSource_Statics::Enumerators[] = {
		{ "ERangedWeaponTargetingSource::CameraTowardsFocus", (int64)ERangedWeaponTargetingSource::CameraTowardsFocus },
		{ "ERangedWeaponTargetingSource::PawnForward", (int64)ERangedWeaponTargetingSource::PawnForward },
		{ "ERangedWeaponTargetingSource::PawnTowardsFocus", (int64)ERangedWeaponTargetingSource::PawnTowardsFocus },
		{ "ERangedWeaponTargetingSource::WeaponForward", (int64)ERangedWeaponTargetingSource::WeaponForward },
		{ "ERangedWeaponTargetingSource::WeaponTowardsFocus", (int64)ERangedWeaponTargetingSource::WeaponTowardsFocus },
		{ "ERangedWeaponTargetingSource::Custom", (int64)ERangedWeaponTargetingSource::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EquipmentSystem_ERangedWeaponTargetingSource_Statics::Enum_MetaDataParams[] = {
		{ "CameraTowardsFocus.Comment", "// From the player's camera towards camera focus\n" },
		{ "CameraTowardsFocus.Name", "ERangedWeaponTargetingSource::CameraTowardsFocus" },
		{ "CameraTowardsFocus.ToolTip", "From the player's camera towards camera focus" },
		{ "Custom.Comment", "// Custom blueprint-specified source location\n" },
		{ "Custom.Name", "ERangedWeaponTargetingSource::Custom" },
		{ "Custom.ToolTip", "Custom blueprint-specified source location" },
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_RangedWeapon.h" },
		{ "PawnForward.Comment", "// From the pawn's center, in the pawn's orientation\n" },
		{ "PawnForward.Name", "ERangedWeaponTargetingSource::PawnForward" },
		{ "PawnForward.ToolTip", "From the pawn's center, in the pawn's orientation" },
		{ "PawnTowardsFocus.Comment", "// From the pawn's center, oriented towards camera focus\n" },
		{ "PawnTowardsFocus.Name", "ERangedWeaponTargetingSource::PawnTowardsFocus" },
		{ "PawnTowardsFocus.ToolTip", "From the pawn's center, oriented towards camera focus" },
		{ "WeaponForward.Comment", "// From the weapon's muzzle or location, in the pawn's orientation\n" },
		{ "WeaponForward.Name", "ERangedWeaponTargetingSource::WeaponForward" },
		{ "WeaponForward.ToolTip", "From the weapon's muzzle or location, in the pawn's orientation" },
		{ "WeaponTowardsFocus.Comment", "// From the weapon's muzzle or location, towards camera focus\n" },
		{ "WeaponTowardsFocus.Name", "ERangedWeaponTargetingSource::WeaponTowardsFocus" },
		{ "WeaponTowardsFocus.ToolTip", "From the weapon's muzzle or location, towards camera focus" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EquipmentSystem_ERangedWeaponTargetingSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EquipmentSystem,
		nullptr,
		"ERangedWeaponTargetingSource",
		"ERangedWeaponTargetingSource",
		Z_Construct_UEnum_EquipmentSystem_ERangedWeaponTargetingSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EquipmentSystem_ERangedWeaponTargetingSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EquipmentSystem_ERangedWeaponTargetingSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EquipmentSystem_ERangedWeaponTargetingSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EquipmentSystem_ERangedWeaponTargetingSource()
	{
		if (!Z_Registration_Info_UEnum_ERangedWeaponTargetingSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERangedWeaponTargetingSource.InnerSingleton, Z_Construct_UEnum_EquipmentSystem_ERangedWeaponTargetingSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERangedWeaponTargetingSource.InnerSingleton;
	}
	DEFINE_FUNCTION(UEquipmentGameplayAbility_RangedWeapon::execCommitHeat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CommitHeat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentGameplayAbility_RangedWeapon::execIsLastBulletHitResult)
	{
		P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_DataHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEquipmentGameplayAbility_RangedWeapon::IsLastBulletHitResult(Z_Param_Out_DataHandle,Z_Param_Index);
		P_NATIVE_END;
	}
	void UEquipmentGameplayAbility_RangedWeapon::StaticRegisterNativesUEquipmentGameplayAbility_RangedWeapon()
	{
		UClass* Class = UEquipmentGameplayAbility_RangedWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CommitHeat", &UEquipmentGameplayAbility_RangedWeapon::execCommitHeat },
			{ "IsLastBulletHitResult", &UEquipmentGameplayAbility_RangedWeapon::execIsLastBulletHitResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_CommitHeat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_CommitHeat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_CommitHeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon, nullptr, "CommitHeat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_CommitHeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_CommitHeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_CommitHeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_CommitHeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics
	{
		struct EquipmentGameplayAbility_RangedWeapon_eventIsLastBulletHitResult_Parms
		{
			FGameplayAbilityTargetDataHandle DataHandle;
			int32 Index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::NewProp_DataHandle = { "DataHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_RangedWeapon_eventIsLastBulletHitResult_Parms, DataHandle), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3993235140
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_RangedWeapon_eventIsLastBulletHitResult_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EquipmentGameplayAbility_RangedWeapon_eventIsLastBulletHitResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EquipmentGameplayAbility_RangedWeapon_eventIsLastBulletHitResult_Parms), &Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::NewProp_DataHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon, nullptr, "IsLastBulletHitResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::EquipmentGameplayAbility_RangedWeapon_eventIsLastBulletHitResult_Parms), Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentGameplayAbility_RangedWeapon);
	UClass* Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_NoRegister()
	{
		return UEquipmentGameplayAbility_RangedWeapon::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedRangedWeaponFragmentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AssociatedRangedWeaponFragmentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimationMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimationMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimationPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireAnimationPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireGameplayCueVisualActorTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FireGameplayCueVisualActorTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireGameplayCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FireGameplayCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstantDamageEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InstantDamageEffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEquipmentGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_CommitHeat, "CommitHeat" }, // 1150297066
		{ &Z_Construct_UFunction_UEquipmentGameplayAbility_RangedWeapon_IsLastBulletHitResult, "IsLastBulletHitResult" }, // 1516280941
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/EquipmentGameplayAbility_RangedWeapon.h" },
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_RangedWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_AssociatedRangedWeaponFragmentClass_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_AssociatedRangedWeaponFragmentClass = { "AssociatedRangedWeaponFragmentClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentGameplayAbility_RangedWeapon, AssociatedRangedWeaponFragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEquipmentFragment_RangedWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_AssociatedRangedWeaponFragmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_AssociatedRangedWeaponFragmentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireAnimationMontage_MetaData[] = {
		{ "Category", "EquipmentGameplayAbility_RangedWeapon" },
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireAnimationMontage = { "FireAnimationMontage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentGameplayAbility_RangedWeapon, FireAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireAnimationMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireAnimationMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireAnimationPlayRate_MetaData[] = {
		{ "Category", "EquipmentGameplayAbility_RangedWeapon" },
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireAnimationPlayRate = { "FireAnimationPlayRate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentGameplayAbility_RangedWeapon, FireAnimationPlayRate), METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireAnimationPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireAnimationPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireGameplayCueVisualActorTag_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "EquipmentGameplayAbility_RangedWeapon" },
		{ "Comment", "/**\n\x09 * The tag represents the visual actor which will be called with gameplay cue events\n\x09 */" },
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_RangedWeapon.h" },
		{ "ToolTip", "The tag represents the visual actor which will be called with gameplay cue events" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireGameplayCueVisualActorTag = { "FireGameplayCueVisualActorTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentGameplayAbility_RangedWeapon, FireGameplayCueVisualActorTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireGameplayCueVisualActorTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireGameplayCueVisualActorTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireGameplayCueTag_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "EquipmentGameplayAbility_RangedWeapon" },
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_RangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireGameplayCueTag = { "FireGameplayCueTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentGameplayAbility_RangedWeapon, FireGameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireGameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireGameplayCueTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_InstantDamageEffectClass_MetaData[] = {
		{ "Category", "EquipmentGameplayAbility_RangedWeapon" },
		{ "Comment", "/**\n\x09 * Effect in this class will be treated as \"instant damage\", \n\x09 * the effect will be applied to target with level of Damage Property.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Abilities/EquipmentGameplayAbility_RangedWeapon.h" },
		{ "ToolTip", "Effect in this class will be treated as \"instant damage\",\nthe effect will be applied to target with level of Damage Property." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_InstantDamageEffectClass = { "InstantDamageEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentGameplayAbility_RangedWeapon, InstantDamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_InstantDamageEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_InstantDamageEffectClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_AssociatedRangedWeaponFragmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireAnimationMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireAnimationPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireGameplayCueVisualActorTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_FireGameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::NewProp_InstantDamageEffectClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentGameplayAbility_RangedWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::ClassParams = {
		&UEquipmentGameplayAbility_RangedWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon()
	{
		if (!Z_Registration_Info_UClass_UEquipmentGameplayAbility_RangedWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentGameplayAbility_RangedWeapon.OuterSingleton, Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentGameplayAbility_RangedWeapon.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentGameplayAbility_RangedWeapon>()
	{
		return UEquipmentGameplayAbility_RangedWeapon::StaticClass();
	}
	UEquipmentGameplayAbility_RangedWeapon::UEquipmentGameplayAbility_RangedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentGameplayAbility_RangedWeapon);
	UEquipmentGameplayAbility_RangedWeapon::~UEquipmentGameplayAbility_RangedWeapon() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_Statics::EnumInfo[] = {
		{ ERangedWeaponTargetingSource_StaticEnum, TEXT("ERangedWeaponTargetingSource"), &Z_Registration_Info_UEnum_ERangedWeaponTargetingSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3233654618U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_Statics::ScriptStructInfo[] = {
		{ FRangedWeaponFiringInput::StaticStruct, Z_Construct_UScriptStruct_FRangedWeaponFiringInput_Statics::NewStructOps, TEXT("RangedWeaponFiringInput"), &Z_Registration_Info_UScriptStruct_RangedWeaponFiringInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRangedWeaponFiringInput), 2808740591U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon, UEquipmentGameplayAbility_RangedWeapon::StaticClass, TEXT("UEquipmentGameplayAbility_RangedWeapon"), &Z_Registration_Info_UClass_UEquipmentGameplayAbility_RangedWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentGameplayAbility_RangedWeapon), 2139311864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_1786982013(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
