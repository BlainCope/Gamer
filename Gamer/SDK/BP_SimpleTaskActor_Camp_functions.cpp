#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SimpleTaskActor_Camp

#include "Basic.hpp"

#include "BP_SimpleTaskActor_Camp_classes.hpp"
#include "BP_SimpleTaskActor_Camp_parameters.hpp"


namespace SDK
{

// Function BP_SimpleTaskActor_Camp.BP_SimpleTaskActor_Camp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SimpleTaskActor_Camp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleTaskActor_Camp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SimpleTaskActor_Camp.BP_SimpleTaskActor_Camp_C.ExecuteUbergraph_BP_SimpleTaskActor_Camp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimpleTaskActor_Camp_C::ExecuteUbergraph_BP_SimpleTaskActor_Camp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleTaskActor_Camp_C", "ExecuteUbergraph_BP_SimpleTaskActor_Camp");

	Params::BP_SimpleTaskActor_Camp_C_ExecuteUbergraph_BP_SimpleTaskActor_Camp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

