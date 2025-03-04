#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MetasoundFrontend

#include "Basic.hpp"

#include "MetasoundFrontend_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MetasoundFrontend.MetasoundParameterPack
// 0x0018 (0x0040 - 0x0028)
class UMetasoundParameterPack final : public UObject
{
public:
	uint8                                         Pad_28[0x18];                                      // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UMetasoundParameterPack* MakeMetasoundParameterPack();

	bool GetBool(class FName ParameterName, ESetParamResult* Result);
	float GetFloat(class FName ParameterName, ESetParamResult* Result);
	int32 GetInt(class FName ParameterName, ESetParamResult* Result);
	class FString GetString(class FName ParameterName, ESetParamResult* Result);
	bool GetTrigger(class FName ParameterName, ESetParamResult* Result);
	bool HasBool(class FName ParameterName);
	bool HasFloat(class FName ParameterName);
	bool HasInt(class FName ParameterName);
	bool HasString(class FName ParameterName);
	bool HasTrigger(class FName ParameterName);
	ESetParamResult SetBool(class FName ParameterName, bool InValue, bool OnlyIfExists);
	ESetParamResult SetFloat(class FName ParameterName, float InValue, bool OnlyIfExists);
	ESetParamResult SetInt(class FName ParameterName, int32 InValue, bool OnlyIfExists);
	ESetParamResult SetString(class FName ParameterName, const class FString& InValue, bool OnlyIfExists);
	ESetParamResult SetTrigger(class FName ParameterName, bool OnlyIfExists);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetasoundParameterPack">();
	}
	static class UMetasoundParameterPack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetasoundParameterPack>();
	}
};
static_assert(alignof(UMetasoundParameterPack) == 0x000008, "Wrong alignment on UMetasoundParameterPack");
static_assert(sizeof(UMetasoundParameterPack) == 0x000040, "Wrong size on UMetasoundParameterPack");

}

