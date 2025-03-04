#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ActionIcon_Stack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ActionIcon_Stack.UI_ActionIcon_Stack_C
// 0x0030 (0x0280 - 0x0250)
class UUI_ActionIcon_Stack_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_275;                                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_0;                                        // 0x0260(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Stack_Position;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_Stack;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Skill_Type_Index;                                  // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetUIStackText(const class FText& InText);
	void SetUIStackScale(int32 Skill_Type_Index_0);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ActionIcon_Stack(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ActionIcon_Stack_C">();
	}
	static class UUI_ActionIcon_Stack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ActionIcon_Stack_C>();
	}
};
static_assert(alignof(UUI_ActionIcon_Stack_C) == 0x000008, "Wrong alignment on UUI_ActionIcon_Stack_C");
static_assert(sizeof(UUI_ActionIcon_Stack_C) == 0x000280, "Wrong size on UUI_ActionIcon_Stack_C");
static_assert(offsetof(UUI_ActionIcon_Stack_C, UberGraphFrame) == 0x000250, "Member 'UUI_ActionIcon_Stack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ActionIcon_Stack_C, Image_275) == 0x000258, "Member 'UUI_ActionIcon_Stack_C::Image_275' has a wrong offset!");
static_assert(offsetof(UUI_ActionIcon_Stack_C, ScaleBox_0) == 0x000260, "Member 'UUI_ActionIcon_Stack_C::ScaleBox_0' has a wrong offset!");
static_assert(offsetof(UUI_ActionIcon_Stack_C, Stack_Position) == 0x000268, "Member 'UUI_ActionIcon_Stack_C::Stack_Position' has a wrong offset!");
static_assert(offsetof(UUI_ActionIcon_Stack_C, TB_Stack) == 0x000270, "Member 'UUI_ActionIcon_Stack_C::TB_Stack' has a wrong offset!");
static_assert(offsetof(UUI_ActionIcon_Stack_C, Skill_Type_Index) == 0x000278, "Member 'UUI_ActionIcon_Stack_C::Skill_Type_Index' has a wrong offset!");

}

