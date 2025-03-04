#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Currency

#include "Basic.hpp"

#include "UI_Currency_classes.hpp"
#include "UI_Currency_parameters.hpp"


namespace SDK
{

// Function UI_Currency.UI_Currency_C.BP_SetAmountColor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnough                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Currency_C::BP_SetAmountColor(bool bEnough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Currency_C", "BP_SetAmountColor");

	Params::UI_Currency_C_BP_SetAmountColor Parms{};

	Parms.bEnough = bEnough;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Currency.UI_Currency_C.BP_ShowBackgroundImage
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bShouldShow                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Currency_C::BP_ShowBackgroundImage(bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Currency_C", "BP_ShowBackgroundImage");

	Params::UI_Currency_C_BP_ShowBackgroundImage Parms{};

	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Currency.UI_Currency_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Currency_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Currency_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Currency.UI_Currency_C.ExecuteUbergraph_UI_Currency
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Currency_C::ExecuteUbergraph_UI_Currency(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Currency_C", "ExecuteUbergraph_UI_Currency");

	Params::UI_Currency_C_ExecuteUbergraph_UI_Currency Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Currency.UI_Currency_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Currency_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Currency_C", "PreConstruct");

	Params::UI_Currency_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Currency.UI_Currency_C.Set View Img Discount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    View_Discount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Currency_C::Set_View_Img_Discount(bool View_Discount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Currency_C", "Set View Img Discount");

	Params::UI_Currency_C_Set_View_Img_Discount Parms{};

	Parms.View_Discount = View_Discount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Currency.UI_Currency_C.SetIconSize
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Currency_C::SetIconSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Currency_C", "SetIconSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Currency.UI_Currency_C.SetIconVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Currency_C::SetIconVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Currency_C", "SetIconVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Currency.UI_Currency_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enough                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Currency_C::SetTextColor(bool Enough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Currency_C", "SetTextColor");

	Params::UI_Currency_C_SetTextColor Parms{};

	Parms.Enough = Enough;

	UObject::ProcessEvent(Func, &Parms);
}

}

