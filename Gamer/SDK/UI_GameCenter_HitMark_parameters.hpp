#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameCenter_HitMark

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function UI_GameCenter_HitMark.UI_GameCenter_HitMark_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_GameCenter_HitMark_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameCenter_HitMark_C_OnEventWidgetOpen) == 0x000001, "Wrong alignment on UI_GameCenter_HitMark_C_OnEventWidgetOpen");
static_assert(sizeof(UI_GameCenter_HitMark_C_OnEventWidgetOpen) == 0x000001, "Wrong size on UI_GameCenter_HitMark_C_OnEventWidgetOpen");
static_assert(offsetof(UI_GameCenter_HitMark_C_OnEventWidgetOpen, InDirection) == 0x000000, "Member 'UI_GameCenter_HitMark_C_OnEventWidgetOpen::InDirection' has a wrong offset!");

// Function UI_GameCenter_HitMark.UI_GameCenter_HitMark_C.ExecuteUbergraph_UI_GameCenter_HitMark
// 0x0048 (0x0048 - 0x0000)
struct UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable;                                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_2;                              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_3;                              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_4;                              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1HitMarkType                                K2Node_Event_Type;                                 // 0x0020(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsWeaknessHit;                       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1HitMarkType                                Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Select_Default_1;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark) == 0x000008, "Wrong alignment on UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark");
static_assert(sizeof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark) == 0x000048, "Wrong size on UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, EntryPoint) == 0x000000, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, K2Node_Event_InDirection) == 0x000004, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::K2Node_Event_InDirection' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, Temp_int_Variable) == 0x000008, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, Temp_real_Variable) == 0x00000C, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, Temp_real_Variable_1) == 0x000010, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, Temp_real_Variable_2) == 0x000014, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, Temp_real_Variable_3) == 0x000018, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, Temp_real_Variable_4) == 0x00001C, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, K2Node_Event_Type) == 0x000020, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::K2Node_Event_Type' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, K2Node_Event_bIsWeaknessHit) == 0x000021, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::K2Node_Event_bIsWeaknessHit' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000024, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, Temp_byte_Variable) == 0x000028, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, K2Node_Select_Default) == 0x00002C, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, K2Node_Select_Default_1) == 0x000030, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, CallFunc_PlayUIAnimation_ReturnValue) == 0x000038, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'UI_GameCenter_HitMark_C_ExecuteUbergraph_UI_GameCenter_HitMark::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UI_GameCenter_HitMark.UI_GameCenter_HitMark_C.BP_EnemyHit
// 0x0002 (0x0002 - 0x0000)
struct UI_GameCenter_HitMark_C_BP_EnemyHit final
{
public:
	EM1HitMarkType                                Type;                                              // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsWeaknessHit;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameCenter_HitMark_C_BP_EnemyHit) == 0x000001, "Wrong alignment on UI_GameCenter_HitMark_C_BP_EnemyHit");
static_assert(sizeof(UI_GameCenter_HitMark_C_BP_EnemyHit) == 0x000002, "Wrong size on UI_GameCenter_HitMark_C_BP_EnemyHit");
static_assert(offsetof(UI_GameCenter_HitMark_C_BP_EnemyHit, Type) == 0x000000, "Member 'UI_GameCenter_HitMark_C_BP_EnemyHit::Type' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_HitMark_C_BP_EnemyHit, bIsWeaknessHit) == 0x000001, "Member 'UI_GameCenter_HitMark_C_BP_EnemyHit::bIsWeaknessHit' has a wrong offset!");

}

