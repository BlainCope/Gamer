#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_Goals_HUDCenter

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_Goals_HUDCenter.UI_Mission_Task_Goals_HUDCenter_C
// 0x0008 (0x0778 - 0x0770)
class UUI_Mission_Task_Goals_HUDCenter_C final : public UM1UIHUDMissionTaskGoals
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0770(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void SetDataImpl(class UM1UIData* InData);
	void ExecuteUbergraph_UI_Mission_Task_Goals_HUDCenter(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_Goals_HUDCenter_C">();
	}
	static class UUI_Mission_Task_Goals_HUDCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_Goals_HUDCenter_C>();
	}
};
static_assert(alignof(UUI_Mission_Task_Goals_HUDCenter_C) == 0x000008, "Wrong alignment on UUI_Mission_Task_Goals_HUDCenter_C");
static_assert(sizeof(UUI_Mission_Task_Goals_HUDCenter_C) == 0x000778, "Wrong size on UUI_Mission_Task_Goals_HUDCenter_C");
static_assert(offsetof(UUI_Mission_Task_Goals_HUDCenter_C, UberGraphFrame) == 0x000770, "Member 'UUI_Mission_Task_Goals_HUDCenter_C::UberGraphFrame' has a wrong offset!");

}

