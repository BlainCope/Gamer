#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_MonsterGroup

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "M1Data_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_MonsterGroup.UI_Mission_MonsterGroup_C
// 0x0018 (0x0720 - 0x0708)
class UUI_Mission_MonsterGroup_C final : public UM1UIWidget
{
public:
	class UHorizontalBox*                         Darkness;                                          // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Faithful;                                          // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Immotal;                                           // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetLegionCategory(TArray<EM1LegionCategory>& InLegionCategory);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_MonsterGroup_C">();
	}
	static class UUI_Mission_MonsterGroup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_MonsterGroup_C>();
	}
};
static_assert(alignof(UUI_Mission_MonsterGroup_C) == 0x000008, "Wrong alignment on UUI_Mission_MonsterGroup_C");
static_assert(sizeof(UUI_Mission_MonsterGroup_C) == 0x000720, "Wrong size on UUI_Mission_MonsterGroup_C");
static_assert(offsetof(UUI_Mission_MonsterGroup_C, Darkness) == 0x000708, "Member 'UUI_Mission_MonsterGroup_C::Darkness' has a wrong offset!");
static_assert(offsetof(UUI_Mission_MonsterGroup_C, Faithful) == 0x000710, "Member 'UUI_Mission_MonsterGroup_C::Faithful' has a wrong offset!");
static_assert(offsetof(UUI_Mission_MonsterGroup_C, Immotal) == 0x000718, "Member 'UUI_Mission_MonsterGroup_C::Immotal' has a wrong offset!");

}

