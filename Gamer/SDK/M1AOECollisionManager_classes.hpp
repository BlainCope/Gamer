#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M1AOECollisionManager

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "M1Data_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "M1_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass M1AOECollisionManager.M1AOECollisionManager_C
// 0x0108 (0x0130 - 0x0028)
class UM1AOECollisionManager_C final : public UObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AM1AbilityActor*                        OwnerActor;                                        // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UPrimitiveComponent*                    PrimitiveComp;                                     // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EM1RelationsCheckType                         RelationsType;                                     // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  SEForwardingContextTags;                           // 0x0048(0x0020)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FGameplayTagContainer                  SEInvokeTags;                                      // 0x0068(0x0020)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class AActor*>                         OverlapActors;                                     // 0x0088(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TMap<class AActor*, struct FM1AbilityId>      InvokedSEActors;                                   // 0x0098(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	float                                         Period;                                            // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  PeriodOpTags;                                      // 0x00F0(0x0020)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                   PeriodHitFXName;                                   // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bStartOverlap;                                     // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bNeedEndSE;                                        // 0x0119(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_11A[0x6];                                      // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPeriodEvent;                                     // 0x0120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BeginOverlapEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void EndOverlapEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_M1AOECollisionManager(int32 EntryPoint);
	void GetOverlapActors(TArray<class AActor*>* OverlapActors_0);
	void Init();
	void OnPeriod();
	void OnPeriodEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M1AOECollisionManager_C">();
	}
	static class UM1AOECollisionManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM1AOECollisionManager_C>();
	}
};
static_assert(alignof(UM1AOECollisionManager_C) == 0x000008, "Wrong alignment on UM1AOECollisionManager_C");
static_assert(sizeof(UM1AOECollisionManager_C) == 0x000130, "Wrong size on UM1AOECollisionManager_C");
static_assert(offsetof(UM1AOECollisionManager_C, UberGraphFrame) == 0x000028, "Member 'UM1AOECollisionManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UM1AOECollisionManager_C, OwnerActor) == 0x000030, "Member 'UM1AOECollisionManager_C::OwnerActor' has a wrong offset!");
static_assert(offsetof(UM1AOECollisionManager_C, PrimitiveComp) == 0x000038, "Member 'UM1AOECollisionManager_C::PrimitiveComp' has a wrong offset!");
static_assert(offsetof(UM1AOECollisionManager_C, RelationsType) == 0x000040, "Member 'UM1AOECollisionManager_C::RelationsType' has a wrong offset!");
static_assert(offsetof(UM1AOECollisionManager_C, SEForwardingContextTags) == 0x000048, "Member 'UM1AOECollisionManager_C::SEForwardingContextTags' has a wrong offset!");
static_assert(offsetof(UM1AOECollisionManager_C, SEInvokeTags) == 0x000068, "Member 'UM1AOECollisionManager_C::SEInvokeTags' has a wrong offset!");
static_assert(offsetof(UM1AOECollisionManager_C, OverlapActors) == 0x000088, "Member 'UM1AOECollisionManager_C::OverlapActors' has a wrong offset!");
static_assert(offsetof(UM1AOECollisionManager_C, InvokedSEActors) == 0x000098, "Member 'UM1AOECollisionManager_C::InvokedSEActors' has a wrong offset!");
static_assert(offsetof(UM1AOECollisionManager_C, Period) == 0x0000E8, "Member 'UM1AOECollisionManager_C::Period' has a wrong offset!");
static_assert(offsetof(UM1AOECollisionManager_C, PeriodOpTags) == 0x0000F0, "Member 'UM1AOECollisionManager_C::PeriodOpTags' has a wrong offset!");
static_assert(offsetof(UM1AOECollisionManager_C, PeriodHitFXName) == 0x000110, "Member 'UM1AOECollisionManager_C::PeriodHitFXName' has a wrong offset!");
static_assert(offsetof(UM1AOECollisionManager_C, bStartOverlap) == 0x000118, "Member 'UM1AOECollisionManager_C::bStartOverlap' has a wrong offset!");
static_assert(offsetof(UM1AOECollisionManager_C, bNeedEndSE) == 0x000119, "Member 'UM1AOECollisionManager_C::bNeedEndSE' has a wrong offset!");
static_assert(offsetof(UM1AOECollisionManager_C, OnPeriodEvent) == 0x000120, "Member 'UM1AOECollisionManager_C::OnPeriodEvent' has a wrong offset!");

}

