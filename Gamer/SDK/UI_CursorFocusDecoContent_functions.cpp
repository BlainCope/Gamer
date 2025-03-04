#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CursorFocusDecoContent

#include "Basic.hpp"

#include "UI_CursorFocusDecoContent_classes.hpp"
#include "UI_CursorFocusDecoContent_parameters.hpp"


namespace SDK
{

// Function UI_CursorFocusDecoContent.UI_CursorFocusDecoContent_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CursorFocusDecoContent_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CursorFocusDecoContent_C", "PreConstruct");

	Params::UI_CursorFocusDecoContent_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CursorFocusDecoContent.UI_CursorFocusDecoContent_C.ExecuteUbergraph_UI_CursorFocusDecoContent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CursorFocusDecoContent_C::ExecuteUbergraph_UI_CursorFocusDecoContent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CursorFocusDecoContent_C", "ExecuteUbergraph_UI_CursorFocusDecoContent");

	Params::UI_CursorFocusDecoContent_C_ExecuteUbergraph_UI_CursorFocusDecoContent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CursorFocusDecoContent.UI_CursorFocusDecoContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CursorFocusDecoContent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CursorFocusDecoContent_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

