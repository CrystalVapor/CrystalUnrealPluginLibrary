// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "EquipmentSystemTypes.h"
#include "EquipmentVisualActorManager.h"
#include "EquipmentSystemGlobal.generated.h"

class UEquipmentVisualActorManager;
struct FEquipmentPropertyModifier;
/**
 * 
 */
UCLASS(Config="Game")
class EQUIPMENTSYSTEM_API UEquipmentSystemGlobal: public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	FORCEINLINE static FGameplayTag GetPropertyTag(FName PropertyName);
	FORCEINLINE static FName GetPropertyName(FGameplayTag PropertyTag);
	FORCEINLINE static FName GetPropertyFeatureName(FGameplayTag PropertyTag);
	static bool RegisterPropertyToManager(FEquipmentPropertyTagContainer& PropertyTag);
	static FName& SetCurrentFeatureName(FName NewFeatureName);

	static const FEquipmentPropertyModifier* GetPropertyModifier(FName FeatureName, FName ModifierName);
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	void CollectAllFeatures();
	UEquipmentVisualActorManager* GetVisualActorManager() const {return VisualActorManager;}
	
	static FName CurrentFeatureName;
protected:
	static TMap<FGameplayTag, FEquipmentPropertyTagContainer> PropertyTagMap;
	static TMap<FName, FEquipmentPropertyTagContainer> PropertyNameMap;
	static TMap<FName, UClass*> RegisteredFeatures;

	UPROPERTY(Config)
	FSoftObjectPath VisualActorManagerClass;
	UPROPERTY()
	UEquipmentVisualActorManager* VisualActorManager = nullptr;
};
