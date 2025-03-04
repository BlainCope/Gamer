#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SR_1001_0

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SR_1001.SR_1001_C
// 0x0010 (0x0470 - 0x0460)
class ASR_1001_C final : public AM1Weapon
{
public:
	class UM1WeaponMagazineReloadComponent*       M1WeaponMagazineReload;                            // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1WeaponInstantHitComponent*           M1WeaponInstantHit;                                // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SR_1001_C">();
	}
	static class ASR_1001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASR_1001_C>();
	}
};
static_assert(alignof(ASR_1001_C) == 0x000008, "Wrong alignment on ASR_1001_C");
static_assert(sizeof(ASR_1001_C) == 0x000470, "Wrong size on ASR_1001_C");
static_assert(offsetof(ASR_1001_C, M1WeaponMagazineReload) == 0x000460, "Member 'ASR_1001_C::M1WeaponMagazineReload' has a wrong offset!");
static_assert(offsetof(ASR_1001_C, M1WeaponInstantHit) == 0x000468, "Member 'ASR_1001_C::M1WeaponInstantHit' has a wrong offset!");

}

