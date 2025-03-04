#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CursorFocusDecoContent

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CursorFocusDecoContent.UI_CursorFocusDecoContent_C
// 0x0030 (0x0738 - 0x0708)
class UUI_CursorFocusDecoContent_C final : public UM1UIFocusDecoContent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_OverEffect;                                 // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_Deco_Default_Dpad1_Deco_C*   Dpad_Deco;                                         // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fx_Shine_DefaultV;                                 // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Over_Frame;                                        // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          UISelected;                                        // 0x0730(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UIFocused;                                         // 0x0731(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_CursorFocusDecoContent(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CursorFocusDecoContent_C">();
	}
	static class UUI_CursorFocusDecoContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CursorFocusDecoContent_C>();
	}
};
static_assert(alignof(UUI_CursorFocusDecoContent_C) == 0x000008, "Wrong alignment on UUI_CursorFocusDecoContent_C");
static_assert(sizeof(UUI_CursorFocusDecoContent_C) == 0x000738, "Wrong size on UUI_CursorFocusDecoContent_C");
static_assert(offsetof(UUI_CursorFocusDecoContent_C, UberGraphFrame) == 0x000708, "Member 'UUI_CursorFocusDecoContent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_CursorFocusDecoContent_C, UIAnim_OverEffect) == 0x000710, "Member 'UUI_CursorFocusDecoContent_C::UIAnim_OverEffect' has a wrong offset!");
static_assert(offsetof(UUI_CursorFocusDecoContent_C, Dpad_Deco) == 0x000718, "Member 'UUI_CursorFocusDecoContent_C::Dpad_Deco' has a wrong offset!");
static_assert(offsetof(UUI_CursorFocusDecoContent_C, Fx_Shine_DefaultV) == 0x000720, "Member 'UUI_CursorFocusDecoContent_C::Fx_Shine_DefaultV' has a wrong offset!");
static_assert(offsetof(UUI_CursorFocusDecoContent_C, Over_Frame) == 0x000728, "Member 'UUI_CursorFocusDecoContent_C::Over_Frame' has a wrong offset!");
static_assert(offsetof(UUI_CursorFocusDecoContent_C, UISelected) == 0x000730, "Member 'UUI_CursorFocusDecoContent_C::UISelected' has a wrong offset!");
static_assert(offsetof(UUI_CursorFocusDecoContent_C, UIFocused) == 0x000731, "Member 'UUI_CursorFocusDecoContent_C::UIFocused' has a wrong offset!");

}

