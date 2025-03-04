#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SkillIconEffect

#include "Basic.hpp"

#include "UI_SkillIconEffect_classes.hpp"
#include "UI_SkillIconEffect_parameters.hpp"


namespace SDK
{

// Function UI_SkillIconEffect.UI_SkillIconEffect_C.SetLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SkillIconEffect_C::SetLevel(int32 InLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillIconEffect_C", "SetLevel");

	Params::UI_SkillIconEffect_C_SetLevel Parms{};

	Parms.InLevel = InLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SkillIconEffect.UI_SkillIconEffect_C.SetDisableType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EM1UIActionDisableType                  InDisplayType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SkillIconEffect_C::SetDisableType(EM1UIActionDisableType InDisplayType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillIconEffect_C", "SetDisableType");

	Params::UI_SkillIconEffect_C_SetDisableType Parms{};

	Parms.InDisplayType = InDisplayType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SkillIconEffect.UI_SkillIconEffect_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SkillIconEffect_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillIconEffect_C", "SetDataImpl");

	Params::UI_SkillIconEffect_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SkillIconEffect.UI_SkillIconEffect_C.SequenceEvent__ENTRYPOINTUI_SkillIconEffect_0
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillIconEffect_C::SequenceEvent__ENTRYPOINTUI_SkillIconEffect_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillIconEffect_C", "SequenceEvent__ENTRYPOINTUI_SkillIconEffect_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SkillIconEffect.UI_SkillIconEffect_C.SequenceEvent__ENTRYPOINTUI_SkillIconEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillIconEffect_C::SequenceEvent__ENTRYPOINTUI_SkillIconEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillIconEffect_C", "SequenceEvent__ENTRYPOINTUI_SkillIconEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SkillIconEffect.UI_SkillIconEffect_C.ExecuteUbergraph_UI_SkillIconEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SkillIconEffect_C::ExecuteUbergraph_UI_SkillIconEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillIconEffect_C", "ExecuteUbergraph_UI_SkillIconEffect");

	Params::UI_SkillIconEffect_C_ExecuteUbergraph_UI_SkillIconEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SkillIconEffect.UI_SkillIconEffect_C.BP_playakEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_SkillIconEffect_C::BP_playakEvent(class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillIconEffect_C", "BP_playakEvent");

	Params::UI_SkillIconEffect_C_BP_playakEvent Parms{};

	Parms.AkEvent = AkEvent;

	UObject::ProcessEvent(Func, &Parms);
}

}

