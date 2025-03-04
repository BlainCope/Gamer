#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_014_Specification_BP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M_014_Specification_BP_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass M_014_Specification_BP.M_014_Specification_BP_C
// 0x08A0 (0x0C10 - 0x0370)
class UM_014_Specification_BP_C final : public UM1BaseAnimInstance
{
public:
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct M_014_Specification_BP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0378(0x0008)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0380(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0388(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0390(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x03B0(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0478(0x0080)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x04F8(0x0108)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0600(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0648(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0670(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0690(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x06B0(0x0028)()
	uint8                                         Pad_6D8[0x8];                                      // 0x06D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_Fabrik                       AnimGraphNode_Fabrik;                              // 0x06E0(0x0190)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0870(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0938(0x0048)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0980(0x0108)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x0A88(0x0118)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0BA0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0BC0(0x0048)()
	float                                         AOPitch;                                           // 0x0C08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bYujinActive01Ready;                               // 0x0C0C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_M_014_Specification_BP(int32 EntryPoint);
	void SpecificationLayer(const struct FPoseLink& InPose, struct FPoseLink* SpecificationLayer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M_014_Specification_BP_C">();
	}
	static class UM_014_Specification_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM_014_Specification_BP_C>();
	}
};
static_assert(alignof(UM_014_Specification_BP_C) == 0x000010, "Wrong alignment on UM_014_Specification_BP_C");
static_assert(sizeof(UM_014_Specification_BP_C) == 0x000C10, "Wrong size on UM_014_Specification_BP_C");
static_assert(offsetof(UM_014_Specification_BP_C, UberGraphFrame) == 0x000370, "Member 'UM_014_Specification_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, __AnimBlueprintMutables) == 0x000378, "Member 'UM_014_Specification_BP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimBlueprintExtension_PropertyAccess) == 0x000380, "Member 'UM_014_Specification_BP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimBlueprintExtension_Base) == 0x000388, "Member 'UM_014_Specification_BP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_Root_1) == 0x000390, "Member 'UM_014_Specification_BP_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_LinkedInputPose) == 0x0003B0, "Member 'UM_014_Specification_BP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_SaveCachedPose) == 0x000478, "Member 'UM_014_Specification_BP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_ModifyBone_1) == 0x0004F8, "Member 'UM_014_Specification_BP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_BlendListByBool) == 0x000600, "Member 'UM_014_Specification_BP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_UseCachedPose_1) == 0x000648, "Member 'UM_014_Specification_BP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_LocalToComponentSpace) == 0x000670, "Member 'UM_014_Specification_BP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000690, "Member 'UM_014_Specification_BP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_UseCachedPose) == 0x0006B0, "Member 'UM_014_Specification_BP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_Fabrik) == 0x0006E0, "Member 'UM_014_Specification_BP_C::AnimGraphNode_Fabrik' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_ApplyAdditive) == 0x000870, "Member 'UM_014_Specification_BP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_SequencePlayer_1) == 0x000938, "Member 'UM_014_Specification_BP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_ModifyBone) == 0x000980, "Member 'UM_014_Specification_BP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x000A88, "Member 'UM_014_Specification_BP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_Root) == 0x000BA0, "Member 'UM_014_Specification_BP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AnimGraphNode_SequencePlayer) == 0x000BC0, "Member 'UM_014_Specification_BP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, AOPitch) == 0x000C08, "Member 'UM_014_Specification_BP_C::AOPitch' has a wrong offset!");
static_assert(offsetof(UM_014_Specification_BP_C, bYujinActive01Ready) == 0x000C0C, "Member 'UM_014_Specification_BP_C::bYujinActive01Ready' has a wrong offset!");

}

