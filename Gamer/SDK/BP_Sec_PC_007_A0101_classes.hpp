#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sec_PC_007_A0101

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "M1AnimPhys_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_Sec_PC_007_A0101.BP_Sec_PC_007_A0101_C
// 0x5960 (0x5C80 - 0x0320)
class UBP_Sec_PC_007_A0101_C final : public UAnimInstance
{
public:
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0328(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0330(0x0008)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0338(0x00C8)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_22;                       // 0x0400(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_21;                       // 0x07D0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_20;                       // 0x0BA0(0x03D0)()
	struct FM1AnimNode_ApplyFacialAdditive        M1AnimGraphNode_ApplyFacialAdditive;               // 0x0F70(0x0098)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1008(0x0020)()
	uint8                                         Pad_1028[0x8];                                     // 0x1028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_19;                       // 0x1030(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_18;                       // 0x1400(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_17;                       // 0x17D0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_16;                       // 0x1BA0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_15;                       // 0x1F70(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_14;                       // 0x2340(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_13;                       // 0x2710(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_12;                       // 0x2AE0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_11;                       // 0x2EB0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_10;                       // 0x3280(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_9;                        // 0x3650(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_8;                        // 0x3A20(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_7;                        // 0x3DF0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_6;                        // 0x41C0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_5;                        // 0x4590(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_4;                        // 0x4960(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_3;                        // 0x4D30(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_2;                        // 0x5100(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_1;                        // 0x54D0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys;                          // 0x58A0(0x03D0)()
	double                                        KawaiiAlpha;                                       // 0x5C70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Kawaii_Alpha;                                      // 0x5C78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Sec_PC_007_A0101(int32 EntryPoint);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Sec_PC_007_A0101_C">();
	}
	static class UBP_Sec_PC_007_A0101_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Sec_PC_007_A0101_C>();
	}
};
static_assert(alignof(UBP_Sec_PC_007_A0101_C) == 0x000010, "Wrong alignment on UBP_Sec_PC_007_A0101_C");
static_assert(sizeof(UBP_Sec_PC_007_A0101_C) == 0x005C80, "Wrong size on UBP_Sec_PC_007_A0101_C");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, UberGraphFrame) == 0x000320, "Member 'UBP_Sec_PC_007_A0101_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, AnimBlueprintExtension_PropertyAccess) == 0x000328, "Member 'UBP_Sec_PC_007_A0101_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, AnimBlueprintExtension_Base) == 0x000330, "Member 'UBP_Sec_PC_007_A0101_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, AnimGraphNode_LinkedInputPose) == 0x000338, "Member 'UBP_Sec_PC_007_A0101_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_22) == 0x000400, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_22' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_21) == 0x0007D0, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_21' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_20) == 0x000BA0, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_20' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_ApplyFacialAdditive) == 0x000F70, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_ApplyFacialAdditive' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, AnimGraphNode_Root) == 0x001008, "Member 'UBP_Sec_PC_007_A0101_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_19) == 0x001030, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_19' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_18) == 0x001400, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_18' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_17) == 0x0017D0, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_17' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_16) == 0x001BA0, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_16' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_15) == 0x001F70, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_15' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_14) == 0x002340, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_14' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_13) == 0x002710, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_13' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_12) == 0x002AE0, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_12' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_11) == 0x002EB0, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_11' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_10) == 0x003280, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_10' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_9) == 0x003650, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_9' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_8) == 0x003A20, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_8' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_7) == 0x003DF0, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_7' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_6) == 0x0041C0, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_6' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_5) == 0x004590, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_5' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_4) == 0x004960, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_4' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_3) == 0x004D30, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_3' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_2) == 0x005100, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_2' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys_1) == 0x0054D0, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys_1' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, M1AnimGraphNode_AnimPhys) == 0x0058A0, "Member 'UBP_Sec_PC_007_A0101_C::M1AnimGraphNode_AnimPhys' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, KawaiiAlpha) == 0x005C70, "Member 'UBP_Sec_PC_007_A0101_C::KawaiiAlpha' has a wrong offset!");
static_assert(offsetof(UBP_Sec_PC_007_A0101_C, Kawaii_Alpha) == 0x005C78, "Member 'UBP_Sec_PC_007_A0101_C::Kawaii_Alpha' has a wrong offset!");

}

