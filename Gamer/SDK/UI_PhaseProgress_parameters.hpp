#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PhaseProgress

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_PhaseProgress.UI_PhaseProgress_C.UI_PhaseProgress_UpdateProgress
// 0x0008 (0x0008 - 0x0000)
struct UI_PhaseProgress_C_UI_PhaseProgress_UpdateProgress final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PhaseProgress_C_UI_PhaseProgress_UpdateProgress) == 0x000008, "Wrong alignment on UI_PhaseProgress_C_UI_PhaseProgress_UpdateProgress");
static_assert(sizeof(UI_PhaseProgress_C_UI_PhaseProgress_UpdateProgress) == 0x000008, "Wrong size on UI_PhaseProgress_C_UI_PhaseProgress_UpdateProgress");
static_assert(offsetof(UI_PhaseProgress_C_UI_PhaseProgress_UpdateProgress, CallFunc_PlayUIAnimation_ReturnValue) == 0x000000, "Member 'UI_PhaseProgress_C_UI_PhaseProgress_UpdateProgress::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");

// Function UI_PhaseProgress.UI_PhaseProgress_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_PhaseProgress_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PhaseProgress_C_PreConstruct) == 0x000001, "Wrong alignment on UI_PhaseProgress_C_PreConstruct");
static_assert(sizeof(UI_PhaseProgress_C_PreConstruct) == 0x000001, "Wrong size on UI_PhaseProgress_C_PreConstruct");
static_assert(offsetof(UI_PhaseProgress_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_PhaseProgress_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_PhaseProgress.UI_PhaseProgress_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_PhaseProgress_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PhaseProgress_C_OnEventWidgetOpen) == 0x000001, "Wrong alignment on UI_PhaseProgress_C_OnEventWidgetOpen");
static_assert(sizeof(UI_PhaseProgress_C_OnEventWidgetOpen) == 0x000001, "Wrong size on UI_PhaseProgress_C_OnEventWidgetOpen");
static_assert(offsetof(UI_PhaseProgress_C_OnEventWidgetOpen, InDirection) == 0x000000, "Member 'UI_PhaseProgress_C_OnEventWidgetOpen::InDirection' has a wrong offset!");

// Function UI_PhaseProgress.UI_PhaseProgress_C.OnEventWidgetClose
// 0x0001 (0x0001 - 0x0000)
struct UI_PhaseProgress_C_OnEventWidgetClose final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PhaseProgress_C_OnEventWidgetClose) == 0x000001, "Wrong alignment on UI_PhaseProgress_C_OnEventWidgetClose");
static_assert(sizeof(UI_PhaseProgress_C_OnEventWidgetClose) == 0x000001, "Wrong size on UI_PhaseProgress_C_OnEventWidgetClose");
static_assert(offsetof(UI_PhaseProgress_C_OnEventWidgetClose, InDirection) == 0x000000, "Member 'UI_PhaseProgress_C_OnEventWidgetClose::InDirection' has a wrong offset!");

// Function UI_PhaseProgress.UI_PhaseProgress_C.ExecuteUbergraph_UI_PhaseProgress
// 0x02C0 (0x02C0 - 0x0000)
struct UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FProgressBarStyle                      K2Node_Event_InStyle;                              // 0x0010(0x0260)(ConstParm)
	bool                                          K2Node_Event_InEnd;                                // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_271[0x3];                                      // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0274(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InInfoIndex;                          // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1PhaseInfo                           CallFunc_Array_Get_Item;                           // 0x0290(0x0010)(NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Progress_C*                         K2Node_DynamicCast_AsUI_Progress;                  // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection_1;                        // 0x02B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x02B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress) == 0x000010, "Wrong alignment on UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress");
static_assert(sizeof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress) == 0x0002C0, "Wrong size on UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress");
static_assert(offsetof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress, EntryPoint) == 0x000000, "Member 'UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress, K2Node_Event_InStyle) == 0x000010, "Member 'UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress::K2Node_Event_InStyle' has a wrong offset!");
static_assert(offsetof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress, K2Node_Event_InEnd) == 0x000270, "Member 'UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress::K2Node_Event_InEnd' has a wrong offset!");
static_assert(offsetof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress, K2Node_CreateDelegate_OutputDelegate) == 0x000274, "Member 'UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress, K2Node_Event_InInfoIndex) == 0x000284, "Member 'UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress::K2Node_Event_InInfoIndex' has a wrong offset!");
static_assert(offsetof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress, CallFunc_Add_IntInt_ReturnValue) == 0x000288, "Member 'UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress, CallFunc_Array_Get_Item) == 0x000290, "Member 'UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0002A0, "Member 'UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress, K2Node_DynamicCast_AsUI_Progress) == 0x0002A8, "Member 'UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress::K2Node_DynamicCast_AsUI_Progress' has a wrong offset!");
static_assert(offsetof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress, K2Node_DynamicCast_bSuccess) == 0x0002B0, "Member 'UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress, K2Node_Event_IsDesignTime) == 0x0002B1, "Member 'UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress, K2Node_Event_InDirection_1) == 0x0002B2, "Member 'UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress::K2Node_Event_InDirection_1' has a wrong offset!");
static_assert(offsetof(UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress, K2Node_Event_InDirection) == 0x0002B3, "Member 'UI_PhaseProgress_C_ExecuteUbergraph_UI_PhaseProgress::K2Node_Event_InDirection' has a wrong offset!");

// Function UI_PhaseProgress.UI_PhaseProgress_C.BP_SetProgressStyleOnEdge
// 0x0270 (0x0270 - 0x0000)
struct UI_PhaseProgress_C_BP_SetProgressStyleOnEdge final
{
public:
	struct FProgressBarStyle                      InStyle;                                           // 0x0000(0x0260)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          InEnd;                                             // 0x0260(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PhaseProgress_C_BP_SetProgressStyleOnEdge) == 0x000010, "Wrong alignment on UI_PhaseProgress_C_BP_SetProgressStyleOnEdge");
static_assert(sizeof(UI_PhaseProgress_C_BP_SetProgressStyleOnEdge) == 0x000270, "Wrong size on UI_PhaseProgress_C_BP_SetProgressStyleOnEdge");
static_assert(offsetof(UI_PhaseProgress_C_BP_SetProgressStyleOnEdge, InStyle) == 0x000000, "Member 'UI_PhaseProgress_C_BP_SetProgressStyleOnEdge::InStyle' has a wrong offset!");
static_assert(offsetof(UI_PhaseProgress_C_BP_SetProgressStyleOnEdge, InEnd) == 0x000260, "Member 'UI_PhaseProgress_C_BP_SetProgressStyleOnEdge::InEnd' has a wrong offset!");

// Function UI_PhaseProgress.UI_PhaseProgress_C.BP_PlayPhaseAnimation
// 0x0004 (0x0004 - 0x0000)
struct UI_PhaseProgress_C_BP_PlayPhaseAnimation final
{
public:
	int32                                         InInfoIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PhaseProgress_C_BP_PlayPhaseAnimation) == 0x000004, "Wrong alignment on UI_PhaseProgress_C_BP_PlayPhaseAnimation");
static_assert(sizeof(UI_PhaseProgress_C_BP_PlayPhaseAnimation) == 0x000004, "Wrong size on UI_PhaseProgress_C_BP_PlayPhaseAnimation");
static_assert(offsetof(UI_PhaseProgress_C_BP_PlayPhaseAnimation, InInfoIndex) == 0x000000, "Member 'UI_PhaseProgress_C_BP_PlayPhaseAnimation::InInfoIndex' has a wrong offset!");

}

