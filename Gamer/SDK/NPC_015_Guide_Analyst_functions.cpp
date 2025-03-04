#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_015_Guide_Analyst

#include "Basic.hpp"

#include "NPC_015_Guide_Analyst_classes.hpp"
#include "NPC_015_Guide_Analyst_parameters.hpp"


namespace SDK
{

// Function NPC_015_Guide_Analyst.NPC_015_Guide_Analyst_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_015_Guide_Analyst_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_015_Guide_Analyst_C", "ReceiveTick");

	Params::NPC_015_Guide_Analyst_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_015_Guide_Analyst.NPC_015_Guide_Analyst_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANPC_015_Guide_Analyst_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_015_Guide_Analyst_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_015_Guide_Analyst.NPC_015_Guide_Analyst_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ANPC_015_Guide_Analyst_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_015_Guide_Analyst_C", "ReceiveActorBeginOverlap");

	Params::NPC_015_Guide_Analyst_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_015_Guide_Analyst.NPC_015_Guide_Analyst_C.ExecuteUbergraph_NPC_015_Guide_Analyst
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_015_Guide_Analyst_C::ExecuteUbergraph_NPC_015_Guide_Analyst(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_015_Guide_Analyst_C", "ExecuteUbergraph_NPC_015_Guide_Analyst");

	Params::NPC_015_Guide_Analyst_C_ExecuteUbergraph_NPC_015_Guide_Analyst Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

