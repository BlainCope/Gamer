#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Matching_TextItem

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function UI_Matching_TextItem.UI_Matching_TextItem_C.ShowMatchingWidget
// 0x0018 (0x0018 - 0x0000)
struct UI_Matching_TextItem_C_ShowMatchingWidget final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue_1;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Matching_TextItem_C_ShowMatchingWidget) == 0x000008, "Wrong alignment on UI_Matching_TextItem_C_ShowMatchingWidget");
static_assert(sizeof(UI_Matching_TextItem_C_ShowMatchingWidget) == 0x000018, "Wrong size on UI_Matching_TextItem_C_ShowMatchingWidget");
static_assert(offsetof(UI_Matching_TextItem_C_ShowMatchingWidget, bShow) == 0x000000, "Member 'UI_Matching_TextItem_C_ShowMatchingWidget::bShow' has a wrong offset!");
static_assert(offsetof(UI_Matching_TextItem_C_ShowMatchingWidget, CallFunc_PlayUIAnimation_ReturnValue) == 0x000008, "Member 'UI_Matching_TextItem_C_ShowMatchingWidget::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Matching_TextItem_C_ShowMatchingWidget, CallFunc_PlayUIAnimation_ReturnValue_1) == 0x000010, "Member 'UI_Matching_TextItem_C_ShowMatchingWidget::CallFunc_PlayUIAnimation_ReturnValue_1' has a wrong offset!");

// Function UI_Matching_TextItem.UI_Matching_TextItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Matching_TextItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Matching_TextItem_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Matching_TextItem_C_PreConstruct");
static_assert(sizeof(UI_Matching_TextItem_C_PreConstruct) == 0x000001, "Wrong size on UI_Matching_TextItem_C_PreConstruct");
static_assert(offsetof(UI_Matching_TextItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Matching_TextItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_Matching_TextItem.UI_Matching_TextItem_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_Matching_TextItem_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Matching_TextItem_C_OnEventWidgetOpen) == 0x000001, "Wrong alignment on UI_Matching_TextItem_C_OnEventWidgetOpen");
static_assert(sizeof(UI_Matching_TextItem_C_OnEventWidgetOpen) == 0x000001, "Wrong size on UI_Matching_TextItem_C_OnEventWidgetOpen");
static_assert(offsetof(UI_Matching_TextItem_C_OnEventWidgetOpen, InDirection) == 0x000000, "Member 'UI_Matching_TextItem_C_OnEventWidgetOpen::InDirection' has a wrong offset!");

// Function UI_Matching_TextItem.UI_Matching_TextItem_C.ExecuteUbergraph_UI_Matching_TextItem
// 0x0020 (0x0020 - 0x0000)
struct UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue_1;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bShow;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem) == 0x000008, "Wrong alignment on UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem");
static_assert(sizeof(UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem) == 0x000020, "Wrong size on UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem");
static_assert(offsetof(UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem, EntryPoint) == 0x000000, "Member 'UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem, CallFunc_PlayUIAnimation_ReturnValue) == 0x000008, "Member 'UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem, CallFunc_PlayUIAnimation_ReturnValue_1) == 0x000010, "Member 'UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem::CallFunc_PlayUIAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem, K2Node_Event_IsDesignTime) == 0x000018, "Member 'UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem, K2Node_Event_bShow) == 0x000019, "Member 'UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem::K2Node_Event_bShow' has a wrong offset!");
static_assert(offsetof(UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem, K2Node_Event_InDirection) == 0x00001A, "Member 'UI_Matching_TextItem_C_ExecuteUbergraph_UI_Matching_TextItem::K2Node_Event_InDirection' has a wrong offset!");

// Function UI_Matching_TextItem.UI_Matching_TextItem_C.BP_SetVisibility
// 0x0001 (0x0001 - 0x0000)
struct UI_Matching_TextItem_C_BP_SetVisibility final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Matching_TextItem_C_BP_SetVisibility) == 0x000001, "Wrong alignment on UI_Matching_TextItem_C_BP_SetVisibility");
static_assert(sizeof(UI_Matching_TextItem_C_BP_SetVisibility) == 0x000001, "Wrong size on UI_Matching_TextItem_C_BP_SetVisibility");
static_assert(offsetof(UI_Matching_TextItem_C_BP_SetVisibility, bShow) == 0x000000, "Member 'UI_Matching_TextItem_C_BP_SetVisibility::bShow' has a wrong offset!");

}

