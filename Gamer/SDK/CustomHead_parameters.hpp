#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomHead

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CustomHead.CustomHead_C.ExecuteUbergraph_CustomHead
// 0x0004 (0x0004 - 0x0000)
struct CustomHead_C_ExecuteUbergraph_CustomHead final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomHead_C_ExecuteUbergraph_CustomHead) == 0x000004, "Wrong alignment on CustomHead_C_ExecuteUbergraph_CustomHead");
static_assert(sizeof(CustomHead_C_ExecuteUbergraph_CustomHead) == 0x000004, "Wrong size on CustomHead_C_ExecuteUbergraph_CustomHead");
static_assert(offsetof(CustomHead_C_ExecuteUbergraph_CustomHead, EntryPoint) == 0x000000, "Member 'CustomHead_C_ExecuteUbergraph_CustomHead::EntryPoint' has a wrong offset!");

// Function CustomHead.CustomHead_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct CustomHead_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(CustomHead_C_AnimGraph) == 0x000008, "Wrong alignment on CustomHead_C_AnimGraph");
static_assert(sizeof(CustomHead_C_AnimGraph) == 0x000010, "Wrong size on CustomHead_C_AnimGraph");
static_assert(offsetof(CustomHead_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'CustomHead_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

