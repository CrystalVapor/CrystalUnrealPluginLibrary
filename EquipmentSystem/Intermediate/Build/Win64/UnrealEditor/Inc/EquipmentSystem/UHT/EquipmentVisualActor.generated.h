// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EquipmentVisualActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AEquipmentInstance;
class AEquipmentVisualActor;
class APawn;
struct FGameplayCueParameters;
struct FHitResult;
#ifdef EQUIPMENTSYSTEM_EquipmentVisualActor_generated_h
#error "EquipmentVisualActor.generated.h already included, missing '#pragma once' in EquipmentVisualActor.h"
#endif
#define EQUIPMENTSYSTEM_EquipmentVisualActor_generated_h

#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_SPARSE_DATA
#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRegisterSubVisualActor); \
	DECLARE_FUNCTION(execIsEquipped); \
	DECLARE_FUNCTION(execGetOwnerPawn); \
	DECLARE_FUNCTION(execForceMakeGameplayCueParametersFromHitResult);


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRegisterSubVisualActor); \
	DECLARE_FUNCTION(execIsEquipped); \
	DECLARE_FUNCTION(execGetOwnerPawn); \
	DECLARE_FUNCTION(execForceMakeGameplayCueParametersFromHitResult);


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_ACCESSORS
#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_CALLBACK_WRAPPERS
#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEquipmentVisualActor(); \
	friend struct Z_Construct_UClass_AEquipmentVisualActor_Statics; \
public: \
	DECLARE_CLASS(AEquipmentVisualActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(AEquipmentVisualActor) \
	virtual UObject* _getUObject() const override { return const_cast<AEquipmentVisualActor*>(this); }


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAEquipmentVisualActor(); \
	friend struct Z_Construct_UClass_AEquipmentVisualActor_Statics; \
public: \
	DECLARE_CLASS(AEquipmentVisualActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(AEquipmentVisualActor) \
	virtual UObject* _getUObject() const override { return const_cast<AEquipmentVisualActor*>(this); }


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEquipmentVisualActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEquipmentVisualActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEquipmentVisualActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEquipmentVisualActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEquipmentVisualActor(AEquipmentVisualActor&&); \
	NO_API AEquipmentVisualActor(const AEquipmentVisualActor&); \
public: \
	NO_API virtual ~AEquipmentVisualActor();


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEquipmentVisualActor(AEquipmentVisualActor&&); \
	NO_API AEquipmentVisualActor(const AEquipmentVisualActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEquipmentVisualActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEquipmentVisualActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEquipmentVisualActor) \
	NO_API virtual ~AEquipmentVisualActor();


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_14_PROLOG
#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_SPARSE_DATA \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_RPC_WRAPPERS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_ACCESSORS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_CALLBACK_WRAPPERS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_INCLASS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_SPARSE_DATA \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_ACCESSORS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_CALLBACK_WRAPPERS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EQUIPMENTSYSTEM_API UClass* StaticClass<class AEquipmentVisualActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
