// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/EquipmentGameplayAbility_RangedWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilityTargetDataHandle;
#ifdef EQUIPMENTSYSTEM_EquipmentGameplayAbility_RangedWeapon_generated_h
#error "EquipmentGameplayAbility_RangedWeapon.generated.h already included, missing '#pragma once' in EquipmentGameplayAbility_RangedWeapon.h"
#endif
#define EQUIPMENTSYSTEM_EquipmentGameplayAbility_RangedWeapon_generated_h

#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRangedWeaponFiringInput_Statics; \
	EQUIPMENTSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<struct FRangedWeaponFiringInput>();

#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_SPARSE_DATA
#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCommitHeat); \
	DECLARE_FUNCTION(execIsLastBulletHitResult);


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCommitHeat); \
	DECLARE_FUNCTION(execIsLastBulletHitResult);


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_ACCESSORS
#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipmentGameplayAbility_RangedWeapon(); \
	friend struct Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics; \
public: \
	DECLARE_CLASS(UEquipmentGameplayAbility_RangedWeapon, UEquipmentGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentGameplayAbility_RangedWeapon)


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUEquipmentGameplayAbility_RangedWeapon(); \
	friend struct Z_Construct_UClass_UEquipmentGameplayAbility_RangedWeapon_Statics; \
public: \
	DECLARE_CLASS(UEquipmentGameplayAbility_RangedWeapon, UEquipmentGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentGameplayAbility_RangedWeapon)


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipmentGameplayAbility_RangedWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentGameplayAbility_RangedWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentGameplayAbility_RangedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentGameplayAbility_RangedWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentGameplayAbility_RangedWeapon(UEquipmentGameplayAbility_RangedWeapon&&); \
	NO_API UEquipmentGameplayAbility_RangedWeapon(const UEquipmentGameplayAbility_RangedWeapon&); \
public: \
	NO_API virtual ~UEquipmentGameplayAbility_RangedWeapon();


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipmentGameplayAbility_RangedWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentGameplayAbility_RangedWeapon(UEquipmentGameplayAbility_RangedWeapon&&); \
	NO_API UEquipmentGameplayAbility_RangedWeapon(const UEquipmentGameplayAbility_RangedWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentGameplayAbility_RangedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentGameplayAbility_RangedWeapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentGameplayAbility_RangedWeapon) \
	NO_API virtual ~UEquipmentGameplayAbility_RangedWeapon();


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_39_PROLOG
#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_SPARSE_DATA \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_RPC_WRAPPERS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_ACCESSORS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_INCLASS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_SPARSE_DATA \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_ACCESSORS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_INCLASS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EQUIPMENTSYSTEM_API UClass* StaticClass<class UEquipmentGameplayAbility_RangedWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Abilities_EquipmentGameplayAbility_RangedWeapon_h


#define FOREACH_ENUM_ERANGEDWEAPONTARGETINGSOURCE(op) \
	op(ERangedWeaponTargetingSource::CameraTowardsFocus) \
	op(ERangedWeaponTargetingSource::PawnForward) \
	op(ERangedWeaponTargetingSource::PawnTowardsFocus) \
	op(ERangedWeaponTargetingSource::WeaponForward) \
	op(ERangedWeaponTargetingSource::WeaponTowardsFocus) \
	op(ERangedWeaponTargetingSource::Custom) 

enum class ERangedWeaponTargetingSource;
template<> struct TIsUEnumClass<ERangedWeaponTargetingSource> { enum { Value = true }; };
template<> EQUIPMENTSYSTEM_API UEnum* StaticEnum<ERangedWeaponTargetingSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
