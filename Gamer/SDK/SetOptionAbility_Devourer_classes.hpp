#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SetOptionAbility_Devourer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SetOptionAbility_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SetOptionAbility_Devourer.SetOptionAbility_Devourer_C
// 0x0018 (0x02F0 - 0x02D8)
class USetOptionAbility_Devourer_C final : public USetOptionAbility_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SetOptionAbility_Devourer_C;        // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        MinimumCurrentHPRatio;                             // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxHPRatioForIncreaseATK;                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnActivated();
	void BP_OnDeactivated(bool bCancelled);
	void ExecuteUbergraph_SetOptionAbility_Devourer(int32 EntryPoint);
	void IsWeaponDamage(const struct FM1AbilityEventDataHandle& EventData, bool* bResult);
	void MakeHPRatioOpParam(struct FM1AbilityOperationParam* OpParam);
	void OnChange_6368A3514F8AD1BF1BFB47AA81018F48(const struct FM1ScaledInteger& Value);
	void OnChange_F1D56B70417645B28F194BBB094FE818(const struct FM1ScaledInteger& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SetOptionAbility_Devourer_C">();
	}
	static class USetOptionAbility_Devourer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USetOptionAbility_Devourer_C>();
	}
};
static_assert(alignof(USetOptionAbility_Devourer_C) == 0x000008, "Wrong alignment on USetOptionAbility_Devourer_C");
static_assert(sizeof(USetOptionAbility_Devourer_C) == 0x0002F0, "Wrong size on USetOptionAbility_Devourer_C");
static_assert(offsetof(USetOptionAbility_Devourer_C, UberGraphFrame_SetOptionAbility_Devourer_C) == 0x0002D8, "Member 'USetOptionAbility_Devourer_C::UberGraphFrame_SetOptionAbility_Devourer_C' has a wrong offset!");
static_assert(offsetof(USetOptionAbility_Devourer_C, MinimumCurrentHPRatio) == 0x0002E0, "Member 'USetOptionAbility_Devourer_C::MinimumCurrentHPRatio' has a wrong offset!");
static_assert(offsetof(USetOptionAbility_Devourer_C, MaxHPRatioForIncreaseATK) == 0x0002E8, "Member 'USetOptionAbility_Devourer_C::MaxHPRatioForIncreaseATK' has a wrong offset!");

}

