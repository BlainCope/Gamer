#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_TargetListItem_Defense

#include "Basic.hpp"

#include "UI_Mission_Task_TargetListItem_Defense_classes.hpp"
#include "UI_Mission_Task_TargetListItem_Defense_parameters.hpp"


namespace SDK
{

// Function UI_Mission_Task_TargetListItem_Defense.UI_Mission_Task_TargetListItem_Defense_C.PlayHitAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Mission_Task_TargetListItem_Defense_C::PlayHitAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_TargetListItem_Defense_C", "PlayHitAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Task_TargetListItem_Defense.UI_Mission_Task_TargetListItem_Defense_C.OnUpdateShieldProgressEvent
// (BlueprintCallable, BlueprintEvent)

void UUI_Mission_Task_TargetListItem_Defense_C::OnUpdateShieldProgressEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_TargetListItem_Defense_C", "OnUpdateShieldProgressEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Task_TargetListItem_Defense.UI_Mission_Task_TargetListItem_Defense_C.OnUpdateHPProgressEvent
// (BlueprintCallable, BlueprintEvent)

void UUI_Mission_Task_TargetListItem_Defense_C::OnUpdateHPProgressEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_TargetListItem_Defense_C", "OnUpdateHPProgressEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Task_TargetListItem_Defense.UI_Mission_Task_TargetListItem_Defense_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_TargetListItem_Defense_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_TargetListItem_Defense_C", "OnListItemObjectSet");

	Params::UI_Mission_Task_TargetListItem_Defense_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Task_TargetListItem_Defense.UI_Mission_Task_TargetListItem_Defense_C.ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_TargetListItem_Defense_C::ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_TargetListItem_Defense_C", "ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense");

	Params::UI_Mission_Task_TargetListItem_Defense_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Defense Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Task_TargetListItem_Defense.UI_Mission_Task_TargetListItem_Defense_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Mission_Task_TargetListItem_Defense_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_TargetListItem_Defense_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

