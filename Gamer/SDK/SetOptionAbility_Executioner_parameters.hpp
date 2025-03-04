#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SetOptionAbility_Executioner

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SetOptionAbility_Executioner.SetOptionAbility_Executioner_C.ExecuteUbergraph_SetOptionAbility_Executioner
// 0x03C0 (0x03C0 - 0x0000)
struct SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FM1TaggedAbilityParamData>      Temp_struct_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	struct FM1CalcDamageInfo                      K2Node_CustomEvent_DamageInfo;                     // 0x0018(0x0138)(ConstParm, ContainsInstancedReference)
	TDelegate<void(struct FM1CalcDamageInfo& DamageInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0150(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1CalcDamageInfo                      Temp_struct_Variable_1;                            // 0x0160(0x0138)(ContainsInstancedReference)
	class UM1AbilityTask_WaitDamageEvent*         CallFunc_WaitGiveDamageEvent_ReturnValue;          // 0x0298(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x02A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A3[0x1];                                      // 0x02A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x02AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x02B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x02C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x02D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x02E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x02E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0314(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0320(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0330(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0338(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_345[0xB];                                      // 0x0345(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0350(0x0030)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Temp_name_Variable;                                // 0x0388(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_CheckCooltime_bCanActivate;               // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_399[0x7];                                      // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityContextHandle                CallFunc_BP_MakeForwardingContext_ReturnValue;     // 0x03A0(0x0010)()
	class AM1AbilityActor*                        CallFunc_SpawnFirstAbilityActorByTag_ReturnValue;  // 0x03B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanActivateByRatio_bResult;               // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner) == 0x000010, "Wrong alignment on SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner");
static_assert(sizeof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner) == 0x0003C0, "Wrong size on SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, EntryPoint) == 0x000000, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::EntryPoint' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, Temp_struct_Variable) == 0x000008, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, K2Node_CustomEvent_DamageInfo) == 0x000018, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::K2Node_CustomEvent_DamageInfo' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, K2Node_CreateDelegate_OutputDelegate) == 0x000150, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, Temp_struct_Variable_1) == 0x000160, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_WaitGiveDamageEvent_ReturnValue) == 0x000298, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_WaitGiveDamageEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_IsValid_ReturnValue) == 0x0002A0, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_bBlockingHit) == 0x0002A1, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_bInitialOverlap) == 0x0002A2, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_Time) == 0x0002A4, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_Distance) == 0x0002A8, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_Location) == 0x0002AC, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_ImpactPoint) == 0x0002B8, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_Normal) == 0x0002C4, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_ImpactNormal) == 0x0002D0, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_PhysMat) == 0x0002E0, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_HitActor) == 0x0002E8, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_HitComponent) == 0x0002F0, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_HitBoneName) == 0x0002F8, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_BoneName) == 0x000300, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_HitItem) == 0x000308, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_ElementIndex) == 0x00030C, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_FaceIndex) == 0x000310, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_TraceStart) == 0x000314, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BreakHitResult_TraceEnd) == 0x000320, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_GetOwnerActor_ReturnValue) == 0x000330, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_GetOwnerActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000338, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_IsValid_ReturnValue_1) == 0x000344, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_MakeTransform_ReturnValue) == 0x000350, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_HasAuthority_ReturnValue) == 0x000380, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, Temp_name_Variable) == 0x000388, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_CheckCooltime_bCanActivate) == 0x000398, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_CheckCooltime_bCanActivate' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BP_MakeForwardingContext_ReturnValue) == 0x0003A0, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BP_MakeForwardingContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_SpawnFirstAbilityActorByTag_ReturnValue) == 0x0003B0, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_SpawnFirstAbilityActorByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_CanActivateByRatio_bResult) == 0x0003B8, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_CanActivateByRatio_bResult' has a wrong offset!");
static_assert(offsetof(SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner, CallFunc_BooleanAND_ReturnValue) == 0x0003B9, "Member 'SetOptionAbility_Executioner_C_ExecuteUbergraph_SetOptionAbility_Executioner::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SetOptionAbility_Executioner.SetOptionAbility_Executioner_C.OnEvent_7070264E41A0831F6BF031978C996E61
// 0x0138 (0x0138 - 0x0000)
struct SetOptionAbility_Executioner_C_OnEvent_7070264E41A0831F6BF031978C996E61 final
{
public:
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0000(0x0138)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(SetOptionAbility_Executioner_C_OnEvent_7070264E41A0831F6BF031978C996E61) == 0x000008, "Wrong alignment on SetOptionAbility_Executioner_C_OnEvent_7070264E41A0831F6BF031978C996E61");
static_assert(sizeof(SetOptionAbility_Executioner_C_OnEvent_7070264E41A0831F6BF031978C996E61) == 0x000138, "Wrong size on SetOptionAbility_Executioner_C_OnEvent_7070264E41A0831F6BF031978C996E61");
static_assert(offsetof(SetOptionAbility_Executioner_C_OnEvent_7070264E41A0831F6BF031978C996E61, DamageInfo) == 0x000000, "Member 'SetOptionAbility_Executioner_C_OnEvent_7070264E41A0831F6BF031978C996E61::DamageInfo' has a wrong offset!");

}

