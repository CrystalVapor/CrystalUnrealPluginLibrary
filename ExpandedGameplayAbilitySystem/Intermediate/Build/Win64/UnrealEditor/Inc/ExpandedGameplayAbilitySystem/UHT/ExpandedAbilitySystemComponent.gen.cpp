// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExpandedGameplayAbilitySystem/Public/ExpandedAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandedAbilitySystemComponent() {}
// Cross Module References
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilitySystemComponent();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	UPackage* Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem();
// End Cross Module References
	void UExpandedAbilitySystemComponent::StaticRegisterNativesUExpandedAbilitySystemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpandedAbilitySystemComponent);
	UClass* Z_Construct_UClass_UExpandedAbilitySystemComponent_NoRegister()
	{
		return UExpandedAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "ExpandedAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpandedAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::ClassParams = {
		&UExpandedAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExpandedAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UExpandedAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpandedAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExpandedAbilitySystemComponent.OuterSingleton;
	}
	template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UExpandedAbilitySystemComponent>()
	{
		return UExpandedAbilitySystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandedAbilitySystemComponent);
	UExpandedAbilitySystemComponent::~UExpandedAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExpandedAbilitySystemComponent, UExpandedAbilitySystemComponent::StaticClass, TEXT("UExpandedAbilitySystemComponent"), &Z_Registration_Info_UClass_UExpandedAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpandedAbilitySystemComponent), 855608090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_768864814(TEXT("/Script/ExpandedGameplayAbilitySystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
