// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EquipmentInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEquipmentFragment;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FRuntimeFloatCurve;
#ifdef EQUIPMENTSYSTEM_EquipmentInstance_generated_h
#error "EquipmentInstance.generated.h already included, missing '#pragma once' in EquipmentInstance.h"
#endif
#define EQUIPMENTSYSTEM_EquipmentInstance_generated_h

#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_SPARSE_DATA
#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_RPC_WRAPPERS \
	virtual void UninitializeInstance_Implementation(); \
 \
	DECLARE_FUNCTION(execUninitializeInstance); \
	DECLARE_FUNCTION(execGetCurveProperty); \
	DECLARE_FUNCTION(execGetTagContainerProperty); \
	DECLARE_FUNCTION(execGetFloatProperty); \
	DECLARE_FUNCTION(execGetFragment);


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UninitializeInstance_Implementation(); \
 \
	DECLARE_FUNCTION(execUninitializeInstance); \
	DECLARE_FUNCTION(execGetCurveProperty); \
	DECLARE_FUNCTION(execGetTagContainerProperty); \
	DECLARE_FUNCTION(execGetFloatProperty); \
	DECLARE_FUNCTION(execGetFragment);


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_ACCESSORS
#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_CALLBACK_WRAPPERS
#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEquipmentInstance(); \
	friend struct Z_Construct_UClass_AEquipmentInstance_Statics; \
public: \
	DECLARE_CLASS(AEquipmentInstance, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(AEquipmentInstance)


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAEquipmentInstance(); \
	friend struct Z_Construct_UClass_AEquipmentInstance_Statics; \
public: \
	DECLARE_CLASS(AEquipmentInstance, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(AEquipmentInstance)


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEquipmentInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEquipmentInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEquipmentInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEquipmentInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEquipmentInstance(AEquipmentInstance&&); \
	NO_API AEquipmentInstance(const AEquipmentInstance&); \
public: \
	NO_API virtual ~AEquipmentInstance();


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEquipmentInstance(AEquipmentInstance&&); \
	NO_API AEquipmentInstance(const AEquipmentInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEquipmentInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEquipmentInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEquipmentInstance) \
	NO_API virtual ~AEquipmentInstance();


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_33_PROLOG
#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_SPARSE_DATA \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_RPC_WRAPPERS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_ACCESSORS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_CALLBACK_WRAPPERS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_INCLASS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_SPARSE_DATA \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_ACCESSORS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_CALLBACK_WRAPPERS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_INCLASS_NO_PURE_DECLS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EQUIPMENTSYSTEM_API UClass* StaticClass<class AEquipmentInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h


#define FOREACH_ENUM_EEQUIPMENTINSTANCESTATE(op) \
	op(NotInitialized) \
	op(InsideInitializingFragments) \
	op(OutsideInitializingFragments) \
	op(RuminativeInitializingFragments) \
	op(FinalInitializingFragments) \
	op(RegisteringVisualActors) \
	op(GrantingAbility) \
	op(Initialized) 

enum EEquipmentInstanceState : uint8;
template<> EQUIPMENTSYSTEM_API UEnum* StaticEnum<EEquipmentInstanceState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
