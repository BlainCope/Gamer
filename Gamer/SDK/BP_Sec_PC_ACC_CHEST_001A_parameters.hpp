#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sec_PC_ACC_CHEST_001A

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Sec_PC_ACC_CHEST_001A.BP_Sec_PC_ACC_CHEST_001A_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct BP_Sec_PC_ACC_CHEST_001A_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AnimGraph_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(BP_Sec_PC_ACC_CHEST_001A_C_AnimGraph) == 0x000008, "Wrong alignment on BP_Sec_PC_ACC_CHEST_001A_C_AnimGraph");
static_assert(sizeof(BP_Sec_PC_ACC_CHEST_001A_C_AnimGraph) == 0x000020, "Wrong size on BP_Sec_PC_ACC_CHEST_001A_C_AnimGraph");
static_assert(offsetof(BP_Sec_PC_ACC_CHEST_001A_C_AnimGraph, InPose) == 0x000000, "Member 'BP_Sec_PC_ACC_CHEST_001A_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(BP_Sec_PC_ACC_CHEST_001A_C_AnimGraph, AnimGraph_0) == 0x000010, "Member 'BP_Sec_PC_ACC_CHEST_001A_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function BP_Sec_PC_ACC_CHEST_001A.BP_Sec_PC_ACC_CHEST_001A_C.ExecuteUbergraph_BP_Sec_PC_ACC_CHEST_001A
// 0x0004 (0x0004 - 0x0000)
struct BP_Sec_PC_ACC_CHEST_001A_C_ExecuteUbergraph_BP_Sec_PC_ACC_CHEST_001A final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Sec_PC_ACC_CHEST_001A_C_ExecuteUbergraph_BP_Sec_PC_ACC_CHEST_001A) == 0x000004, "Wrong alignment on BP_Sec_PC_ACC_CHEST_001A_C_ExecuteUbergraph_BP_Sec_PC_ACC_CHEST_001A");
static_assert(sizeof(BP_Sec_PC_ACC_CHEST_001A_C_ExecuteUbergraph_BP_Sec_PC_ACC_CHEST_001A) == 0x000004, "Wrong size on BP_Sec_PC_ACC_CHEST_001A_C_ExecuteUbergraph_BP_Sec_PC_ACC_CHEST_001A");
static_assert(offsetof(BP_Sec_PC_ACC_CHEST_001A_C_ExecuteUbergraph_BP_Sec_PC_ACC_CHEST_001A, EntryPoint) == 0x000000, "Member 'BP_Sec_PC_ACC_CHEST_001A_C_ExecuteUbergraph_BP_Sec_PC_ACC_CHEST_001A::EntryPoint' has a wrong offset!");

}

