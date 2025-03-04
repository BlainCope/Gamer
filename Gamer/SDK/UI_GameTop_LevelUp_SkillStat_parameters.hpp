#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameTop_LevelUp_SkillStat

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_GameTop_LevelUp_SkillStat.UI_GameTop_LevelUp_SkillStat_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_GameTop_LevelUp_SkillStat_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameTop_LevelUp_SkillStat_C_SetDataImpl) == 0x000008, "Wrong alignment on UI_GameTop_LevelUp_SkillStat_C_SetDataImpl");
static_assert(sizeof(UI_GameTop_LevelUp_SkillStat_C_SetDataImpl) == 0x000008, "Wrong size on UI_GameTop_LevelUp_SkillStat_C_SetDataImpl");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_SetDataImpl, InData) == 0x000000, "Member 'UI_GameTop_LevelUp_SkillStat_C_SetDataImpl::InData' has a wrong offset!");

// Function UI_GameTop_LevelUp_SkillStat.UI_GameTop_LevelUp_SkillStat_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_GameTop_LevelUp_SkillStat_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameTop_LevelUp_SkillStat_C_PreConstruct) == 0x000001, "Wrong alignment on UI_GameTop_LevelUp_SkillStat_C_PreConstruct");
static_assert(sizeof(UI_GameTop_LevelUp_SkillStat_C_PreConstruct) == 0x000001, "Wrong size on UI_GameTop_LevelUp_SkillStat_C_PreConstruct");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_GameTop_LevelUp_SkillStat_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_GameTop_LevelUp_SkillStat.UI_GameTop_LevelUp_SkillStat_C.PlayOpenAnim
// 0x0008 (0x0008 - 0x0000)
struct UI_GameTop_LevelUp_SkillStat_C_PlayOpenAnim final
{
public:
	double                                        InDelay;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameTop_LevelUp_SkillStat_C_PlayOpenAnim) == 0x000008, "Wrong alignment on UI_GameTop_LevelUp_SkillStat_C_PlayOpenAnim");
static_assert(sizeof(UI_GameTop_LevelUp_SkillStat_C_PlayOpenAnim) == 0x000008, "Wrong size on UI_GameTop_LevelUp_SkillStat_C_PlayOpenAnim");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_PlayOpenAnim, InDelay) == 0x000000, "Member 'UI_GameTop_LevelUp_SkillStat_C_PlayOpenAnim::InDelay' has a wrong offset!");

// Function UI_GameTop_LevelUp_SkillStat.UI_GameTop_LevelUp_SkillStat_C.ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat
// 0x0088 (0x0088 - 0x0000)
struct UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIDataCharacterSkill*                K2Node_DynamicCast_AsM1UIData_Character_Skill;     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetStringId_ReturnValue;                  // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ConstParm, ReferenceParm)
	double                                        K2Node_CustomEvent_InDelay;                        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFormat_ReturnValue;       // 0x0058(0x0018)()
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat) == 0x000008, "Wrong alignment on UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat");
static_assert(sizeof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat) == 0x000088, "Wrong size on UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, EntryPoint) == 0x000000, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, K2Node_Event_InData) == 0x000008, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, K2Node_DynamicCast_AsM1UIData_Character_Skill) == 0x000010, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::K2Node_DynamicCast_AsM1UIData_Character_Skill' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, K2Node_Event_IsDesignTime) == 0x000019, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, CallFunc_GetLevel_ReturnValue) == 0x00001C, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, CallFunc_GetStringId_ReturnValue) == 0x000030, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::CallFunc_GetStringId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, K2Node_MakeArray_Array) == 0x000040, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, K2Node_CustomEvent_InDelay) == 0x000050, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::K2Node_CustomEvent_InDelay' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, CallFunc_GetLocalizedTextFormat_ReturnValue) == 0x000058, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::CallFunc_GetLocalizedTextFormat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000070, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, CallFunc_PlayAnimation_ReturnValue) == 0x000078, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat, CallFunc_Delay_Duration_ImplicitCast) == 0x000080, "Member 'UI_GameTop_LevelUp_SkillStat_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillStat::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}

