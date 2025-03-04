#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainForServer

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct MainForServer.MainForServer_C.AnimBlueprintGeneratedConstantData
// 0x0107 (0x0108 - 0x0001)
struct MainForServer::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_63;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_64;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_65;                                 // 0x0014(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_66;                                 // 0x001C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_67;                                 // 0x0024(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_68;                                 // 0x002C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_69;                                 // 0x0034(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_70;                                 // 0x003C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_71;                                 // 0x0044(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERefPoseType                                  __ByteProperty_72;                                 // 0x004C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_73;                               // 0x0050(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0070(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00F0(0x0018)()
};
static_assert(alignof(MainForServer::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on MainForServer::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(MainForServer::FAnimBlueprintGeneratedConstantData) == 0x000108, "Wrong size on MainForServer::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(MainForServer::FAnimBlueprintGeneratedConstantData, __NameProperty_63) == 0x000004, "Member 'MainForServer::FAnimBlueprintGeneratedConstantData::__NameProperty_63' has a wrong offset!");
static_assert(offsetof(MainForServer::FAnimBlueprintGeneratedConstantData, __NameProperty_64) == 0x00000C, "Member 'MainForServer::FAnimBlueprintGeneratedConstantData::__NameProperty_64' has a wrong offset!");
static_assert(offsetof(MainForServer::FAnimBlueprintGeneratedConstantData, __NameProperty_65) == 0x000014, "Member 'MainForServer::FAnimBlueprintGeneratedConstantData::__NameProperty_65' has a wrong offset!");
static_assert(offsetof(MainForServer::FAnimBlueprintGeneratedConstantData, __NameProperty_66) == 0x00001C, "Member 'MainForServer::FAnimBlueprintGeneratedConstantData::__NameProperty_66' has a wrong offset!");
static_assert(offsetof(MainForServer::FAnimBlueprintGeneratedConstantData, __NameProperty_67) == 0x000024, "Member 'MainForServer::FAnimBlueprintGeneratedConstantData::__NameProperty_67' has a wrong offset!");
static_assert(offsetof(MainForServer::FAnimBlueprintGeneratedConstantData, __NameProperty_68) == 0x00002C, "Member 'MainForServer::FAnimBlueprintGeneratedConstantData::__NameProperty_68' has a wrong offset!");
static_assert(offsetof(MainForServer::FAnimBlueprintGeneratedConstantData, __NameProperty_69) == 0x000034, "Member 'MainForServer::FAnimBlueprintGeneratedConstantData::__NameProperty_69' has a wrong offset!");
static_assert(offsetof(MainForServer::FAnimBlueprintGeneratedConstantData, __NameProperty_70) == 0x00003C, "Member 'MainForServer::FAnimBlueprintGeneratedConstantData::__NameProperty_70' has a wrong offset!");
static_assert(offsetof(MainForServer::FAnimBlueprintGeneratedConstantData, __NameProperty_71) == 0x000044, "Member 'MainForServer::FAnimBlueprintGeneratedConstantData::__NameProperty_71' has a wrong offset!");
static_assert(offsetof(MainForServer::FAnimBlueprintGeneratedConstantData, __ByteProperty_72) == 0x00004C, "Member 'MainForServer::FAnimBlueprintGeneratedConstantData::__ByteProperty_72' has a wrong offset!");
static_assert(offsetof(MainForServer::FAnimBlueprintGeneratedConstantData, __StructProperty_73) == 0x000050, "Member 'MainForServer::FAnimBlueprintGeneratedConstantData::__StructProperty_73' has a wrong offset!");
static_assert(offsetof(MainForServer::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000070, "Member 'MainForServer::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(MainForServer::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000F0, "Member 'MainForServer::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

