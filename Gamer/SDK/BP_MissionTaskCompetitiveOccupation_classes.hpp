#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskCompetitiveOccupation

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTaskCompetitiveOccupation.BP_MissionTaskCompetitiveOccupation_C
// 0x0000 (0x0700 - 0x0700)
class ABP_MissionTaskCompetitiveOccupation_C final : public AM1MissionTaskActorCompetitiveOccupation
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTaskCompetitiveOccupation_C">();
	}
	static class ABP_MissionTaskCompetitiveOccupation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTaskCompetitiveOccupation_C>();
	}
};
static_assert(alignof(ABP_MissionTaskCompetitiveOccupation_C) == 0x000008, "Wrong alignment on ABP_MissionTaskCompetitiveOccupation_C");
static_assert(sizeof(ABP_MissionTaskCompetitiveOccupation_C) == 0x000700, "Wrong size on ABP_MissionTaskCompetitiveOccupation_C");

}

