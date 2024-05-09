// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EquipmentGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AEquipmentInstance;
struct FGameplayCueParameters;
struct FGameplayTag;
#ifdef EQUIPMENTSYSTEM_EquipmentGameplayAbility_generated_h
#error "EquipmentGameplayAbility.generated.h already included, missing '#pragma once' in EquipmentGameplayAbility.h"
#endif
#define EQUIPMENTSYSTEM_EquipmentGameplayAbility_generated_h

#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_SPARSE_DATA
#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveGameplayCueOnVisualActor); \
	DECLARE_FUNCTION(execAddGameplayCueOnVisualActor); \
	DECLARE_FUNCTION(execExecuteGameplayCueOnVisualActor); \
	DECLARE_FUNCTION(execGetEquipmentInstance);


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveGameplayCueOnVisualActor); \
	DECLARE_FUNCTION(execAddGameplayCueOnVisualActor); \
	DECLARE_FUNCTION(execExecuteGameplayCueOnVisualActor); \
	DECLARE_FUNCTION(execGetEquipmentInstance);


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_ACCESSORS
#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipmentGameplayAbility(); \
	friend struct Z_Construct_UClass_UEquipmentGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UEquipmentGameplayAbility, UExpandedGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentGameplayAbility)


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUEquipmentGameplayAbility(); \
	friend struct Z_Construct_UClass_UEquipmentGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UEquipmentGameplayAbility, UExpandedGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentGameplayAbility)


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipmentGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentGameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentGameplayAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentGameplayAbility(UEquipmentGameplayAbility&&); \
	NO_API UEquipmentGameplayAbility(const UEquipmentGameplayAbility&); \
public: \
	NO_API virtual ~UEquipmentGameplayAbility();


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipmentGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentGameplayAbility(UEquipmentGameplayAbility&&); \
	NO_API UEquipmentGameplayAbility(const UEquipmentGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentGameplayAbility) \
	NO_API virtual ~UEquipmentGameplayAbility();


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_22_PROLOG
#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_SPARSE_DATA \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_RPC_WRAPPERS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_ACCESSORS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_INCLASS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_SPARSE_DATA \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_ACCESSORS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_INCLASS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EQUIPMENTSYSTEM_API UClass* StaticClass<class UEquipmentGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h


#define FOREACH_ENUM_EEQUIPMENTABILITYACTIVATIONLIMIT(op) \
	op(EEquipmentAbilityActivationLimit::None) \
	op(EEquipmentAbilityActivationLimit::ActivatedOnly) \
	op(EEquipmentAbilityActivationLimit::DeactivatedOnly) 

enum class EEquipmentAbilityActivationLimit : uint8;
template<> struct TIsUEnumClass<EEquipmentAbilityActivationLimit> { enum { Value = true }; };
template<> EQUIPMENTSYSTEM_API UEnum* StaticEnum<EEquipmentAbilityActivationLimit>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
