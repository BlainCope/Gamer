#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RW_LNC_1004_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "RW_LNC_1004_AnimBP_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass RW_LNC_1004_AnimBP.RW_LNC_1004_AnimBP_C
// 0x0160 (0x0490 - 0x0330)
class URW_LNC_1004_AnimBP_C final : public UM1WeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct RW_LNC_1004_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0338(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_33A[0x6];                                      // 0x033A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0340(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0348(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0350(0x0020)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0370(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x03B8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0400(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0448(0x0048)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_RW_LNC_1004_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RW_LNC_1004_AnimBP_C">();
	}
	static class URW_LNC_1004_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URW_LNC_1004_AnimBP_C>();
	}
};
static_assert(alignof(URW_LNC_1004_AnimBP_C) == 0x000010, "Wrong alignment on URW_LNC_1004_AnimBP_C");
static_assert(sizeof(URW_LNC_1004_AnimBP_C) == 0x000490, "Wrong size on URW_LNC_1004_AnimBP_C");
static_assert(offsetof(URW_LNC_1004_AnimBP_C, UberGraphFrame) == 0x000330, "Member 'URW_LNC_1004_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URW_LNC_1004_AnimBP_C, __AnimBlueprintMutables) == 0x000338, "Member 'URW_LNC_1004_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(URW_LNC_1004_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000340, "Member 'URW_LNC_1004_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(URW_LNC_1004_AnimBP_C, AnimBlueprintExtension_Base) == 0x000348, "Member 'URW_LNC_1004_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(URW_LNC_1004_AnimBP_C, AnimGraphNode_Root) == 0x000350, "Member 'URW_LNC_1004_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(URW_LNC_1004_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x000370, "Member 'URW_LNC_1004_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(URW_LNC_1004_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x0003B8, "Member 'URW_LNC_1004_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(URW_LNC_1004_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000400, "Member 'URW_LNC_1004_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(URW_LNC_1004_AnimBP_C, AnimGraphNode_Slot) == 0x000448, "Member 'URW_LNC_1004_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");

}

