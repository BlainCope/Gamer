#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Start

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_Mission_Start.UI_Mission_Start_C.SetVisibleMissionText
// 0x0005 (0x0005 - 0x0000)
struct UI_Mission_Start_C_SetVisibleMissionText final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Start_C_SetVisibleMissionText) == 0x000001, "Wrong alignment on UI_Mission_Start_C_SetVisibleMissionText");
static_assert(sizeof(UI_Mission_Start_C_SetVisibleMissionText) == 0x000005, "Wrong size on UI_Mission_Start_C_SetVisibleMissionText");
static_assert(offsetof(UI_Mission_Start_C_SetVisibleMissionText, bVisible) == 0x000000, "Member 'UI_Mission_Start_C_SetVisibleMissionText::bVisible' has a wrong offset!");
static_assert(offsetof(UI_Mission_Start_C_SetVisibleMissionText, Temp_bool_Variable) == 0x000001, "Member 'UI_Mission_Start_C_SetVisibleMissionText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Mission_Start_C_SetVisibleMissionText, Temp_byte_Variable) == 0x000002, "Member 'UI_Mission_Start_C_SetVisibleMissionText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Mission_Start_C_SetVisibleMissionText, Temp_byte_Variable_1) == 0x000003, "Member 'UI_Mission_Start_C_SetVisibleMissionText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Mission_Start_C_SetVisibleMissionText, K2Node_Select_Default) == 0x000004, "Member 'UI_Mission_Start_C_SetVisibleMissionText::K2Node_Select_Default' has a wrong offset!");

// Function UI_Mission_Start.UI_Mission_Start_C.SetVisibilityMissionType
// 0x0001 (0x0001 - 0x0000)
struct UI_Mission_Start_C_SetVisibilityMissionType final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Start_C_SetVisibilityMissionType) == 0x000001, "Wrong alignment on UI_Mission_Start_C_SetVisibilityMissionType");
static_assert(sizeof(UI_Mission_Start_C_SetVisibilityMissionType) == 0x000001, "Wrong size on UI_Mission_Start_C_SetVisibilityMissionType");
static_assert(offsetof(UI_Mission_Start_C_SetVisibilityMissionType, InVisible) == 0x000000, "Member 'UI_Mission_Start_C_SetVisibilityMissionType::InVisible' has a wrong offset!");

// Function UI_Mission_Start.UI_Mission_Start_C.SetMissionText
// 0x0038 (0x0038 - 0x0000)
struct UI_Mission_Start_C_SetMissionText final
{
public:
	class FName                                   MissionName;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MissionType_0;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Start_C_SetMissionText) == 0x000008, "Wrong alignment on UI_Mission_Start_C_SetMissionText");
static_assert(sizeof(UI_Mission_Start_C_SetMissionText) == 0x000038, "Wrong size on UI_Mission_Start_C_SetMissionText");
static_assert(offsetof(UI_Mission_Start_C_SetMissionText, MissionName) == 0x000000, "Member 'UI_Mission_Start_C_SetMissionText::MissionName' has a wrong offset!");
static_assert(offsetof(UI_Mission_Start_C_SetMissionText, MissionType_0) == 0x000008, "Member 'UI_Mission_Start_C_SetMissionText::MissionType_0' has a wrong offset!");
static_assert(offsetof(UI_Mission_Start_C_SetMissionText, CallFunc_NotEqual_NameName_ReturnValue) == 0x000010, "Member 'UI_Mission_Start_C_SetMissionText::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_Start_C_SetMissionText, CallFunc_Conv_NameToString_ReturnValue) == 0x000018, "Member 'UI_Mission_Start_C_SetMissionText::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Mission_Start_C_SetMissionText, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000028, "Member 'UI_Mission_Start_C_SetMissionText::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");

// Function UI_Mission_Start.UI_Mission_Start_C.PlayAnimOpenClose
// 0x0008 (0x0008 - 0x0000)
struct UI_Mission_Start_C_PlayAnimOpenClose final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Start_C_PlayAnimOpenClose) == 0x000008, "Wrong alignment on UI_Mission_Start_C_PlayAnimOpenClose");
static_assert(sizeof(UI_Mission_Start_C_PlayAnimOpenClose) == 0x000008, "Wrong size on UI_Mission_Start_C_PlayAnimOpenClose");
static_assert(offsetof(UI_Mission_Start_C_PlayAnimOpenClose, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UI_Mission_Start_C_PlayAnimOpenClose::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UI_Mission_Start.UI_Mission_Start_C.ExecuteUbergraph_UI_Mission_Start
// 0x0004 (0x0004 - 0x0000)
struct UI_Mission_Start_C_ExecuteUbergraph_UI_Mission_Start final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Start_C_ExecuteUbergraph_UI_Mission_Start) == 0x000004, "Wrong alignment on UI_Mission_Start_C_ExecuteUbergraph_UI_Mission_Start");
static_assert(sizeof(UI_Mission_Start_C_ExecuteUbergraph_UI_Mission_Start) == 0x000004, "Wrong size on UI_Mission_Start_C_ExecuteUbergraph_UI_Mission_Start");
static_assert(offsetof(UI_Mission_Start_C_ExecuteUbergraph_UI_Mission_Start, EntryPoint) == 0x000000, "Member 'UI_Mission_Start_C_ExecuteUbergraph_UI_Mission_Start::EntryPoint' has a wrong offset!");

// Function UI_Mission_Start.UI_Mission_Start_C.GetEndAnimation
// 0x0008 (0x0008 - 0x0000)
struct UI_Mission_Start_C_GetEndAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Mission_Start_C_GetEndAnimation) == 0x000008, "Wrong alignment on UI_Mission_Start_C_GetEndAnimation");
static_assert(sizeof(UI_Mission_Start_C_GetEndAnimation) == 0x000008, "Wrong size on UI_Mission_Start_C_GetEndAnimation");
static_assert(offsetof(UI_Mission_Start_C_GetEndAnimation, ReturnValue) == 0x000000, "Member 'UI_Mission_Start_C_GetEndAnimation::ReturnValue' has a wrong offset!");

}

