#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LNCVestigeProjectile

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LNCVestigeProjectile.LNCVestigeProjectile_C
// 0x0000 (0x0BA0 - 0x0BA0)
class ALNCVestigeProjectile_C final : public AM1AbilityProjectile
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LNCVestigeProjectile_C">();
	}
	static class ALNCVestigeProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALNCVestigeProjectile_C>();
	}
};
static_assert(alignof(ALNCVestigeProjectile_C) == 0x000008, "Wrong alignment on ALNCVestigeProjectile_C");
static_assert(sizeof(ALNCVestigeProjectile_C) == 0x000BA0, "Wrong size on ALNCVestigeProjectile_C");

}

