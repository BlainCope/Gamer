#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_036_InstanceDungeondevice

#include "Basic.hpp"

#include "AnimBP_NPC_036_InstanceDungeondevice_classes.hpp"
#include "AnimBP_NPC_036_InstanceDungeondevice_parameters.hpp"


namespace SDK
{

// Function AnimBP_NPC_036_InstanceDungeondevice.AnimBP_NPC_036_InstanceDungeondevice_C.ExecuteUbergraph_AnimBP_NPC_036_InstanceDungeondevice
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_NPC_036_InstanceDungeondevice_C::ExecuteUbergraph_AnimBP_NPC_036_InstanceDungeondevice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_036_InstanceDungeondevice_C", "ExecuteUbergraph_AnimBP_NPC_036_InstanceDungeondevice");

	Params::AnimBP_NPC_036_InstanceDungeondevice_C_ExecuteUbergraph_AnimBP_NPC_036_InstanceDungeondevice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_NPC_036_InstanceDungeondevice.AnimBP_NPC_036_InstanceDungeondevice_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_NPC_036_InstanceDungeondevice_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_036_InstanceDungeondevice_C", "AnimGraph");

	Params::AnimBP_NPC_036_InstanceDungeondevice_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

