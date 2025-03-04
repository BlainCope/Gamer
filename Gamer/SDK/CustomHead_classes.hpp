#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomHead

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass CustomHead.CustomHead_C
// 0x0210 (0x0580 - 0x0370)
class UCustomHead_C : public UM1HeadAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x03A8(0x01D8)(ContainsInstancedReference)

public:
	void ExecuteUbergraph_CustomHead(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CustomHead_C">();
	}
	static class UCustomHead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomHead_C>();
	}
};
static_assert(alignof(UCustomHead_C) == 0x000010, "Wrong alignment on UCustomHead_C");
static_assert(sizeof(UCustomHead_C) == 0x000580, "Wrong size on UCustomHead_C");
static_assert(offsetof(UCustomHead_C, UberGraphFrame) == 0x000370, "Member 'UCustomHead_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCustomHead_C, AnimBlueprintExtension_PropertyAccess) == 0x000378, "Member 'UCustomHead_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UCustomHead_C, AnimBlueprintExtension_Base) == 0x000380, "Member 'UCustomHead_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UCustomHead_C, AnimGraphNode_Root) == 0x000388, "Member 'UCustomHead_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UCustomHead_C, AnimGraphNode_CopyPoseFromMesh) == 0x0003A8, "Member 'UCustomHead_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");

}

