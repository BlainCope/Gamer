#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomHead_Child

#include "Basic.hpp"

#include "CustomHead_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass CustomHead_Child.CustomHead_Child_C
// 0x0000 (0x0580 - 0x0580)
class UCustomHead_Child_C final : public UCustomHead_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CustomHead_Child_C">();
	}
	static class UCustomHead_Child_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomHead_Child_C>();
	}
};
static_assert(alignof(UCustomHead_Child_C) == 0x000010, "Wrong alignment on UCustomHead_Child_C");
static_assert(sizeof(UCustomHead_Child_C) == 0x000580, "Wrong size on UCustomHead_Child_C");

}

