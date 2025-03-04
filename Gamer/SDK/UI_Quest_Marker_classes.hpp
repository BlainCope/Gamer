#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Quest_Marker

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Quest_Marker.UI_Quest_Marker_C
// 0x0070 (0x0780 - 0x0710)
class UUI_Quest_Marker_C final : public UM1UIQuestIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0710(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLoop;                                          // 0x0718(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Fx_Character_01;                                   // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fx_field_01;                                       // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fx_main_01;                                        // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fx_Season_01;                                      // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fx_sub_01;                                         // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               UI_Character;                                      // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               UI_Field;                                          // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               UI_InteractNpcIcon;                                // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               UI_Main;                                           // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               UI_Season;                                         // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               UI_Sub;                                            // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1WidgetSwitcher*                      UI_WidgetSwitcher;                                 // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_SetQuestIconType(EM1QuestMarkerIconType InQuestNPCIconType, const bool bIsBeforeStart);
	void ExecuteUbergraph_UI_Quest_Marker(int32 EntryPoint);
	void SetDataImpl(class UM1UIData* InData);
	void SetQuestMarkerIcon(EM1QuestMarkerIconType InQuestTargetState, bool bIsBeforeStart);
	void SetUI_StartMission(EM1QuestType InMission, bool InStart);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Quest_Marker_C">();
	}
	static class UUI_Quest_Marker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Quest_Marker_C>();
	}
};
static_assert(alignof(UUI_Quest_Marker_C) == 0x000008, "Wrong alignment on UUI_Quest_Marker_C");
static_assert(sizeof(UUI_Quest_Marker_C) == 0x000780, "Wrong size on UUI_Quest_Marker_C");
static_assert(offsetof(UUI_Quest_Marker_C, UberGraphFrame) == 0x000710, "Member 'UUI_Quest_Marker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Marker_C, AnimLoop) == 0x000718, "Member 'UUI_Quest_Marker_C::AnimLoop' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Marker_C, Fx_Character_01) == 0x000720, "Member 'UUI_Quest_Marker_C::Fx_Character_01' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Marker_C, Fx_field_01) == 0x000728, "Member 'UUI_Quest_Marker_C::Fx_field_01' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Marker_C, Fx_main_01) == 0x000730, "Member 'UUI_Quest_Marker_C::Fx_main_01' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Marker_C, Fx_Season_01) == 0x000738, "Member 'UUI_Quest_Marker_C::Fx_Season_01' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Marker_C, Fx_sub_01) == 0x000740, "Member 'UUI_Quest_Marker_C::Fx_sub_01' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Marker_C, UI_Character) == 0x000748, "Member 'UUI_Quest_Marker_C::UI_Character' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Marker_C, UI_Field) == 0x000750, "Member 'UUI_Quest_Marker_C::UI_Field' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Marker_C, UI_InteractNpcIcon) == 0x000758, "Member 'UUI_Quest_Marker_C::UI_InteractNpcIcon' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Marker_C, UI_Main) == 0x000760, "Member 'UUI_Quest_Marker_C::UI_Main' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Marker_C, UI_Season) == 0x000768, "Member 'UUI_Quest_Marker_C::UI_Season' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Marker_C, UI_Sub) == 0x000770, "Member 'UUI_Quest_Marker_C::UI_Sub' has a wrong offset!");
static_assert(offsetof(UUI_Quest_Marker_C, UI_WidgetSwitcher) == 0x000778, "Member 'UUI_Quest_Marker_C::UI_WidgetSwitcher' has a wrong offset!");

}

