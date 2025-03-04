#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerInteraction

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_PlayerInteraction.UI_PlayerInteraction_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_PlayerInteraction_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerInteraction_C_PreConstruct) == 0x000001, "Wrong alignment on UI_PlayerInteraction_C_PreConstruct");
static_assert(sizeof(UI_PlayerInteraction_C_PreConstruct) == 0x000001, "Wrong size on UI_PlayerInteraction_C_PreConstruct");
static_assert(offsetof(UI_PlayerInteraction_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_PlayerInteraction_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_PlayerInteraction.UI_PlayerInteraction_C.ExecuteUbergraph_UI_PlayerInteraction
// 0x0010 (0x0010 - 0x0000)
struct UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bPartyMember;                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bAway;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         K2Node_Event_InLocalPlatformType;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         K2Node_Event_InPlayerPlatformType;                 // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction) == 0x000004, "Wrong alignment on UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction");
static_assert(sizeof(UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction) == 0x000010, "Wrong size on UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction");
static_assert(offsetof(UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction, EntryPoint) == 0x000000, "Member 'UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction, Temp_bool_Variable) == 0x000004, "Member 'UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction, Temp_byte_Variable) == 0x000005, "Member 'UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction, Temp_byte_Variable_1) == 0x000006, "Member 'UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction, K2Node_Event_bPartyMember) == 0x000007, "Member 'UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction::K2Node_Event_bPartyMember' has a wrong offset!");
static_assert(offsetof(UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction, K2Node_Event_IsDesignTime) == 0x000008, "Member 'UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction, K2Node_Event_bAway) == 0x000009, "Member 'UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction::K2Node_Event_bAway' has a wrong offset!");
static_assert(offsetof(UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction, K2Node_Event_InLocalPlatformType) == 0x00000A, "Member 'UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction::K2Node_Event_InLocalPlatformType' has a wrong offset!");
static_assert(offsetof(UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction, K2Node_Event_InPlayerPlatformType) == 0x00000B, "Member 'UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction::K2Node_Event_InPlayerPlatformType' has a wrong offset!");
static_assert(offsetof(UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction, K2Node_Select_Default) == 0x00000C, "Member 'UI_PlayerInteraction_C_ExecuteUbergraph_UI_PlayerInteraction::K2Node_Select_Default' has a wrong offset!");

// Function UI_PlayerInteraction.UI_PlayerInteraction_C.BP_UpdateAwayFromGameplay
// 0x0001 (0x0001 - 0x0000)
struct UI_PlayerInteraction_C_BP_UpdateAwayFromGameplay final
{
public:
	bool                                          bAway;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerInteraction_C_BP_UpdateAwayFromGameplay) == 0x000001, "Wrong alignment on UI_PlayerInteraction_C_BP_UpdateAwayFromGameplay");
static_assert(sizeof(UI_PlayerInteraction_C_BP_UpdateAwayFromGameplay) == 0x000001, "Wrong size on UI_PlayerInteraction_C_BP_UpdateAwayFromGameplay");
static_assert(offsetof(UI_PlayerInteraction_C_BP_UpdateAwayFromGameplay, bAway) == 0x000000, "Member 'UI_PlayerInteraction_C_BP_UpdateAwayFromGameplay::bAway' has a wrong offset!");

// Function UI_PlayerInteraction.UI_PlayerInteraction_C.BP_SetPlatformIcon
// 0x0002 (0x0002 - 0x0000)
struct UI_PlayerInteraction_C_BP_SetPlatformIcon final
{
public:
	EM1LoginPlatformTypes                         InLocalPlatformType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         InPlayerPlatformType;                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerInteraction_C_BP_SetPlatformIcon) == 0x000001, "Wrong alignment on UI_PlayerInteraction_C_BP_SetPlatformIcon");
static_assert(sizeof(UI_PlayerInteraction_C_BP_SetPlatformIcon) == 0x000002, "Wrong size on UI_PlayerInteraction_C_BP_SetPlatformIcon");
static_assert(offsetof(UI_PlayerInteraction_C_BP_SetPlatformIcon, InLocalPlatformType) == 0x000000, "Member 'UI_PlayerInteraction_C_BP_SetPlatformIcon::InLocalPlatformType' has a wrong offset!");
static_assert(offsetof(UI_PlayerInteraction_C_BP_SetPlatformIcon, InPlayerPlatformType) == 0x000001, "Member 'UI_PlayerInteraction_C_BP_SetPlatformIcon::InPlayerPlatformType' has a wrong offset!");

// Function UI_PlayerInteraction.UI_PlayerInteraction_C.BP_ChangedPartyState
// 0x0001 (0x0001 - 0x0000)
struct UI_PlayerInteraction_C_BP_ChangedPartyState final
{
public:
	bool                                          bPartyMember;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerInteraction_C_BP_ChangedPartyState) == 0x000001, "Wrong alignment on UI_PlayerInteraction_C_BP_ChangedPartyState");
static_assert(sizeof(UI_PlayerInteraction_C_BP_ChangedPartyState) == 0x000001, "Wrong size on UI_PlayerInteraction_C_BP_ChangedPartyState");
static_assert(offsetof(UI_PlayerInteraction_C_BP_ChangedPartyState, bPartyMember) == 0x000000, "Member 'UI_PlayerInteraction_C_BP_ChangedPartyState::bPartyMember' has a wrong offset!");

}

