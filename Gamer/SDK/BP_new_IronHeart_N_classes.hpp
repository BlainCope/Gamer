#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_new_IronHeart_N

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_new_IronHeart_N.BP_new_IronHeart_N_C
// 0x0020 (0x0278 - 0x0258)
class ABP_new_IronHeart_N_C final : public AM1SequencerSkeletalMeshActor
{
public:
	class UStaticMeshComponent*                   SM_Prologue_Ironheart00_CSW;                       // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   IH_core;                                           // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   IH_outCore;                                        // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Prologue_Ironheart00_CSW1;                      // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_new_IronHeart_N_C">();
	}
	static class ABP_new_IronHeart_N_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_new_IronHeart_N_C>();
	}
};
static_assert(alignof(ABP_new_IronHeart_N_C) == 0x000008, "Wrong alignment on ABP_new_IronHeart_N_C");
static_assert(sizeof(ABP_new_IronHeart_N_C) == 0x000278, "Wrong size on ABP_new_IronHeart_N_C");
static_assert(offsetof(ABP_new_IronHeart_N_C, SM_Prologue_Ironheart00_CSW) == 0x000258, "Member 'ABP_new_IronHeart_N_C::SM_Prologue_Ironheart00_CSW' has a wrong offset!");
static_assert(offsetof(ABP_new_IronHeart_N_C, IH_core) == 0x000260, "Member 'ABP_new_IronHeart_N_C::IH_core' has a wrong offset!");
static_assert(offsetof(ABP_new_IronHeart_N_C, IH_outCore) == 0x000268, "Member 'ABP_new_IronHeart_N_C::IH_outCore' has a wrong offset!");
static_assert(offsetof(ABP_new_IronHeart_N_C, SM_Prologue_Ironheart00_CSW1) == 0x000270, "Member 'ABP_new_IronHeart_N_C::SM_Prologue_Ironheart00_CSW1' has a wrong offset!");

}

