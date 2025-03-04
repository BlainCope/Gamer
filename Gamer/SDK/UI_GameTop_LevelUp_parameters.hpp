#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameTop_LevelUp

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.UI_Deco_TitleLine_Event_0
// 0x0008 (0x0008 - 0x0000)
struct UI_GameTop_LevelUp_C_UI_Deco_TitleLine_Event_0 final
{
public:
	class UUI_Deco_TitleLine_01_C*                UI_Deco_TitleLine;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameTop_LevelUp_C_UI_Deco_TitleLine_Event_0) == 0x000008, "Wrong alignment on UI_GameTop_LevelUp_C_UI_Deco_TitleLine_Event_0");
static_assert(sizeof(UI_GameTop_LevelUp_C_UI_Deco_TitleLine_Event_0) == 0x000008, "Wrong size on UI_GameTop_LevelUp_C_UI_Deco_TitleLine_Event_0");
static_assert(offsetof(UI_GameTop_LevelUp_C_UI_Deco_TitleLine_Event_0, UI_Deco_TitleLine) == 0x000000, "Member 'UI_GameTop_LevelUp_C_UI_Deco_TitleLine_Event_0::UI_Deco_TitleLine' has a wrong offset!");

// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.PlaySkillAnim
// 0x0090 (0x0090 - 0x0000)
struct UI_GameTop_LevelUp_C_PlaySkillAnim final
{
public:
	TArray<class UWidget*>                        AllSlots;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_GameTop_LevelUp_SkillIcon_C*        K2Node_DynamicCast_AsUI_Game_Top_Level_Up_Skill_Icon; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_GameTop_LevelUp_SkillStat_C*        K2Node_DynamicCast_AsUI_Game_Top_Level_Up_Skill_Stat; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue_1;             // 0x0078(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameTop_LevelUp_C_PlaySkillAnim) == 0x000008, "Wrong alignment on UI_GameTop_LevelUp_C_PlaySkillAnim");
static_assert(sizeof(UI_GameTop_LevelUp_C_PlaySkillAnim) == 0x000090, "Wrong size on UI_GameTop_LevelUp_C_PlaySkillAnim");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, AllSlots) == 0x000000, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::AllSlots' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, Temp_int_Array_Index_Variable) == 0x000014, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000020, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, CallFunc_GetAllChildren_ReturnValue) == 0x000038, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, CallFunc_Array_Get_Item) == 0x000048, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, K2Node_DynamicCast_AsUI_Game_Top_Level_Up_Skill_Icon) == 0x000050, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::K2Node_DynamicCast_AsUI_Game_Top_Level_Up_Skill_Icon' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, K2Node_DynamicCast_AsUI_Game_Top_Level_Up_Skill_Stat) == 0x000060, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::K2Node_DynamicCast_AsUI_Game_Top_Level_Up_Skill_Stat' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, CallFunc_GetAllChildren_ReturnValue_1) == 0x000078, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::CallFunc_GetAllChildren_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_PlaySkillAnim, CallFunc_PlayAnimationForward_ReturnValue) == 0x000088, "Member 'UI_GameTop_LevelUp_C_PlaySkillAnim::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_GameTop_LevelUp_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameTop_LevelUp_C_OnEventWidgetOpen) == 0x000001, "Wrong alignment on UI_GameTop_LevelUp_C_OnEventWidgetOpen");
static_assert(sizeof(UI_GameTop_LevelUp_C_OnEventWidgetOpen) == 0x000001, "Wrong size on UI_GameTop_LevelUp_C_OnEventWidgetOpen");
static_assert(offsetof(UI_GameTop_LevelUp_C_OnEventWidgetOpen, InDirection) == 0x000000, "Member 'UI_GameTop_LevelUp_C_OnEventWidgetOpen::InDirection' has a wrong offset!");

// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.GetEndAnimation
// 0x0008 (0x0008 - 0x0000)
struct UI_GameTop_LevelUp_C_GetEndAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameTop_LevelUp_C_GetEndAnimation) == 0x000008, "Wrong alignment on UI_GameTop_LevelUp_C_GetEndAnimation");
static_assert(sizeof(UI_GameTop_LevelUp_C_GetEndAnimation) == 0x000008, "Wrong size on UI_GameTop_LevelUp_C_GetEndAnimation");
static_assert(offsetof(UI_GameTop_LevelUp_C_GetEndAnimation, ReturnValue) == 0x000000, "Member 'UI_GameTop_LevelUp_C_GetEndAnimation::ReturnValue' has a wrong offset!");

// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.ExecuteUbergraph_UI_GameTop_LevelUp
// 0x00A0 (0x00A0 - 0x0000)
struct UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_CustomEvent_AkEvent;                        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Deco_TitleLine_01_C*                K2Node_CustomEvent_UI_Deco_TitleLine;              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          K2Node_Event_bIsMaxLevel;                          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_GameTop_Levelup_Stat_C*             K2Node_DynamicCast_AsUI_Game_Top_Levelup_Stat;     // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNewSkill_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue_1;            // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp) == 0x000008, "Wrong alignment on UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp");
static_assert(sizeof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp) == 0x0000A0, "Wrong size on UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, EntryPoint) == 0x000000, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, Temp_int_Array_Index_Variable) == 0x000014, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000020, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, K2Node_CustomEvent_AkEvent) == 0x000030, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::K2Node_CustomEvent_AkEvent' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, K2Node_CustomEvent_UI_Deco_TitleLine) == 0x000038, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::K2Node_CustomEvent_UI_Deco_TitleLine' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, CallFunc_GetAllChildren_ReturnValue) == 0x000040, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, K2Node_Event_bIsMaxLevel) == 0x000050, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::K2Node_Event_bIsMaxLevel' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, CallFunc_Array_Get_Item) == 0x000058, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, K2Node_DynamicCast_AsUI_Game_Top_Levelup_Stat) == 0x000060, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::K2Node_DynamicCast_AsUI_Game_Top_Levelup_Stat' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, K2Node_Event_InDirection) == 0x000071, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::K2Node_Event_InDirection' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, CallFunc_PlayUIAnimation_ReturnValue) == 0x000078, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, CallFunc_HasNewSkill_ReturnValue) == 0x000080, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::CallFunc_HasNewSkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, CallFunc_PlayUIAnimation_ReturnValue_1) == 0x000088, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::CallFunc_PlayUIAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp, K2Node_CreateDelegate_OutputDelegate_1) == 0x000090, "Member 'UI_GameTop_LevelUp_C_ExecuteUbergraph_UI_GameTop_LevelUp::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.BP_UpdateAppearanceByLevel
// 0x0001 (0x0001 - 0x0000)
struct UI_GameTop_LevelUp_C_BP_UpdateAppearanceByLevel final
{
public:
	bool                                          bIsMaxLevel;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameTop_LevelUp_C_BP_UpdateAppearanceByLevel) == 0x000001, "Wrong alignment on UI_GameTop_LevelUp_C_BP_UpdateAppearanceByLevel");
static_assert(sizeof(UI_GameTop_LevelUp_C_BP_UpdateAppearanceByLevel) == 0x000001, "Wrong size on UI_GameTop_LevelUp_C_BP_UpdateAppearanceByLevel");
static_assert(offsetof(UI_GameTop_LevelUp_C_BP_UpdateAppearanceByLevel, bIsMaxLevel) == 0x000000, "Member 'UI_GameTop_LevelUp_C_BP_UpdateAppearanceByLevel::bIsMaxLevel' has a wrong offset!");

// Function UI_GameTop_LevelUp.UI_GameTop_LevelUp_C.BP_playakSound
// 0x0008 (0x0008 - 0x0000)
struct UI_GameTop_LevelUp_C_BP_playakSound final
{
public:
	class UAkAudioEvent*                          AkEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameTop_LevelUp_C_BP_playakSound) == 0x000008, "Wrong alignment on UI_GameTop_LevelUp_C_BP_playakSound");
static_assert(sizeof(UI_GameTop_LevelUp_C_BP_playakSound) == 0x000008, "Wrong size on UI_GameTop_LevelUp_C_BP_playakSound");
static_assert(offsetof(UI_GameTop_LevelUp_C_BP_playakSound, AkEvent) == 0x000000, "Member 'UI_GameTop_LevelUp_C_BP_playakSound::AkEvent' has a wrong offset!");

}

