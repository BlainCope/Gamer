#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PreviewLevelWeapon

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PreviewLevelWeapon.BP_PreviewLevelWeapon_C
// 0x0010 (0x02F8 - 0x02E8)
class ABP_PreviewLevelWeapon_C final : public AM1ActorPreviewLevel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PreviewLevelWeapon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PreviewLevelWeapon_C">();
	}
	static class ABP_PreviewLevelWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PreviewLevelWeapon_C>();
	}
};
static_assert(alignof(ABP_PreviewLevelWeapon_C) == 0x000008, "Wrong alignment on ABP_PreviewLevelWeapon_C");
static_assert(sizeof(ABP_PreviewLevelWeapon_C) == 0x0002F8, "Wrong size on ABP_PreviewLevelWeapon_C");
static_assert(offsetof(ABP_PreviewLevelWeapon_C, UberGraphFrame) == 0x0002E8, "Member 'ABP_PreviewLevelWeapon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PreviewLevelWeapon_C, DefaultSceneRoot) == 0x0002F0, "Member 'ABP_PreviewLevelWeapon_C::DefaultSceneRoot' has a wrong offset!");

}

