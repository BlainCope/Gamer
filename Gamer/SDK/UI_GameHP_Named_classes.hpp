#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameHP_Named

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameHP_Named.UI_GameHP_Named_C
// 0x00E8 (0x09F8 - 0x0910)
class UUI_GameHP_Named_C final : public UM1UIBossMonsterInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0910(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Immune_End;                                 // 0x0918(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Immune_Loop;                                // 0x0920(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Immune_Start;                               // 0x0928(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANIM_Name;                                         // 0x0930(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANIM_Focus;                                        // 0x0938(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Zero1;                                             // 0x0940(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Zero2;                                             // 0x0948(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Zero3;                                             // 0x0950(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AdvantageIcon;                                     // 0x0958(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Effect;                                            // 0x0960(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Guage_Background;                                  // 0x0968(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Guage_Panel;                                       // 0x0970(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Icon_Property;                                     // 0x0978(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Immune_Panel;                                      // 0x0980(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Info;                                              // 0x0988(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Name_0;                                            // 0x0990(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Panel_ElementalWeakness;                           // 0x0998(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           PB_Guage;                                          // 0x09A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameHP_Boss_Phase_C*                Phase_01;                                          // 0x09A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameHP_Boss_Phase_C*                Phase_02;                                          // 0x09B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameHP_Boss_Phase_C*                Phase_03;                                          // 0x09B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Phase_Panel;                                       // 0x09C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Runaway;                                           // 0x09C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_HP;                                             // 0x09D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Shield;                                         // 0x09D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SW_Panel;                                          // 0x09E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_GAmeHP_Named;                                   // 0x09E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PrevPhaseRemainCount;                              // 0x09F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1MonsterCategory                            NewVar;                                            // 0x09F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateRemainTimeGuage(float DeltaSeconds);
	void StopUpdateRemainTimeGuage();
	void StopPhaseImmune();
	void StartUpdateRemainTimeGuage();
	void SetUIPhaseView(bool In_Phase);
	void SetPhases();
	void RefreshPhaseState(bool bReset);
	void RefreshPhaseProgressBar();
	void RefreshPhaseImmune(bool bReset);
	void PreConstruct(bool IsDesignTime);
	void LoopPhaseImmune();
	bool GetPhasedHP(const struct FM1ScaledInteger& CurrentHp, float* OutRatio);
	void ExecuteUbergraph_UI_GameHP_Named(int32 EntryPoint);
	void Construct();
	void BP_UpdateWeakElementalIcons(const TArray<class UTexture2D*>& WeakElementalIcons);
	void BP_UpdateWeakAdvantageIcon(class UTexture2D* WeakAdvantageIcon);
	void BP_PlayNameAnim(bool bInForwardAnim);
	void BP_PlayFocusAnim(bool bInForwardAnim);
	void BP_OnDeactivateDetectionIndicator();
	void BP_OnBerserkGaugeChanged(float GaugeRatio);
	void BP_OnActivateDetectionIndicator();
	void BP_NotifyTagRemoved(const struct FGameplayTag& Tag);
	void BP_NotifyTagAdded(const struct FGameplayTag& Tag);
	void BP_InitWidgetImpl();
	void BP_InitBossMonsterWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameHP_Named_C">();
	}
	static class UUI_GameHP_Named_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameHP_Named_C>();
	}
};
static_assert(alignof(UUI_GameHP_Named_C) == 0x000008, "Wrong alignment on UUI_GameHP_Named_C");
static_assert(sizeof(UUI_GameHP_Named_C) == 0x0009F8, "Wrong size on UUI_GameHP_Named_C");
static_assert(offsetof(UUI_GameHP_Named_C, UberGraphFrame) == 0x000910, "Member 'UUI_GameHP_Named_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, UIAnim_Immune_End) == 0x000918, "Member 'UUI_GameHP_Named_C::UIAnim_Immune_End' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, UIAnim_Immune_Loop) == 0x000920, "Member 'UUI_GameHP_Named_C::UIAnim_Immune_Loop' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, UIAnim_Immune_Start) == 0x000928, "Member 'UUI_GameHP_Named_C::UIAnim_Immune_Start' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, ANIM_Name) == 0x000930, "Member 'UUI_GameHP_Named_C::ANIM_Name' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, ANIM_Focus) == 0x000938, "Member 'UUI_GameHP_Named_C::ANIM_Focus' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Zero1) == 0x000940, "Member 'UUI_GameHP_Named_C::Zero1' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Zero2) == 0x000948, "Member 'UUI_GameHP_Named_C::Zero2' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Zero3) == 0x000950, "Member 'UUI_GameHP_Named_C::Zero3' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, AdvantageIcon) == 0x000958, "Member 'UUI_GameHP_Named_C::AdvantageIcon' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Effect) == 0x000960, "Member 'UUI_GameHP_Named_C::Effect' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Guage_Background) == 0x000968, "Member 'UUI_GameHP_Named_C::Guage_Background' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Guage_Panel) == 0x000970, "Member 'UUI_GameHP_Named_C::Guage_Panel' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Icon_Property) == 0x000978, "Member 'UUI_GameHP_Named_C::Icon_Property' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Immune_Panel) == 0x000980, "Member 'UUI_GameHP_Named_C::Immune_Panel' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Info) == 0x000988, "Member 'UUI_GameHP_Named_C::Info' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Name_0) == 0x000990, "Member 'UUI_GameHP_Named_C::Name_0' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Panel_ElementalWeakness) == 0x000998, "Member 'UUI_GameHP_Named_C::Panel_ElementalWeakness' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, PB_Guage) == 0x0009A0, "Member 'UUI_GameHP_Named_C::PB_Guage' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Phase_01) == 0x0009A8, "Member 'UUI_GameHP_Named_C::Phase_01' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Phase_02) == 0x0009B0, "Member 'UUI_GameHP_Named_C::Phase_02' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Phase_03) == 0x0009B8, "Member 'UUI_GameHP_Named_C::Phase_03' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Phase_Panel) == 0x0009C0, "Member 'UUI_GameHP_Named_C::Phase_Panel' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, Runaway) == 0x0009C8, "Member 'UUI_GameHP_Named_C::Runaway' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, SB_HP) == 0x0009D0, "Member 'UUI_GameHP_Named_C::SB_HP' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, SB_Shield) == 0x0009D8, "Member 'UUI_GameHP_Named_C::SB_Shield' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, SW_Panel) == 0x0009E0, "Member 'UUI_GameHP_Named_C::SW_Panel' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, VB_GAmeHP_Named) == 0x0009E8, "Member 'UUI_GameHP_Named_C::VB_GAmeHP_Named' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, PrevPhaseRemainCount) == 0x0009F0, "Member 'UUI_GameHP_Named_C::PrevPhaseRemainCount' has a wrong offset!");
static_assert(offsetof(UUI_GameHP_Named_C, NewVar) == 0x0009F4, "Member 'UUI_GameHP_Named_C::NewVar' has a wrong offset!");

}

