#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChattingItem

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_ChattingItem.UI_ChattingItem_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_ChattingItem_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChattingItem_C_SetDataImpl) == 0x000008, "Wrong alignment on UI_ChattingItem_C_SetDataImpl");
static_assert(sizeof(UI_ChattingItem_C_SetDataImpl) == 0x000008, "Wrong size on UI_ChattingItem_C_SetDataImpl");
static_assert(offsetof(UI_ChattingItem_C_SetDataImpl, InData) == 0x000000, "Member 'UI_ChattingItem_C_SetDataImpl::InData' has a wrong offset!");

// Function UI_ChattingItem.UI_ChattingItem_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct UI_ChattingItem_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChattingItem_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on UI_ChattingItem_C_OnListItemObjectSet");
static_assert(sizeof(UI_ChattingItem_C_OnListItemObjectSet) == 0x000008, "Wrong size on UI_ChattingItem_C_OnListItemObjectSet");
static_assert(offsetof(UI_ChattingItem_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'UI_ChattingItem_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function UI_ChattingItem.UI_ChattingItem_C.GetDecoratedSenderString
// 0x0288 (0x0288 - 0x0000)
struct UI_ChattingItem_C_GetDecoratedSenderString final
{
public:
	class UM1UIDataChatItem*                      InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 DecoratedSender;                                   // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetChattingAccountName_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetChattingDisplayName_ReturnValue;       // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0058(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0070(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00C0(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSenderDecorateStyleID_ReturnValue;     // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0128(0x0018)()
	class FString                                 Temp_string_Variable;                              // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0150(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x01A0(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x01F0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0240(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0250(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChattingItem_C_GetDecoratedSenderString) == 0x000008, "Wrong alignment on UI_ChattingItem_C_GetDecoratedSenderString");
static_assert(sizeof(UI_ChattingItem_C_GetDecoratedSenderString) == 0x000288, "Wrong size on UI_ChattingItem_C_GetDecoratedSenderString");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, InData) == 0x000000, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::InData' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, DecoratedSender) == 0x000008, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::DecoratedSender' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, Temp_bool_Variable) == 0x000018, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, CallFunc_GetChattingAccountName_ReturnValue) == 0x000020, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::CallFunc_GetChattingAccountName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, CallFunc_GetChattingDisplayName_ReturnValue) == 0x000030, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::CallFunc_GetChattingDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000058, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C0, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, CallFunc_IsEmpty_ReturnValue) == 0x000110, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, CallFunc_GetSenderDecorateStyleID_ReturnValue) == 0x000118, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::CallFunc_GetSenderDecorateStyleID_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000128, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, Temp_string_Variable) == 0x000140, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, K2Node_MakeStruct_FormatArgumentData_2) == 0x000150, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, K2Node_MakeStruct_FormatArgumentData_3) == 0x0001A0, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, K2Node_MakeStruct_FormatArgumentData_4) == 0x0001F0, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, K2Node_MakeArray_Array) == 0x000240, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, CallFunc_Format_ReturnValue) == 0x000250, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, CallFunc_Conv_TextToString_ReturnValue) == 0x000268, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_GetDecoratedSenderString, K2Node_Select_Default) == 0x000278, "Member 'UI_ChattingItem_C_GetDecoratedSenderString::K2Node_Select_Default' has a wrong offset!");

// Function UI_ChattingItem.UI_ChattingItem_C.ExecuteUbergraph_UI_ChattingItem
// 0x00F0 (0x00F0 - 0x0000)
struct UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UM1UIDataChatItem*                      K2Node_DynamicCast_AsM1UIData_Chat_Item;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_1;                            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIDataChatItem*                      K2Node_DynamicCast_AsM1UIData_Chat_Item_1;         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetChattingMessage_ReturnValue;           // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_CombineChattingTypeWithSenderString_CombinedString; // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NeedColon_ReturnValue;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92[0x6];                                       // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D8(0x0018)()
};
static_assert(alignof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem) == 0x000008, "Wrong alignment on UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem");
static_assert(sizeof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem) == 0x0000F0, "Wrong size on UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, EntryPoint) == 0x000000, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, K2Node_Event_ListItemObject) == 0x000008, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, Temp_string_Variable) == 0x000010, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, K2Node_DynamicCast_AsM1UIData_Chat_Item) == 0x000020, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::K2Node_DynamicCast_AsM1UIData_Chat_Item' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, Temp_bool_Variable) == 0x000029, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, Temp_string_Variable_1) == 0x000030, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, Temp_string_Variable_2) == 0x000040, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, K2Node_Event_InData) == 0x000050, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, Temp_bool_Variable_1) == 0x000058, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, K2Node_DynamicCast_AsM1UIData_Chat_Item_1) == 0x000060, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::K2Node_DynamicCast_AsM1UIData_Chat_Item_1' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, CallFunc_GetChattingMessage_ReturnValue) == 0x000070, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::CallFunc_GetChattingMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, CallFunc_CombineChattingTypeWithSenderString_CombinedString) == 0x000080, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::CallFunc_CombineChattingTypeWithSenderString_CombinedString' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, CallFunc_NeedColon_ReturnValue) == 0x000090, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::CallFunc_NeedColon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, CallFunc_IsEmpty_ReturnValue) == 0x000091, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, K2Node_Select_Default) == 0x000098, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, CallFunc_Concat_StrStr_ReturnValue) == 0x0000A8, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, K2Node_Select_Default_1) == 0x0000B8, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C8, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D8, "Member 'UI_ChattingItem_C_ExecuteUbergraph_UI_ChattingItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UI_ChattingItem.UI_ChattingItem_C.CombineChattingTypeWithSenderString
// 0x0120 (0x0120 - 0x0000)
struct UI_ChattingItem_C_CombineChattingTypeWithSenderString final
{
public:
	class UM1UIDataChatItem*                      InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CombinedString;                                    // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDecoratedSenderString_DecoratedSender; // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDirectMessage_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetChattingTypeText_ReturnValue;          // 0x00A0(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D8(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChattingItem_C_CombineChattingTypeWithSenderString) == 0x000008, "Wrong alignment on UI_ChattingItem_C_CombineChattingTypeWithSenderString");
static_assert(sizeof(UI_ChattingItem_C_CombineChattingTypeWithSenderString) == 0x000120, "Wrong size on UI_ChattingItem_C_CombineChattingTypeWithSenderString");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, InData) == 0x000000, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::InData' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, CombinedString) == 0x000008, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::CombinedString' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, Temp_bool_Variable) == 0x000018, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, CallFunc_GetDecoratedSenderString_DecoratedSender) == 0x000020, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::CallFunc_GetDecoratedSenderString_DecoratedSender' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, CallFunc_IsDirectMessage_ReturnValue) == 0x000030, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::CallFunc_IsDirectMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, CallFunc_GetChattingTypeText_ReturnValue) == 0x0000A0, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::CallFunc_GetChattingTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, K2Node_MakeArray_Array) == 0x0000B8, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, CallFunc_Conv_TextToString_ReturnValue) == 0x0000C8, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, CallFunc_Format_ReturnValue) == 0x0000D8, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, CallFunc_Concat_StrStr_ReturnValue) == 0x0000F0, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000100, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ChattingItem_C_CombineChattingTypeWithSenderString, K2Node_Select_Default) == 0x000110, "Member 'UI_ChattingItem_C_CombineChattingTypeWithSenderString::K2Node_Select_Default' has a wrong offset!");

}

