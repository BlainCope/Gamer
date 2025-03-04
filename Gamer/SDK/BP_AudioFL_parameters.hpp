#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AudioFL

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function BP_AudioFL.BP_AudioFL_C.BP_AK_WidgetAnimsound
// 0x0058 (0x0058 - 0x0000)
struct BP_AudioFL_C_BP_AK_WidgetAnimsound final
{
public:
	class UAkAudioEvent*                          AkEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Target;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0018(0x0010)(ConstParm, ReferenceParm)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0030(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EValidOutputPin                               CallFunc_FindAkComponentWithValid_OutputPins;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AkComponent*                         CallFunc_FindAkComponentWithValid_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioFL_C_BP_AK_WidgetAnimsound) == 0x000008, "Wrong alignment on BP_AudioFL_C_BP_AK_WidgetAnimsound");
static_assert(sizeof(BP_AudioFL_C_BP_AK_WidgetAnimsound) == 0x000058, "Wrong size on BP_AudioFL_C_BP_AK_WidgetAnimsound");
static_assert(offsetof(BP_AudioFL_C_BP_AK_WidgetAnimsound, AkEvent) == 0x000000, "Member 'BP_AudioFL_C_BP_AK_WidgetAnimsound::AkEvent' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_AK_WidgetAnimsound, Target) == 0x000008, "Member 'BP_AudioFL_C_BP_AK_WidgetAnimsound::Target' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_AK_WidgetAnimsound, __WorldContext) == 0x000010, "Member 'BP_AudioFL_C_BP_AK_WidgetAnimsound::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_AK_WidgetAnimsound, Temp_struct_Variable) == 0x000018, "Member 'BP_AudioFL_C_BP_AK_WidgetAnimsound::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_AK_WidgetAnimsound, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'BP_AudioFL_C_BP_AK_WidgetAnimsound::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_AK_WidgetAnimsound, Temp_delegate_Variable) == 0x000030, "Member 'BP_AudioFL_C_BP_AK_WidgetAnimsound::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_AK_WidgetAnimsound, CallFunc_FindAkComponentWithValid_OutputPins) == 0x000040, "Member 'BP_AudioFL_C_BP_AK_WidgetAnimsound::CallFunc_FindAkComponentWithValid_OutputPins' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_AK_WidgetAnimsound, CallFunc_FindAkComponentWithValid_ReturnValue) == 0x000048, "Member 'BP_AudioFL_C_BP_AK_WidgetAnimsound::CallFunc_FindAkComponentWithValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_AK_WidgetAnimsound, K2Node_SwitchEnum_CmpSuccess) == 0x000050, "Member 'BP_AudioFL_C_BP_AK_WidgetAnimsound::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_AK_WidgetAnimsound, CallFunc_PostEvent_ReturnValue) == 0x000054, "Member 'BP_AudioFL_C_BP_AK_WidgetAnimsound::CallFunc_PostEvent_ReturnValue' has a wrong offset!");

// Function BP_AudioFL.BP_AudioFL_C.BP_Get M1Player String ID
// 0x00E0 (0x00E0 - 0x0000)
struct BP_AudioFL_C_BP_Get_M1Player_String_ID final
{
public:
	class AActor*                                 Object;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 StringId;                                          // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AM1Character*                           K2Node_DynamicCast_AsM1Character;                  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStringId_ReturnValue;                  // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_LeftS;                              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS;                             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue;                        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Split_LeftS_1;                            // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS_1;                           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue_1;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Split_LeftS_2;                            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS_2;                           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue_2;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioFL_C_BP_Get_M1Player_String_ID) == 0x000008, "Wrong alignment on BP_AudioFL_C_BP_Get_M1Player_String_ID");
static_assert(sizeof(BP_AudioFL_C_BP_Get_M1Player_String_ID) == 0x0000E0, "Wrong size on BP_AudioFL_C_BP_Get_M1Player_String_ID");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, Object) == 0x000000, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::Object' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, __WorldContext) == 0x000008, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, StringId) == 0x000010, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::StringId' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, Temp_bool_Variable) == 0x000020, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, K2Node_DynamicCast_AsM1Character) == 0x000028, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::K2Node_DynamicCast_AsM1Character' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, CallFunc_GetStringId_ReturnValue) == 0x000038, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::CallFunc_GetStringId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, CallFunc_GetObjectName_ReturnValue) == 0x000048, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, CallFunc_Split_LeftS) == 0x000058, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, CallFunc_Split_RightS) == 0x000068, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, CallFunc_Split_ReturnValue) == 0x000078, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, CallFunc_Split_LeftS_1) == 0x000080, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::CallFunc_Split_LeftS_1' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, CallFunc_Split_RightS_1) == 0x000090, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::CallFunc_Split_RightS_1' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, CallFunc_Split_ReturnValue_1) == 0x0000A0, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::CallFunc_Split_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, CallFunc_Split_LeftS_2) == 0x0000A8, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::CallFunc_Split_LeftS_2' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, CallFunc_Split_RightS_2) == 0x0000B8, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::CallFunc_Split_RightS_2' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, CallFunc_Split_ReturnValue_2) == 0x0000C8, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::CallFunc_Split_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AudioFL_C_BP_Get_M1Player_String_ID, K2Node_Select_Default) == 0x0000D0, "Member 'BP_AudioFL_C_BP_Get_M1Player_String_ID::K2Node_Select_Default' has a wrong offset!");

}

