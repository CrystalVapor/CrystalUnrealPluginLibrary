// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExpandedAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilitySpec;
struct FGameplayCueParameters;
struct FGameplayTag;
#ifdef EXPANDEDGAMEPLAYABILITYSYSTEM_ExpandedAbilitySystemComponent_generated_h
#error "ExpandedAbilitySystemComponent.generated.h already included, missing '#pragma once' in ExpandedAbilitySystemComponent.h"
#endif
#define EXPANDEDGAMEPLAYABILITYSYSTEM_ExpandedAbilitySystemComponent_generated_h

#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilitySpecInputMeta_Statics; \
	EXPANDEDGAMEPLAYABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FGameplayAbilitySpecInputMeta>();

#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics; \
	EXPANDEDGAMEPLAYABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FGameplayAbilitySpecHandleContainer>();

#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_SPARSE_DATA
#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_RPC_WRAPPERS \
	virtual void ClientAddSpecInputMapping_Implementation(FGameplayAbilitySpec const& AbilitySpec); \
 \
	DECLARE_FUNCTION(execHasMoreTagStack); \
	DECLARE_FUNCTION(execRemoveGameplayCueLocal); \
	DECLARE_FUNCTION(execAddGameplayCueLocal); \
	DECLARE_FUNCTION(execExecuteGameplayCueLocal); \
	DECLARE_FUNCTION(execClientAddSpecInputMapping);


#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientAddSpecInputMapping_Implementation(FGameplayAbilitySpec const& AbilitySpec); \
 \
	DECLARE_FUNCTION(execHasMoreTagStack); \
	DECLARE_FUNCTION(execRemoveGameplayCueLocal); \
	DECLARE_FUNCTION(execAddGameplayCueLocal); \
	DECLARE_FUNCTION(execExecuteGameplayCueLocal); \
	DECLARE_FUNCTION(execClientAddSpecInputMapping);


#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_ACCESSORS
#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_CALLBACK_WRAPPERS
#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExpandedAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UExpandedAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExpandedGameplayAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UExpandedAbilitySystemComponent)


#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUExpandedAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UExpandedAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExpandedGameplayAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UExpandedAbilitySystemComponent)


#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExpandedAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExpandedAbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExpandedAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExpandedAbilitySystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExpandedAbilitySystemComponent(UExpandedAbilitySystemComponent&&); \
	NO_API UExpandedAbilitySystemComponent(const UExpandedAbilitySystemComponent&); \
public: \
	NO_API virtual ~UExpandedAbilitySystemComponent();


#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExpandedAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExpandedAbilitySystemComponent(UExpandedAbilitySystemComponent&&); \
	NO_API UExpandedAbilitySystemComponent(const UExpandedAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExpandedAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExpandedAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExpandedAbilitySystemComponent) \
	NO_API virtual ~UExpandedAbilitySystemComponent();


#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_31_PROLOG
#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_SPARSE_DATA \
	FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_RPC_WRAPPERS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_ACCESSORS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_CALLBACK_WRAPPERS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_INCLASS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_SPARSE_DATA \
	FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_ACCESSORS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_CALLBACK_WRAPPERS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<class UExpandedAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
