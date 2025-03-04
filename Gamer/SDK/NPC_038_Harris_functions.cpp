#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_038_Harris

#include "Basic.hpp"

#include "NPC_038_Harris_classes.hpp"
#include "NPC_038_Harris_parameters.hpp"


namespace SDK
{

// Function NPC_038_Harris.NPC_038_Harris_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_038_Harris_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_038_Harris_C", "ReceiveTick");

	Params::NPC_038_Harris_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_038_Harris.NPC_038_Harris_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANPC_038_Harris_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_038_Harris_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_038_Harris.NPC_038_Harris_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ANPC_038_Harris_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_038_Harris_C", "ReceiveActorBeginOverlap");

	Params::NPC_038_Harris_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_038_Harris.NPC_038_Harris_C.ExecuteUbergraph_NPC_038_Harris
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_038_Harris_C::ExecuteUbergraph_NPC_038_Harris(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_038_Harris_C", "ExecuteUbergraph_NPC_038_Harris");

	Params::NPC_038_Harris_C_ExecuteUbergraph_NPC_038_Harris Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

