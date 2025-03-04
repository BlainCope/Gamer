#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameObjectvieInfoList

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameObjectvieInfoList.UI_GameObjectvieInfoList_C
// 0x0040 (0x0768 - 0x0728)
class UUI_GameObjectvieInfoList_C final : public UM1UIQuestTrackerPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_NewSubTask_onoff;                           // 0x0730(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Sub_Out;                                    // 0x0738(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Sub_In;                                     // 0x0740(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Main_Out;                                   // 0x0748(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Main_In;                                    // 0x0750(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_243;                                         // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void WidgetAnimationEvt_UIAnim_Sub_Out_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_UIAnim_Main_Out_K2Node_WidgetAnimationEvent_0();
	void SequenceEvent__ENTRYPOINTUI_GameObjectvieInfoList();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_GameObjectvieInfoList(int32 EntryPoint);
	void BP_UnsetSubTracker();
	void BP_UnsetMainTracker();
	void BP_StartedNewSubQuest();
	void BP_SetSubTracker();
	void BP_SetMainTracker();
	void Bp_Play_Ak_Audio_Event();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameObjectvieInfoList_C">();
	}
	static class UUI_GameObjectvieInfoList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameObjectvieInfoList_C>();
	}
};
static_assert(alignof(UUI_GameObjectvieInfoList_C) == 0x000008, "Wrong alignment on UUI_GameObjectvieInfoList_C");
static_assert(sizeof(UUI_GameObjectvieInfoList_C) == 0x000768, "Wrong size on UUI_GameObjectvieInfoList_C");
static_assert(offsetof(UUI_GameObjectvieInfoList_C, UberGraphFrame) == 0x000728, "Member 'UUI_GameObjectvieInfoList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameObjectvieInfoList_C, UIAnim_NewSubTask_onoff) == 0x000730, "Member 'UUI_GameObjectvieInfoList_C::UIAnim_NewSubTask_onoff' has a wrong offset!");
static_assert(offsetof(UUI_GameObjectvieInfoList_C, UIAnim_Sub_Out) == 0x000738, "Member 'UUI_GameObjectvieInfoList_C::UIAnim_Sub_Out' has a wrong offset!");
static_assert(offsetof(UUI_GameObjectvieInfoList_C, UIAnim_Sub_In) == 0x000740, "Member 'UUI_GameObjectvieInfoList_C::UIAnim_Sub_In' has a wrong offset!");
static_assert(offsetof(UUI_GameObjectvieInfoList_C, UIAnim_Main_Out) == 0x000748, "Member 'UUI_GameObjectvieInfoList_C::UIAnim_Main_Out' has a wrong offset!");
static_assert(offsetof(UUI_GameObjectvieInfoList_C, UIAnim_Main_In) == 0x000750, "Member 'UUI_GameObjectvieInfoList_C::UIAnim_Main_In' has a wrong offset!");
static_assert(offsetof(UUI_GameObjectvieInfoList_C, Image) == 0x000758, "Member 'UUI_GameObjectvieInfoList_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_GameObjectvieInfoList_C, Image_243) == 0x000760, "Member 'UUI_GameObjectvieInfoList_C::Image_243' has a wrong offset!");

}

