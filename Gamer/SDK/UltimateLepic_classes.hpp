#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UltimateLepic

#include "Basic.hpp"

#include "PlayerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UltimateLepic.UltimateLepic_C
// 0x0000 (0x10D0 - 0x10D0)
class AUltimateLepic_C final : public APlayerBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UltimateLepic_C">();
	}
	static class AUltimateLepic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUltimateLepic_C>();
	}
};
static_assert(alignof(AUltimateLepic_C) == 0x000010, "Wrong alignment on AUltimateLepic_C");
static_assert(sizeof(AUltimateLepic_C) == 0x0010D0, "Wrong size on AUltimateLepic_C");

}

