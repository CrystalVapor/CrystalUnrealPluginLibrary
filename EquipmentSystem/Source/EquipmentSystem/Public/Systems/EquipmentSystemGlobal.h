// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Utils/EquipmentSystemTypes.h"
#include "EquipmentSystemGlobal.generated.h"

class UEquipmentAbilitySet;
class UEquipmentGameplayAbility;
class UAttributeSet;
class UEquipmentVisualActorManager;
struct FEquipmentPropertyModifier;

/**
 * 
 */
UCLASS(Config="Game")
class EQUIPMENTSYSTEM_API UEquipmentSystemGlobal: public UObject
{
	friend class UEquipmentVisualActorManager;
	friend class UEquipmentFeatureManager;
	GENERATED_BODY()
public:
	static UEquipmentSystemGlobal* Get();
	static FGameplayTag GetPropertyTag(const FName& PropertyName);
	static FName GetPropertyName(const FGameplayTag& PropertyTag);
	static FName GetPropertyFeatureName(const FGameplayTag& PropertyTag);

	static const FEquipmentPropertyModifier* GetPropertyModifier(const FName& FeatureName, const FName& ModifierName);
	static const FEquipmentPropertyModifier* GetPropertyModifier(const FEquipmentPropertyModifierHandle& ModifierHandle);

	static bool RegisterPropertyToManager(const FEquipmentPropertyTagContainer& PropertyTag);
	static void RegisterAbilityRequirement(const FName& FeatureClassName, const TSubclassOf<UEquipmentGameplayAbility>& AbilityClass);
	static void RegisterAttributeSetRequirement(const FName& FeatureClassName,
	                                            const TSubclassOf<UAttributeSet>& AttributeSetClass);
	
	static bool ValidateFeatureAbilityRequirements(const FName& FeatureName, const TArray<UEquipmentAbilitySet*>& AbilitySets, TArray<FText>& OutMessages);

	virtual void Init();
		
	virtual UClass* GetVisualActor(const FName& VisualActorName, const FEquipmentVisualActorSpecifier& VisualActorSpecifier);
	virtual UEquipmentVisualActorManager* GetEquipmentVisualActorManager();
	virtual UEquipmentFeatureManager* GetEquipmentFeatureManager();
	
protected:
	static TMap<FGameplayTag, FEquipmentPropertyTagContainer>& GetPropertyTagMap();
	
	//static TMap<FGameplayTag, FEquipmentPropertyTagContainer> PropertyTagMap;
	static TMap<FName, FEquipmentPropertyTagContainer> PropertyNameMap;
#ifdef WITH_EDITORONLY_DATA
	static TMap<FName, FEquipmentAbilitySetRequirement> FeatureAbilityRequirements;
#endif

	UPROPERTY(Config)
	FSoftClassPath EquipmentAssetManagerClass;
	UPROPERTY(Config)
	FSoftClassPath EquipmentFeatureManagerClass;
	UPROPERTY()
	UEquipmentVisualActorManager* EquipmentVisualActorManager = nullptr;
	UPROPERTY()
	UEquipmentFeatureManager* EquipmentFeatureManager = nullptr;
	UPROPERTY(Config)
	TArray<FString> VisualActorPaths;
	UPROPERTY(Config)
	TArray<FString> FeaturePaths;
};
