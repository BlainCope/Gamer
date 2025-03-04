#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameTop_Levelup_Stat

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameTop_Levelup_Stat.UI_GameTop_Levelup_Stat_C
// 0x0010 (0x0728 - 0x0718)
class UUI_GameTop_Levelup_Stat_C final : public UM1UIGameTop_LevelUpStat
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_AnimOpen;                                       // 0x0720(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void PlayStatOpenAnim(double InDelay);
	void ExecuteUbergraph_UI_GameTop_Levelup_Stat(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameTop_Levelup_Stat_C">();
	}
	static class UUI_GameTop_Levelup_Stat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameTop_Levelup_Stat_C>();
	}
};
static_assert(alignof(UUI_GameTop_Levelup_Stat_C) == 0x000008, "Wrong alignment on UUI_GameTop_Levelup_Stat_C");
static_assert(sizeof(UUI_GameTop_Levelup_Stat_C) == 0x000728, "Wrong size on UUI_GameTop_Levelup_Stat_C");
static_assert(offsetof(UUI_GameTop_Levelup_Stat_C, UberGraphFrame) == 0x000718, "Member 'UUI_GameTop_Levelup_Stat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameTop_Levelup_Stat_C, UI_AnimOpen) == 0x000720, "Member 'UUI_GameTop_Levelup_Stat_C::UI_AnimOpen' has a wrong offset!");

}

