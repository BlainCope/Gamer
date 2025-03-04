#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_Crosshair

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPFL_Crosshair.BPFL_Crosshair_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_Crosshair_C final : public UBlueprintFunctionLibrary
{
public:
	static void Truncate__Vector2D_(const struct FVector2D& In, class UObject* __WorldContext, struct FVector2D* Out);
	static void SafeHypotenus(const struct FVector2D& In_vector2d, class UObject* __WorldContext, double* Return_value);
	static void LinearColorToSRGB(const struct FLinearColor& LinearColor_, class UObject* __WorldContext, struct FLinearColor* SRGB_);
	static void Abs__Vector2D_(const struct FVector2D& In, class UObject* __WorldContext, struct FVector2D* Out);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPFL_Crosshair_C">();
	}
	static class UBPFL_Crosshair_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPFL_Crosshair_C>();
	}
};
static_assert(alignof(UBPFL_Crosshair_C) == 0x000008, "Wrong alignment on UBPFL_Crosshair_C");
static_assert(sizeof(UBPFL_Crosshair_C) == 0x000028, "Wrong size on UBPFL_Crosshair_C");

}

