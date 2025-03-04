#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Gley

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlayerNpcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_Gley.NPC_Gley_C
// 0x0010 (0x0870 - 0x0860)
class ANPC_Gley_C final : public ABP_PlayerNpcBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0860(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   ChildActorComponent;                               // 0x0868(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_NPC_Gley(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_Gley_C">();
	}
	static class ANPC_Gley_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_Gley_C>();
	}
};
static_assert(alignof(ANPC_Gley_C) == 0x000010, "Wrong alignment on ANPC_Gley_C");
static_assert(sizeof(ANPC_Gley_C) == 0x000870, "Wrong size on ANPC_Gley_C");
static_assert(offsetof(ANPC_Gley_C, UberGraphFrame) == 0x000860, "Member 'ANPC_Gley_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANPC_Gley_C, ChildActorComponent) == 0x000868, "Member 'ANPC_Gley_C::ChildActorComponent' has a wrong offset!");

}

