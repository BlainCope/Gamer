#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_019_Transportstorage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_NpcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_019_Transportstorage.NPC_019_Transportstorage_C
// 0x0010 (0x07B0 - 0x07A0)
class ANPC_019_Transportstorage_C final : public ABP_NpcBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_NPC_019_Transportstorage_C;         // 0x0798(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   ChildActorComponent;                               // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_NPC_019_Transportstorage(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_019_Transportstorage_C">();
	}
	static class ANPC_019_Transportstorage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_019_Transportstorage_C>();
	}
};
static_assert(alignof(ANPC_019_Transportstorage_C) == 0x000010, "Wrong alignment on ANPC_019_Transportstorage_C");
static_assert(sizeof(ANPC_019_Transportstorage_C) == 0x0007B0, "Wrong size on ANPC_019_Transportstorage_C");
static_assert(offsetof(ANPC_019_Transportstorage_C, UberGraphFrame_NPC_019_Transportstorage_C) == 0x000798, "Member 'ANPC_019_Transportstorage_C::UberGraphFrame_NPC_019_Transportstorage_C' has a wrong offset!");
static_assert(offsetof(ANPC_019_Transportstorage_C, ChildActorComponent) == 0x0007A0, "Member 'ANPC_019_Transportstorage_C::ChildActorComponent' has a wrong offset!");

}

