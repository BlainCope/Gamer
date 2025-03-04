#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkAbility_7_NazestrasDevotion

#include "Basic.hpp"

#include "PerkAbility_7_NazestrasDevotion_classes.hpp"
#include "PerkAbility_7_NazestrasDevotion_parameters.hpp"


namespace SDK
{

// Function PerkAbility_7_NazestrasDevotion.PerkAbility_7_NazestrasDevotion_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UPerkAbility_7_NazestrasDevotion_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkAbility_7_NazestrasDevotion_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkAbility_7_NazestrasDevotion.PerkAbility_7_NazestrasDevotion_C.ExecuteUbergraph_PerkAbility_7_NazestrasDevotion
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkAbility_7_NazestrasDevotion_C::ExecuteUbergraph_PerkAbility_7_NazestrasDevotion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkAbility_7_NazestrasDevotion_C", "ExecuteUbergraph_PerkAbility_7_NazestrasDevotion");

	Params::PerkAbility_7_NazestrasDevotion_C_ExecuteUbergraph_PerkAbility_7_NazestrasDevotion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkAbility_7_NazestrasDevotion.PerkAbility_7_NazestrasDevotion_C.OnAbilityEvent_DB23546B4B75BDEDCCAD38986FFB649E
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPerkAbility_7_NazestrasDevotion_C::OnAbilityEvent_DB23546B4B75BDEDCCAD38986FFB649E(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkAbility_7_NazestrasDevotion_C", "OnAbilityEvent_DB23546B4B75BDEDCCAD38986FFB649E");

	Params::PerkAbility_7_NazestrasDevotion_C_OnAbilityEvent_DB23546B4B75BDEDCCAD38986FFB649E Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkAbility_7_NazestrasDevotion.PerkAbility_7_NazestrasDevotion_C.OnEvent_99BD73234FC3B7231488379A1429A84E
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1CalcDamageInfo                DamageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UPerkAbility_7_NazestrasDevotion_C::OnEvent_99BD73234FC3B7231488379A1429A84E(const struct FM1CalcDamageInfo& DamageInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkAbility_7_NazestrasDevotion_C", "OnEvent_99BD73234FC3B7231488379A1429A84E");

	Params::PerkAbility_7_NazestrasDevotion_C_OnEvent_99BD73234FC3B7231488379A1429A84E Parms{};

	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

