#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameCenter

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameCenter.UI_GameCenter_C
// 0x0050 (0x0760 - 0x0710)
class UUI_GameCenter_C final : public UM1UIGameCenter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0710(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_GameCenter_Crosshair_C*             UI_Crosshair;                                      // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameCenter_Distance_C*              UI_Distance;                                       // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameCenter_Floater_C*               UI_FloaterContainer;                               // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameCenter_PerkCustom_C*            UI_GameCenter_PerkCustom;                          // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameCenter_SkillCustom_C*           UI_GameCenter_SkillCustom;                         // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameCenter_Warning_C*               UI_GameCenter_Warning;                             // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameCenter_HitMark_C*               UI_HitMark;                                        // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameCenter_RoundsInfo_C*            UI_RoundsInfo;                                     // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameCenter_WeaponCharge_C*          UI_WeaponCharge;                                   // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_GameCenter(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameCenter_C">();
	}
	static class UUI_GameCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameCenter_C>();
	}
};
static_assert(alignof(UUI_GameCenter_C) == 0x000008, "Wrong alignment on UUI_GameCenter_C");
static_assert(sizeof(UUI_GameCenter_C) == 0x000760, "Wrong size on UUI_GameCenter_C");
static_assert(offsetof(UUI_GameCenter_C, UberGraphFrame) == 0x000710, "Member 'UUI_GameCenter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_C, UI_Crosshair) == 0x000718, "Member 'UUI_GameCenter_C::UI_Crosshair' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_C, UI_Distance) == 0x000720, "Member 'UUI_GameCenter_C::UI_Distance' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_C, UI_FloaterContainer) == 0x000728, "Member 'UUI_GameCenter_C::UI_FloaterContainer' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_C, UI_GameCenter_PerkCustom) == 0x000730, "Member 'UUI_GameCenter_C::UI_GameCenter_PerkCustom' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_C, UI_GameCenter_SkillCustom) == 0x000738, "Member 'UUI_GameCenter_C::UI_GameCenter_SkillCustom' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_C, UI_GameCenter_Warning) == 0x000740, "Member 'UUI_GameCenter_C::UI_GameCenter_Warning' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_C, UI_HitMark) == 0x000748, "Member 'UUI_GameCenter_C::UI_HitMark' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_C, UI_RoundsInfo) == 0x000750, "Member 'UUI_GameCenter_C::UI_RoundsInfo' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_C, UI_WeaponCharge) == 0x000758, "Member 'UUI_GameCenter_C::UI_WeaponCharge' has a wrong offset!");

}

