#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_FC_DestructionVulgus_HUDCenter

#include "Basic.hpp"

#include "UI_Mission_Task_FC_DestructionVulgus_HUDCenter_classes.hpp"
#include "UI_Mission_Task_FC_DestructionVulgus_HUDCenter_parameters.hpp"


namespace SDK
{

// Function UI_Mission_Task_FC_DestructionVulgus_HUDCenter.UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C", "OnEventWidgetOpen");

	Params::UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Task_FC_DestructionVulgus_HUDCenter.UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C.OnEventWidgetClose
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C::OnEventWidgetClose(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C", "OnEventWidgetClose");

	Params::UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C_OnEventWidgetClose Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Task_FC_DestructionVulgus_HUDCenter.UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C.Finished_533FADD048AC46CCA06DB3A6EEBCCA4B
// (BlueprintCallable, BlueprintEvent)

void UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C::Finished_533FADD048AC46CCA06DB3A6EEBCCA4B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C", "Finished_533FADD048AC46CCA06DB3A6EEBCCA4B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Task_FC_DestructionVulgus_HUDCenter.UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C.ExecuteUbergraph_UI_Mission_Task_FC_DestructionVulgus_HUDCenter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C::ExecuteUbergraph_UI_Mission_Task_FC_DestructionVulgus_HUDCenter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C", "ExecuteUbergraph_UI_Mission_Task_FC_DestructionVulgus_HUDCenter");

	Params::UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_FC_DestructionVulgus_HUDCenter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Task_FC_DestructionVulgus_HUDCenter.UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C.BP_ShowWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInShow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_FC_DestructionVulgus_HUDCenter_C::BP_ShowWidget(bool bInShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C", "BP_ShowWidget");

	Params::UI_Mission_Task_FC_DestructionVulgus_HUDCenter_C_BP_ShowWidget Parms{};

	Parms.bInShow = bInShow;

	UObject::ProcessEvent(Func, &Parms);
}

}

