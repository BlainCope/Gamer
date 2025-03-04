#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_UpdateIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_UpdateIcon.UI_UpdateIcon_C
// 0x0008 (0x0258 - 0x0250)
class UUI_UpdateIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_UI_UpdateIcon(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_UpdateIcon_C">();
	}
	static class UUI_UpdateIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_UpdateIcon_C>();
	}
};
static_assert(alignof(UUI_UpdateIcon_C) == 0x000008, "Wrong alignment on UUI_UpdateIcon_C");
static_assert(sizeof(UUI_UpdateIcon_C) == 0x000258, "Wrong size on UUI_UpdateIcon_C");
static_assert(offsetof(UUI_UpdateIcon_C, UberGraphFrame) == 0x000250, "Member 'UUI_UpdateIcon_C::UberGraphFrame' has a wrong offset!");

}

