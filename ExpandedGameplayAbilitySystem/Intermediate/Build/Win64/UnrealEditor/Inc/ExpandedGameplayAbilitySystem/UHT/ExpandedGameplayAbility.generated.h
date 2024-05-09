// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExpandedGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FGameplayAbilityActivationInfo;
struct FGameplayAbilityActorInfo;
struct FGameplayAbilitySpecHandle;
struct FGameplayCueParameters;
struct FGameplayTag;
struct FHitResult;
#ifdef EXPANDEDGAMEPLAYABILITYSYSTEM_ExpandedGameplayAbility_generated_h
#error "ExpandedGameplayAbility.generated.h already included, missing '#pragma once' in ExpandedGameplayAbility.h"
#endif
#define EXPANDEDGAMEPLAYABILITYSYSTEM_ExpandedGameplayAbility_generated_h

#define FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_SPARSE_DATA
#define FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_RPC_WRAPPERS \
	virtual void CustomApplyCost_Implementation(const FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo const& ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const; \
	virtual bool CustomCheckCost_Implementation(const FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo const& ActorInfo) const; \
 \
	DECLARE_FUNCTION(execAddBatchGameplayCueParam_HitResult); \
	DECLARE_FUNCTION(execIsInputPressed); \
	DECLARE_FUNCTION(execK2_GetSourceObject); \
	DECLARE_FUNCTION(execCustomApplyCost); \
	DECLARE_FUNCTION(execCustomCheckCost); \
	DECLARE_FUNCTION(execLocallyRemoveGameplayCueOnOwner); \
	DECLARE_FUNCTION(execLocallyAddGameplayCueOnOwner); \
	DECLARE_FUNCTION(execLocallyExecuteGameplayCueOnOwner);


#define FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CustomApplyCost_Implementation(const FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo const& ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const; \
	virtual bool CustomCheckCost_Implementation(const FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo const& ActorInfo) const; \
 \
	DECLARE_FUNCTION(execAddBatchGameplayCueParam_HitResult); \
	DECLARE_FUNCTION(execIsInputPressed); \
	DECLARE_FUNCTION(execK2_GetSourceObject); \
	DECLARE_FUNCTION(execCustomApplyCost); \
	DECLARE_FUNCTION(execCustomCheckCost); \
	DECLARE_FUNCTION(execLocallyRemoveGameplayCueOnOwner); \
	DECLARE_FUNCTION(execLocallyAddGameplayCueOnOwner); \
	DECLARE_FUNCTION(execLocallyExecuteGameplayCueOnOwner);


#define FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_ACCESSORS
#define FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_CALLBACK_WRAPPERS
#define FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExpandedGameplayAbility(); \
	friend struct Z_Construct_UClass_UExpandedGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UExpandedGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExpandedGameplayAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UExpandedGameplayAbility)


#define FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUExpandedGameplayAbility(); \
	friend struct Z_Construct_UClass_UExpandedGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UExpandedGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExpandedGameplayAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UExpandedGameplayAbility)


#define FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExpandedGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExpandedGameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExpandedGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExpandedGameplayAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExpandedGameplayAbility(UExpandedGameplayAbility&&); \
	NO_API UExpandedGameplayAbility(const UExpandedGameplayAbility&); \
public: \
	NO_API virtual ~UExpandedGameplayAbility();


#define FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExpandedGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExpandedGameplayAbility(UExpandedGameplayAbility&&); \
	NO_API UExpandedGameplayAbility(const UExpandedGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExpandedGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExpandedGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExpandedGameplayAbility) \
	NO_API virtual ~UExpandedGameplayAbility();


#define FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_23_PROLOG
#define FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_SPARSE_DATA \
	FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_RPC_WRAPPERS \
	FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_ACCESSORS \
	FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_CALLBACK_WRAPPERS \
	FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_INCLASS \
	FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_SPARSE_DATA \
	FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_ACCESSORS \
	FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_CALLBACK_WRAPPERS \
	FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_INCLASS_NO_PURE_DECLS \
	FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<class UExpandedGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h


#define FOREACH_ENUM_EABILITYACTIVATIONPOLICY(op) \
	op(EAbilityActivationPolicy::OnInputTriggered) \
	op(EAbilityActivationPolicy::OnSpawnOrGranted) \
	op(EAbilityActivationPolicy::EventOnly) 

enum class EAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EAbilityActivationPolicy> { enum { Value = true }; };
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EAbilityActivationPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
