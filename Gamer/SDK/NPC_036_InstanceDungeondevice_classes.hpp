#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_036_InstanceDungeondevice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_NpcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_036_InstanceDungeondevice.NPC_036_InstanceDungeondevice_C
// 0x0040 (0x07E0 - 0x07A0)
class ANPC_036_InstanceDungeondevice_C final : public ABP_NpcBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_NPC_036_InstanceDungeondevice_C;    // 0x0798(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_NPC_005_01_Screen;                              // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_NPC_005_01;                                     // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActorComponent;                               // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        CamSequenceForDialogueScene_0;                     // 0x07B8(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_NPC_036_InstanceDungeondevice(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_036_InstanceDungeondevice_C">();
	}
	static class ANPC_036_InstanceDungeondevice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_036_InstanceDungeondevice_C>();
	}
};
static_assert(alignof(ANPC_036_InstanceDungeondevice_C) == 0x000010, "Wrong alignment on ANPC_036_InstanceDungeondevice_C");
static_assert(sizeof(ANPC_036_InstanceDungeondevice_C) == 0x0007E0, "Wrong size on ANPC_036_InstanceDungeondevice_C");
static_assert(offsetof(ANPC_036_InstanceDungeondevice_C, UberGraphFrame_NPC_036_InstanceDungeondevice_C) == 0x000798, "Member 'ANPC_036_InstanceDungeondevice_C::UberGraphFrame_NPC_036_InstanceDungeondevice_C' has a wrong offset!");
static_assert(offsetof(ANPC_036_InstanceDungeondevice_C, NS_NPC_005_01_Screen) == 0x0007A0, "Member 'ANPC_036_InstanceDungeondevice_C::NS_NPC_005_01_Screen' has a wrong offset!");
static_assert(offsetof(ANPC_036_InstanceDungeondevice_C, NS_NPC_005_01) == 0x0007A8, "Member 'ANPC_036_InstanceDungeondevice_C::NS_NPC_005_01' has a wrong offset!");
static_assert(offsetof(ANPC_036_InstanceDungeondevice_C, ChildActorComponent) == 0x0007B0, "Member 'ANPC_036_InstanceDungeondevice_C::ChildActorComponent' has a wrong offset!");
static_assert(offsetof(ANPC_036_InstanceDungeondevice_C, CamSequenceForDialogueScene_0) == 0x0007B8, "Member 'ANPC_036_InstanceDungeondevice_C::CamSequenceForDialogueScene_0' has a wrong offset!");

}

