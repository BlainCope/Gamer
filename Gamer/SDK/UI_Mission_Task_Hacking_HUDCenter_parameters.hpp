#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_Hacking_HUDCenter

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_Mission_Task_Hacking_HUDCenter.UI_Mission_Task_Hacking_HUDCenter_C.ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter
// 0x0038 (0x0038 - 0x0000)
struct UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInShow;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter) == 0x000008, "Wrong alignment on UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter");
static_assert(sizeof(UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter) == 0x000038, "Wrong size on UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter");
static_assert(offsetof(UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter, EntryPoint) == 0x000000, "Member 'UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter, K2Node_Event_bInShow) == 0x000014, "Member 'UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter::K2Node_Event_bInShow' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter, CallFunc_PlayUIAnimation_ReturnValue) == 0x000020, "Member 'UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter, CallFunc_GetEndTime_ReturnValue) == 0x000028, "Member 'UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'UI_Mission_Task_Hacking_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Hacking_HUDCenter::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function UI_Mission_Task_Hacking_HUDCenter.UI_Mission_Task_Hacking_HUDCenter_C.BP_ShowWidget
// 0x0001 (0x0001 - 0x0000)
struct UI_Mission_Task_Hacking_HUDCenter_C_BP_ShowWidget final
{
public:
	bool                                          bInShow;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Task_Hacking_HUDCenter_C_BP_ShowWidget) == 0x000001, "Wrong alignment on UI_Mission_Task_Hacking_HUDCenter_C_BP_ShowWidget");
static_assert(sizeof(UI_Mission_Task_Hacking_HUDCenter_C_BP_ShowWidget) == 0x000001, "Wrong size on UI_Mission_Task_Hacking_HUDCenter_C_BP_ShowWidget");
static_assert(offsetof(UI_Mission_Task_Hacking_HUDCenter_C_BP_ShowWidget, bInShow) == 0x000000, "Member 'UI_Mission_Task_Hacking_HUDCenter_C_BP_ShowWidget::bInShow' has a wrong offset!");

}

