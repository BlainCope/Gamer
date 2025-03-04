#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterPreviewStageInventory

#include "Basic.hpp"

#include "BP_CharacterPreviewStageInventory_classes.hpp"
#include "BP_CharacterPreviewStageInventory_parameters.hpp"


namespace SDK
{

// Function BP_CharacterPreviewStageInventory.BP_CharacterPreviewStageInventory_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterPreviewStageInventory_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterPreviewStageInventory_C", "ReceiveTick");

	Params::BP_CharacterPreviewStageInventory_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterPreviewStageInventory.BP_CharacterPreviewStageInventory_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterPreviewStageInventory_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterPreviewStageInventory_C", "ReceiveEndPlay");

	Params::BP_CharacterPreviewStageInventory_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterPreviewStageInventory.BP_CharacterPreviewStageInventory_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CharacterPreviewStageInventory_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterPreviewStageInventory_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharacterPreviewStageInventory.BP_CharacterPreviewStageInventory_C.ExecuteUbergraph_BP_CharacterPreviewStageInventory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterPreviewStageInventory_C::ExecuteUbergraph_BP_CharacterPreviewStageInventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterPreviewStageInventory_C", "ExecuteUbergraph_BP_CharacterPreviewStageInventory");

	Params::BP_CharacterPreviewStageInventory_C_ExecuteUbergraph_BP_CharacterPreviewStageInventory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterPreviewStageInventory.BP_CharacterPreviewStageInventory_C.BP_UpdatePreviewingActor
// (Event, Protected, BlueprintEvent)

void ABP_CharacterPreviewStageInventory_C::BP_UpdatePreviewingActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterPreviewStageInventory_C", "BP_UpdatePreviewingActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharacterPreviewStageInventory.BP_CharacterPreviewStageInventory_C.GetViewTargets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>                   ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class AActor*> ABP_CharacterPreviewStageInventory_C::GetViewTargets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterPreviewStageInventory_C", "GetViewTargets");

	Params::BP_CharacterPreviewStageInventory_C_GetViewTargets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_CharacterPreviewStageInventory.BP_CharacterPreviewStageInventory_C.BP_GetCameraComponent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCineCameraComponent*             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UCineCameraComponent* ABP_CharacterPreviewStageInventory_C::BP_GetCameraComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterPreviewStageInventory_C", "BP_GetCameraComponent");

	Params::BP_CharacterPreviewStageInventory_C_BP_GetCameraComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

