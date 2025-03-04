#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_008_Deslin

#include "Basic.hpp"

#include "NPC_008_Deslin_classes.hpp"
#include "NPC_008_Deslin_parameters.hpp"


namespace SDK
{

// Function NPC_008_Deslin.NPC_008_Deslin_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_008_Deslin_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_008_Deslin_C", "ReceiveTick");

	Params::NPC_008_Deslin_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_008_Deslin.NPC_008_Deslin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANPC_008_Deslin_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_008_Deslin_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_008_Deslin.NPC_008_Deslin_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ANPC_008_Deslin_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_008_Deslin_C", "ReceiveActorBeginOverlap");

	Params::NPC_008_Deslin_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_008_Deslin.NPC_008_Deslin_C.ExecuteUbergraph_NPC_008_Deslin
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_008_Deslin_C::ExecuteUbergraph_NPC_008_Deslin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_008_Deslin_C", "ExecuteUbergraph_NPC_008_Deslin");

	Params::NPC_008_Deslin_C_ExecuteUbergraph_NPC_008_Deslin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

