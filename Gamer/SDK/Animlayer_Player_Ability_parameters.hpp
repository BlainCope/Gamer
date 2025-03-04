#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Animlayer_Player_Ability

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function animlayer_Player_Ability.animlayer_Player_Ability_C.AbilityLayer
// 0x0020 (0x0020 - 0x0000)
struct Animlayer_Player_Ability_C_AbilityLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AbilityLayer_0;                                    // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Animlayer_Player_Ability_C_AbilityLayer) == 0x000008, "Wrong alignment on Animlayer_Player_Ability_C_AbilityLayer");
static_assert(sizeof(Animlayer_Player_Ability_C_AbilityLayer) == 0x000020, "Wrong size on Animlayer_Player_Ability_C_AbilityLayer");
static_assert(offsetof(Animlayer_Player_Ability_C_AbilityLayer, InPose) == 0x000000, "Member 'Animlayer_Player_Ability_C_AbilityLayer::InPose' has a wrong offset!");
static_assert(offsetof(Animlayer_Player_Ability_C_AbilityLayer, AbilityLayer_0) == 0x000010, "Member 'Animlayer_Player_Ability_C_AbilityLayer::AbilityLayer_0' has a wrong offset!");

}

