#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_NPC_Timer

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_NPC_Timer.UI_NPC_Timer_C
// 0x0000 (0x0748 - 0x0748)
class UUI_NPC_Timer_C final : public UM1UINpcTimer
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_NPC_Timer_C">();
	}
	static class UUI_NPC_Timer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_NPC_Timer_C>();
	}
};
static_assert(alignof(UUI_NPC_Timer_C) == 0x000008, "Wrong alignment on UUI_NPC_Timer_C");
static_assert(sizeof(UUI_NPC_Timer_C) == 0x000748, "Wrong size on UUI_NPC_Timer_C");

}

