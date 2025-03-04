#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_019_Postbox

#include "Basic.hpp"

#include "NPC_019_Postbox_classes.hpp"
#include "NPC_019_Postbox_parameters.hpp"


namespace SDK
{

// Function NPC_019_Postbox.NPC_019_Postbox_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_019_Postbox_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_019_Postbox_C", "ReceiveTick");

	Params::NPC_019_Postbox_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_019_Postbox.NPC_019_Postbox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANPC_019_Postbox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_019_Postbox_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_019_Postbox.NPC_019_Postbox_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ANPC_019_Postbox_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_019_Postbox_C", "ReceiveActorBeginOverlap");

	Params::NPC_019_Postbox_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_019_Postbox.NPC_019_Postbox_C.ExecuteUbergraph_NPC_019_Postbox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_019_Postbox_C::ExecuteUbergraph_NPC_019_Postbox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_019_Postbox_C", "ExecuteUbergraph_NPC_019_Postbox");

	Params::NPC_019_Postbox_C_ExecuteUbergraph_NPC_019_Postbox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

