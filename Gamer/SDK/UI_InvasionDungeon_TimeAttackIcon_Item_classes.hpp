#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InvasionDungeon_TimeAttackIcon_Item

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_InvasionDungeon_TimeAttackIcon_Item.UI_InvasionDungeon_TimeAttackIcon_Item_C
// 0x00F0 (0x0800 - 0x0710)
class UUI_InvasionDungeon_TimeAttackIcon_Item_C final : public UM1UIInvasionDungeonScoreItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0710(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Fail;                                       // 0x0718(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Active;                                     // 0x0720(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Default;                                    // 0x0728(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_124;                                         // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            UISet_Icon;                                        // 0x0740(0x00C0)(Edit, BlueprintVisible)

public:
	void BP_SetState(EM1InvasionDungeonScoreState InState);
	void ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_InvasionDungeon_TimeAttackIcon_Item_C">();
	}
	static class UUI_InvasionDungeon_TimeAttackIcon_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_InvasionDungeon_TimeAttackIcon_Item_C>();
	}
};
static_assert(alignof(UUI_InvasionDungeon_TimeAttackIcon_Item_C) == 0x000010, "Wrong alignment on UUI_InvasionDungeon_TimeAttackIcon_Item_C");
static_assert(sizeof(UUI_InvasionDungeon_TimeAttackIcon_Item_C) == 0x000800, "Wrong size on UUI_InvasionDungeon_TimeAttackIcon_Item_C");
static_assert(offsetof(UUI_InvasionDungeon_TimeAttackIcon_Item_C, UberGraphFrame) == 0x000710, "Member 'UUI_InvasionDungeon_TimeAttackIcon_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_InvasionDungeon_TimeAttackIcon_Item_C, UIAnim_Fail) == 0x000718, "Member 'UUI_InvasionDungeon_TimeAttackIcon_Item_C::UIAnim_Fail' has a wrong offset!");
static_assert(offsetof(UUI_InvasionDungeon_TimeAttackIcon_Item_C, UIAnim_Active) == 0x000720, "Member 'UUI_InvasionDungeon_TimeAttackIcon_Item_C::UIAnim_Active' has a wrong offset!");
static_assert(offsetof(UUI_InvasionDungeon_TimeAttackIcon_Item_C, UIAnim_Default) == 0x000728, "Member 'UUI_InvasionDungeon_TimeAttackIcon_Item_C::UIAnim_Default' has a wrong offset!");
static_assert(offsetof(UUI_InvasionDungeon_TimeAttackIcon_Item_C, Icon) == 0x000730, "Member 'UUI_InvasionDungeon_TimeAttackIcon_Item_C::Icon' has a wrong offset!");
static_assert(offsetof(UUI_InvasionDungeon_TimeAttackIcon_Item_C, Image_124) == 0x000738, "Member 'UUI_InvasionDungeon_TimeAttackIcon_Item_C::Image_124' has a wrong offset!");
static_assert(offsetof(UUI_InvasionDungeon_TimeAttackIcon_Item_C, UISet_Icon) == 0x000740, "Member 'UUI_InvasionDungeon_TimeAttackIcon_Item_C::UISet_Icon' has a wrong offset!");

}

