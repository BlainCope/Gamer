#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameBottom_WeaponInfo_GainAmmo

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameBottom_WeaponInfo_GainAmmo.UI_GameBottom_WeaponInfo_GainAmmo_C
// 0x0018 (0x0730 - 0x0718)
class UUI_GameBottom_WeaponInfo_GainAmmo_C final : public UM1UIGameBottom_WeaponGainAmmo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_114;                                 // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1SpriteImage*                         Image_GainAmmo;                                    // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SequenceEvent__ENTRYPOINTUI_GameBottom_WeaponInfo_GainAmmo();
	void PreConstruct(bool IsDesignTime);
	void PlayAkAudio(class UAkAudioEvent* AkEvent);
	void ExecuteUbergraph_UI_GameBottom_WeaponInfo_GainAmmo(int32 EntryPoint);
	void Construct();
	void BP_SetGainRoundsIcon(EM1RoundsType InRoundType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameBottom_WeaponInfo_GainAmmo_C">();
	}
	static class UUI_GameBottom_WeaponInfo_GainAmmo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameBottom_WeaponInfo_GainAmmo_C>();
	}
};
static_assert(alignof(UUI_GameBottom_WeaponInfo_GainAmmo_C) == 0x000008, "Wrong alignment on UUI_GameBottom_WeaponInfo_GainAmmo_C");
static_assert(sizeof(UUI_GameBottom_WeaponInfo_GainAmmo_C) == 0x000730, "Wrong size on UUI_GameBottom_WeaponInfo_GainAmmo_C");
static_assert(offsetof(UUI_GameBottom_WeaponInfo_GainAmmo_C, UberGraphFrame) == 0x000718, "Member 'UUI_GameBottom_WeaponInfo_GainAmmo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameBottom_WeaponInfo_GainAmmo_C, HorizontalBox_114) == 0x000720, "Member 'UUI_GameBottom_WeaponInfo_GainAmmo_C::HorizontalBox_114' has a wrong offset!");
static_assert(offsetof(UUI_GameBottom_WeaponInfo_GainAmmo_C, Image_GainAmmo) == 0x000728, "Member 'UUI_GameBottom_WeaponInfo_GainAmmo_C::Image_GainAmmo' has a wrong offset!");

}

