#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskSupply

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTaskSupply.BP_MissionTaskSupply_C
// 0x0008 (0x0668 - 0x0660)
class ABP_MissionTaskSupply_C final : public AM1MissionTaskActorSupply
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTaskSupply_C">();
	}
	static class ABP_MissionTaskSupply_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTaskSupply_C>();
	}
};
static_assert(alignof(ABP_MissionTaskSupply_C) == 0x000008, "Wrong alignment on ABP_MissionTaskSupply_C");
static_assert(sizeof(ABP_MissionTaskSupply_C) == 0x000668, "Wrong size on ABP_MissionTaskSupply_C");
static_assert(offsetof(ABP_MissionTaskSupply_C, Billboard) == 0x000660, "Member 'ABP_MissionTaskSupply_C::Billboard' has a wrong offset!");

}

