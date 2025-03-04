#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskExplosion

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTaskExplosion.BP_MissionTaskExplosion_C
// 0x0008 (0x06A0 - 0x0698)
class ABP_MissionTaskExplosion_C final : public AM1MissionTaskActorExplosion
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTaskExplosion_C">();
	}
	static class ABP_MissionTaskExplosion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTaskExplosion_C>();
	}
};
static_assert(alignof(ABP_MissionTaskExplosion_C) == 0x000008, "Wrong alignment on ABP_MissionTaskExplosion_C");
static_assert(sizeof(ABP_MissionTaskExplosion_C) == 0x0006A0, "Wrong size on ABP_MissionTaskExplosion_C");
static_assert(offsetof(ABP_MissionTaskExplosion_C, Billboard) == 0x000698, "Member 'ABP_MissionTaskExplosion_C::Billboard' has a wrong offset!");

}

