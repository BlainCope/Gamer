#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkAbility_22_SigvoresProof

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function PerkAbility_22_SigvoresProof.PerkAbility_22_SigvoresProof_C.ExecuteUbergraph_PerkAbility_22_SigvoresProof
// 0x00C8 (0x00C8 - 0x0000)
struct PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event;                          // 0x0020(0x0040)(ConstParm)
	struct FM1AbilityEvent                        Temp_struct_Variable;                              // 0x0060(0x0040)()
	class UM1AbilityTask_WaitAbilityEvent*        CallFunc_WaitAbilityEvent_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA[0x6];                                       // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_1;              // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA[0x6];                                       // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_2;              // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof) == 0x000008, "Wrong alignment on PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof");
static_assert(sizeof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof) == 0x0000C8, "Wrong size on PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof");
static_assert(offsetof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof, EntryPoint) == 0x000000, "Member 'PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof::EntryPoint' has a wrong offset!");
static_assert(offsetof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof, CallFunc_GetOwnerActor_ReturnValue) == 0x000008, "Member 'PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof::CallFunc_GetOwnerActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof, K2Node_CustomEvent_Event) == 0x000020, "Member 'PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof::K2Node_CustomEvent_Event' has a wrong offset!");
static_assert(offsetof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof, Temp_struct_Variable) == 0x000060, "Member 'PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof, CallFunc_WaitAbilityEvent_ReturnValue) == 0x0000A0, "Member 'PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof::CallFunc_WaitAbilityEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x0000A9, "Member 'PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof, CallFunc_GetOwnerActor_ReturnValue_1) == 0x0000B0, "Member 'PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof::CallFunc_GetOwnerActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof, CallFunc_IsValid_ReturnValue_1) == 0x0000B8, "Member 'PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof, CallFunc_HasAuthority_ReturnValue) == 0x0000B9, "Member 'PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof, CallFunc_GetOwnerActor_ReturnValue_2) == 0x0000C0, "Member 'PerkAbility_22_SigvoresProof_C_ExecuteUbergraph_PerkAbility_22_SigvoresProof::CallFunc_GetOwnerActor_ReturnValue_2' has a wrong offset!");

// Function PerkAbility_22_SigvoresProof.PerkAbility_22_SigvoresProof_C.OnAbilityEvent_E33ED40D43EC049C54B0CC82EED11105
// 0x0040 (0x0040 - 0x0000)
struct PerkAbility_22_SigvoresProof_C_OnAbilityEvent_E33ED40D43EC049C54B0CC82EED11105 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PerkAbility_22_SigvoresProof_C_OnAbilityEvent_E33ED40D43EC049C54B0CC82EED11105) == 0x000008, "Wrong alignment on PerkAbility_22_SigvoresProof_C_OnAbilityEvent_E33ED40D43EC049C54B0CC82EED11105");
static_assert(sizeof(PerkAbility_22_SigvoresProof_C_OnAbilityEvent_E33ED40D43EC049C54B0CC82EED11105) == 0x000040, "Wrong size on PerkAbility_22_SigvoresProof_C_OnAbilityEvent_E33ED40D43EC049C54B0CC82EED11105");
static_assert(offsetof(PerkAbility_22_SigvoresProof_C_OnAbilityEvent_E33ED40D43EC049C54B0CC82EED11105, Event) == 0x000000, "Member 'PerkAbility_22_SigvoresProof_C_OnAbilityEvent_E33ED40D43EC049C54B0CC82EED11105::Event' has a wrong offset!");

}

