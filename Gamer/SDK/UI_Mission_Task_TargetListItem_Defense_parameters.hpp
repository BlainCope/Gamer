#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_TargetListItem_Defense

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Mission_Task_TargetListItem_Defense.UI_Mission_Task_TargetListItem_Defense_C.PlayHitAnimation
// 0x0008 (0x0008 - 0x0000)
struct UI_Mission_Task_TargetListItem_Defense_C_PlayHitAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Task_TargetListItem_Defense_C_PlayHitAnimation) == 0x000008, "Wrong alignment on UI_Mission_Task_TargetListItem_Defense_C_PlayHitAnimation");
static_assert(sizeof(UI_Mission_Task_TargetListItem_Defense_C_PlayHitAnimation) == 0x000008, "Wrong size on UI_Mission_Task_TargetListItem_Defense_C_PlayHitAnimation");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_PlayHitAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UI_Mission_Task_TargetListItem_Defense_C_PlayHitAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UI_Mission_Task_TargetListItem_Defense.UI_Mission_Task_TargetListItem_Defense_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct UI_Mission_Task_TargetListItem_Defense_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Task_TargetListItem_Defense_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on UI_Mission_Task_TargetListItem_Defense_C_OnListItemObjectSet");
static_assert(sizeof(UI_Mission_Task_TargetListItem_Defense_C_OnListItemObjectSet) == 0x000008, "Wrong size on UI_Mission_Task_TargetListItem_Defense_C_OnListItemObjectSet");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'UI_Mission_Task_TargetListItem_Defense_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function UI_Mission_Task_TargetListItem_Defense.UI_Mission_Task_TargetListItem_Defense_C.ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense
// 0x0078 (0x0078 - 0x0000)
struct UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Progress_C*                         K2Node_DynamicCast_AsUI_Progress;                  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Progress_C*                         K2Node_DynamicCast_AsUI_Progress_1;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_HP_LastValue_ImplicitCast;      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_Shield_LastValue_ImplicitCast;  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast_1;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense) == 0x000008, "Wrong alignment on UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense");
static_assert(sizeof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense) == 0x000078, "Wrong size on UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, EntryPoint) == 0x000000, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, K2Node_DynamicCast_AsUI_Progress) == 0x000018, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::K2Node_DynamicCast_AsUI_Progress' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, K2Node_DynamicCast_AsUI_Progress_1) == 0x000028, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::K2Node_DynamicCast_AsUI_Progress_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, K2Node_Event_ListItemObject) == 0x000038, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000040, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000041, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, K2Node_CreateDelegate_OutputDelegate_1) == 0x000044, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, K2Node_VariableSet_HP_LastValue_ImplicitCast) == 0x000058, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::K2Node_VariableSet_HP_LastValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000060, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, K2Node_VariableSet_Shield_LastValue_ImplicitCast) == 0x000068, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::K2Node_VariableSet_Shield_LastValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense, CallFunc_Less_DoubleDouble_A_ImplicitCast_1) == 0x000070, "Member 'UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense::CallFunc_Less_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

}

