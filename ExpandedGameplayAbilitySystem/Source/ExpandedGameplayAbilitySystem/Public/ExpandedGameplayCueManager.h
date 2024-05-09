// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayCueManager.h"
#include "NativeGameplayTags.h"
#include "ExpandedGameplayCueManager.generated.h"

#define EXASC_DECLARE_NORMAL_GC_TAG(TagName) \
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TagName)

#define EXASC_DECLARE_BATCH_GC_TAG(TagName) \
	EXASC_DECLARE_NORMAL_GC_TAG(TagName) \
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TagName##_Batch)

#define EXASC_DEFINE_NORMAL_GC_TAG(TagName, TagString) \
	UE_DEFINE_GAMEPLAY_TAG(TagName, TagString)

#define EXASC_DEFINE_BATCH_TAG_HANDLE(TagName) \
	FBatchedGameplayCueTagHandle TagName##_BatchTag(TagName, TagName##_Batch);

#define EXASC_DEFINE_BATCH_GC_TAG(TagName, TagString) \
	EXASC_DEFINE_NORMAL_GC_TAG(TagName, TagString) \
	UE_DEFINE_GAMEPLAY_TAG(TagName##_Batch,TagString".Batch") \
	EXASC_DEFINE_BATCH_TAG_HANDLE(TagName)

struct EXPANDEDGAMEPLAYABILITYSYSTEM_API FBatchedGameplayCueTagHandle
{
	FBatchedGameplayCueTagHandle(const FGameplayTag& Tag, const FGameplayTag& BatchTag);
	const FGameplayTag Tag;
	const FGameplayTag BatchTag;
};

/**
 * 
 */
UCLASS()
class EXPANDEDGAMEPLAYABILITYSYSTEM_API UExpandedGameplayCueManager : public UGameplayCueManager
{
	GENERATED_BODY()
public:
	virtual void FlushPendingCues() override;

	static void RegisterBatchedGameplayCueTag(const FGameplayTag& Tag, const FGameplayTag& BatchTag);
	
protected:
	static FGameplayTagContainer BatchedGameplayCueTags;
};

