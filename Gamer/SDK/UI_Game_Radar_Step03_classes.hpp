#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Radar_Step03

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Game_Radar_Step03.UI_Game_Radar_Step03_C
// 0x0008 (0x0730 - 0x0728)
class UUI_Game_Radar_Step03_C final : public UM1UIGameRadarArea
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void UpdatePanel(bool Invalid, int32 InWarningLevel);
	void State_Setting(bool Valid, int32 Param);
	void ExecuteUbergraph_UI_Game_Radar_Step03(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Game_Radar_Step03_C">();
	}
	static class UUI_Game_Radar_Step03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Game_Radar_Step03_C>();
	}
};
static_assert(alignof(UUI_Game_Radar_Step03_C) == 0x000008, "Wrong alignment on UUI_Game_Radar_Step03_C");
static_assert(sizeof(UUI_Game_Radar_Step03_C) == 0x000730, "Wrong size on UUI_Game_Radar_Step03_C");
static_assert(offsetof(UUI_Game_Radar_Step03_C, UberGraphFrame) == 0x000728, "Member 'UUI_Game_Radar_Step03_C::UberGraphFrame' has a wrong offset!");

}

