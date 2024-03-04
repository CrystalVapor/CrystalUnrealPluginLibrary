// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentFragment.h"
#include "EquipmentFragment_ModifierBase.generated.h"

USTRUCT()
struct FEquipmentFragmentPropertyModifierFloat
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEquipmentFragment> TargetFragment;
	UPROPERTY(EditDefaultsOnly, meta = (Categories = "Equipment.Property"))
	FGameplayTag PropertyTag;
	// FinalValue = (Value * (1 + PercentsToAdd / 100)) + ValueToAdd
	UPROPERTY(EditDefaultsOnly)
	float ValueToAdd = 0.0f;
	// FinalValue = (Value * (1 + PercentsToAdd / 100)) + ValueToAdd
	UPROPERTY(EditDefaultsOnly, meta = (Units = "Percent"))
	float PercentsToAdd = 0.0f;

	FFragmentRegisteredModifier MakeModifier()
	{
		FFragmentRegisteredModifier Modifier;
		Modifier.PropertyTag = PropertyTag;
		Modifier.Adder = ValueToAdd;
		Modifier.Multiplier = 1 + PercentsToAdd/100.f;
		return Modifier;
	}
};

USTRUCT()
struct FEquipmentFragmentPropertyModifierTagContainer
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEquipmentFragment> TargetFragment;
	UPROPERTY(EditDefaultsOnly, meta = (Categories = "Equipment.Property"))
	FGameplayTag PropertyTag;
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer AddTags;
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer RemoveTags;

	FFragmentRegisteredModifier MakeModifier()
	{
		FFragmentRegisteredModifier Modifier;
		Modifier.PropertyTag = PropertyTag;
		Modifier.AddTags = AddTags;
		Modifier.RemoveTags = RemoveTags;
		return Modifier;
	}
};

USTRUCT()
struct FEquipmentFragmentPropertyModifierCurve
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEquipmentFragment> TargetFragment;
	UPROPERTY(EditDefaultsOnly, meta = (Categories = "Equipment.Property"))
	FGameplayTag PropertyTag;
	// FinalValue = Curve in this struct, when multiple modified, bigger priority value will be used
	UPROPERTY(EditDefaultsOnly)
	FRuntimeFloatCurve Curve;
	UPROPERTY(EditDefaultsOnly)
	int32 Priority = 0;

	FFragmentRegisteredModifier MakeModifier()
	{
		FFragmentRegisteredModifier Modifier;
		Modifier.PropertyTag = PropertyTag;
		Modifier.Curve = &Curve;
		Modifier.CurvePriority = Priority;
		return Modifier;
	}
};

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentFragment_ModifierBase : public UEquipmentFragment
{
	GENERATED_BODY()
	virtual void HandleChildOutsideInitialize(AEquipmentInstance* Instance) override;

	UPROPERTY(EditDefaultsOnly, DisplayName = "Float Modifiers", meta = (TitleProperty = "{PropertyTag} | {ValueToAdd} | {PercentsToAdd}% "))
	TArray<FEquipmentFragmentPropertyModifierFloat> FloatModifiers;

	UPROPERTY(EditDefaultsOnly, DisplayName = "Tag Conatiner Modifiers")
	TArray<FEquipmentFragmentPropertyModifierTagContainer> TagContainerModifiers;

	UPROPERTY(EditDefaultsOnly, DisplayName = "Curve Modifiers")
	TArray<FEquipmentFragmentPropertyModifierCurve> CurveModifiers;
};
