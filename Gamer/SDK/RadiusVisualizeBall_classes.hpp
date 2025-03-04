#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RadiusVisualizeBall

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass RadiusVisualizeBall.RadiusVisualizeBall_C
// 0x0018 (0x0260 - 0x0248)
class ARadiusVisualizeBall_C final : public AM1AudioActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Ball;                                              // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Radius;                                            // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_RadiusVisualizeBall(int32 EntryPoint);
	void Destroy();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RadiusVisualizeBall_C">();
	}
	static class ARadiusVisualizeBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARadiusVisualizeBall_C>();
	}
};
static_assert(alignof(ARadiusVisualizeBall_C) == 0x000008, "Wrong alignment on ARadiusVisualizeBall_C");
static_assert(sizeof(ARadiusVisualizeBall_C) == 0x000260, "Wrong size on ARadiusVisualizeBall_C");
static_assert(offsetof(ARadiusVisualizeBall_C, UberGraphFrame) == 0x000248, "Member 'ARadiusVisualizeBall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARadiusVisualizeBall_C, Ball) == 0x000250, "Member 'ARadiusVisualizeBall_C::Ball' has a wrong offset!");
static_assert(offsetof(ARadiusVisualizeBall_C, Radius) == 0x000258, "Member 'ARadiusVisualizeBall_C::Radius' has a wrong offset!");

}

