#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_033_Workbench

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AnimBP_NPC_033_Workbench.AnimBP_NPC_033_Workbench_C.ExecuteUbergraph_AnimBP_NPC_033_Workbench
// 0x0020 (0x0020 - 0x0000)
struct AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench) == 0x000008, "Wrong alignment on AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench");
static_assert(sizeof(AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench) == 0x000020, "Wrong size on AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench");
static_assert(offsetof(AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench, EntryPoint) == 0x000000, "Member 'AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench::EntryPoint' has a wrong offset!");
static_assert(offsetof(AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue) == 0x000004, "Member 'AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1) == 0x000008, "Member 'AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00000C, "Member 'AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x00000D, "Member 'AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000010, "Member 'AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1) == 0x000018, "Member 'AnimBP_NPC_033_Workbench_C_ExecuteUbergraph_AnimBP_NPC_033_Workbench::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

// Function AnimBP_NPC_033_Workbench.AnimBP_NPC_033_Workbench_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AnimBP_NPC_033_Workbench_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AnimBP_NPC_033_Workbench_C_AnimGraph) == 0x000008, "Wrong alignment on AnimBP_NPC_033_Workbench_C_AnimGraph");
static_assert(sizeof(AnimBP_NPC_033_Workbench_C_AnimGraph) == 0x000010, "Wrong size on AnimBP_NPC_033_Workbench_C_AnimGraph");
static_assert(offsetof(AnimBP_NPC_033_Workbench_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'AnimBP_NPC_033_Workbench_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

