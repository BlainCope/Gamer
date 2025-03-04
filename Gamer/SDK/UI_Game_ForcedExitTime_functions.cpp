#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_ForcedExitTime

#include "Basic.hpp"

#include "UI_Game_ForcedExitTime_classes.hpp"
#include "UI_Game_ForcedExitTime_parameters.hpp"


namespace SDK
{

// Function UI_Game_ForcedExitTime.UI_Game_ForcedExitTime_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_ForcedExitTime_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_ForcedExitTime_C", "OnEventWidgetOpen");

	Params::UI_Game_ForcedExitTime_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_ForcedExitTime.UI_Game_ForcedExitTime_C.ExecuteUbergraph_UI_Game_ForcedExitTime
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_ForcedExitTime_C::ExecuteUbergraph_UI_Game_ForcedExitTime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_ForcedExitTime_C", "ExecuteUbergraph_UI_Game_ForcedExitTime");

	Params::UI_Game_ForcedExitTime_C_ExecuteUbergraph_UI_Game_ForcedExitTime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

