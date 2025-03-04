#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerCustom_BunnyGauge

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PlayerCustom_BunnyGauge.UI_PlayerCustom_BunnyGauge_C
// 0x0030 (0x0738 - 0x0708)
class UUI_PlayerCustom_BunnyGauge_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                           PB_Bunny_Default;                                  // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           PB_Bunny_Full;                                     // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           PB_Bunny_Normal;                                   // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_State;                                          // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AM1Character*                           OwningCharacter;                                   // 0x0730(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_PlayerCustom_BunnyGauge(int32 EntryPoint);
	void OnChangedCommonGauge(EM1StatType StatType);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PlayerCustom_BunnyGauge_C">();
	}
	static class UUI_PlayerCustom_BunnyGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PlayerCustom_BunnyGauge_C>();
	}
};
static_assert(alignof(UUI_PlayerCustom_BunnyGauge_C) == 0x000008, "Wrong alignment on UUI_PlayerCustom_BunnyGauge_C");
static_assert(sizeof(UUI_PlayerCustom_BunnyGauge_C) == 0x000738, "Wrong size on UUI_PlayerCustom_BunnyGauge_C");
static_assert(offsetof(UUI_PlayerCustom_BunnyGauge_C, UberGraphFrame) == 0x000708, "Member 'UUI_PlayerCustom_BunnyGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_PlayerCustom_BunnyGauge_C, PB_Bunny_Default) == 0x000710, "Member 'UUI_PlayerCustom_BunnyGauge_C::PB_Bunny_Default' has a wrong offset!");
static_assert(offsetof(UUI_PlayerCustom_BunnyGauge_C, PB_Bunny_Full) == 0x000718, "Member 'UUI_PlayerCustom_BunnyGauge_C::PB_Bunny_Full' has a wrong offset!");
static_assert(offsetof(UUI_PlayerCustom_BunnyGauge_C, PB_Bunny_Normal) == 0x000720, "Member 'UUI_PlayerCustom_BunnyGauge_C::PB_Bunny_Normal' has a wrong offset!");
static_assert(offsetof(UUI_PlayerCustom_BunnyGauge_C, WS_State) == 0x000728, "Member 'UUI_PlayerCustom_BunnyGauge_C::WS_State' has a wrong offset!");
static_assert(offsetof(UUI_PlayerCustom_BunnyGauge_C, OwningCharacter) == 0x000730, "Member 'UUI_PlayerCustom_BunnyGauge_C::OwningCharacter' has a wrong offset!");

}

