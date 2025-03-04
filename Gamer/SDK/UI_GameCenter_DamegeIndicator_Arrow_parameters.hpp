#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameCenter_DamegeIndicator_Arrow

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_GameCenter_DamegeIndicator_Arrow_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameCenter_DamegeIndicator_Arrow_C_Tick) == 0x000004, "Wrong alignment on UI_GameCenter_DamegeIndicator_Arrow_C_Tick");
static_assert(sizeof(UI_GameCenter_DamegeIndicator_Arrow_C_Tick) == 0x00003C, "Wrong size on UI_GameCenter_DamegeIndicator_Arrow_C_Tick");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_Tick, MyGeometry) == 0x000000, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C.StateSetting
// 0x0008 (0x0008 - 0x0000)
struct UI_GameCenter_DamegeIndicator_Arrow_C_StateSetting final
{
public:
	int32                                         State;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameCenter_DamegeIndicator_Arrow_C_StateSetting) == 0x000004, "Wrong alignment on UI_GameCenter_DamegeIndicator_Arrow_C_StateSetting");
static_assert(sizeof(UI_GameCenter_DamegeIndicator_Arrow_C_StateSetting) == 0x000008, "Wrong size on UI_GameCenter_DamegeIndicator_Arrow_C_StateSetting");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_StateSetting, State) == 0x000000, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_StateSetting::State' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_StateSetting, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_StateSetting::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_GameCenter_DamegeIndicator_Arrow_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameCenter_DamegeIndicator_Arrow_C_PreConstruct) == 0x000001, "Wrong alignment on UI_GameCenter_DamegeIndicator_Arrow_C_PreConstruct");
static_assert(sizeof(UI_GameCenter_DamegeIndicator_Arrow_C_PreConstruct) == 0x000001, "Wrong size on UI_GameCenter_DamegeIndicator_Arrow_C_PreConstruct");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C.PlayAnimations
// 0x0040 (0x0040 - 0x0000)
struct UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations final
{
public:
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations) == 0x000008, "Wrong alignment on UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations");
static_assert(sizeof(UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations) == 0x000040, "Wrong size on UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations, CallFunc_GetEndTime_ReturnValue) == 0x000000, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000010, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000028, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000030, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations, CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast) == 0x000038, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_PlayAnimations::CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast' has a wrong offset!");

// Function UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C.ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow
// 0x0054 (0x0054 - 0x0000)
struct UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1DamageType                                 Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow) == 0x000004, "Wrong alignment on UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow");
static_assert(sizeof(UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow) == 0x000054, "Wrong size on UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow, EntryPoint) == 0x000000, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow, Temp_byte_Variable) == 0x000004, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow, Temp_int_Variable) == 0x000008, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow, Temp_int_Variable_1) == 0x00000C, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow, K2Node_Event_IsDesignTime) == 0x000010, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow, K2Node_Event_MyGeometry) == 0x000014, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow, K2Node_Select_Default) == 0x000050, "Member 'UI_GameCenter_DamegeIndicator_Arrow_C_ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow::K2Node_Select_Default' has a wrong offset!");

}

