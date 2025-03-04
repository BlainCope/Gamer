#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HC

#include "Basic.hpp"

#include "UpperBody_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass HC.HC_C
// 0x0000 (0x1C80 - 0x1C80)
class UHC_C : public UUpperBody_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HC_C">();
	}
	static class UHC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHC_C>();
	}
};
static_assert(alignof(UHC_C) == 0x000010, "Wrong alignment on UHC_C");
static_assert(sizeof(UHC_C) == 0x001C80, "Wrong size on UHC_C");

}

