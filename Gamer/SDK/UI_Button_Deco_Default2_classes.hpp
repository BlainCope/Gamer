#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Button_Deco_Default2

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Button_Deco_Default2.UI_Button_Deco_Default2_C
// 0x0038 (0x0740 - 0x0708)
class UUI_Button_Deco_Default2_C final : public UM1UIButtonDeco
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Press;                                      // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_OverEffect;                                 // 0x0718(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Over;                                       // 0x0720(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Fx_Shine_DefaultV;                                 // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Over_Frame;                                        // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          UISelected;                                        // 0x0738(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UIFocused;                                         // 0x0739(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Button_Deco_Default2(int32 EntryPoint);
	void Construct();
	void BP_Selected(bool InSelected);
	void BP_ChangeButtonUI(EM1ButtonUIType InType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Button_Deco_Default2_C">();
	}
	static class UUI_Button_Deco_Default2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Button_Deco_Default2_C>();
	}
};
static_assert(alignof(UUI_Button_Deco_Default2_C) == 0x000008, "Wrong alignment on UUI_Button_Deco_Default2_C");
static_assert(sizeof(UUI_Button_Deco_Default2_C) == 0x000740, "Wrong size on UUI_Button_Deco_Default2_C");
static_assert(offsetof(UUI_Button_Deco_Default2_C, UberGraphFrame) == 0x000708, "Member 'UUI_Button_Deco_Default2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Button_Deco_Default2_C, UIAnim_Press) == 0x000710, "Member 'UUI_Button_Deco_Default2_C::UIAnim_Press' has a wrong offset!");
static_assert(offsetof(UUI_Button_Deco_Default2_C, UIAnim_OverEffect) == 0x000718, "Member 'UUI_Button_Deco_Default2_C::UIAnim_OverEffect' has a wrong offset!");
static_assert(offsetof(UUI_Button_Deco_Default2_C, UIAnim_Over) == 0x000720, "Member 'UUI_Button_Deco_Default2_C::UIAnim_Over' has a wrong offset!");
static_assert(offsetof(UUI_Button_Deco_Default2_C, Fx_Shine_DefaultV) == 0x000728, "Member 'UUI_Button_Deco_Default2_C::Fx_Shine_DefaultV' has a wrong offset!");
static_assert(offsetof(UUI_Button_Deco_Default2_C, Over_Frame) == 0x000730, "Member 'UUI_Button_Deco_Default2_C::Over_Frame' has a wrong offset!");
static_assert(offsetof(UUI_Button_Deco_Default2_C, UISelected) == 0x000738, "Member 'UUI_Button_Deco_Default2_C::UISelected' has a wrong offset!");
static_assert(offsetof(UUI_Button_Deco_Default2_C, UIFocused) == 0x000739, "Member 'UUI_Button_Deco_Default2_C::UIFocused' has a wrong offset!");

}

