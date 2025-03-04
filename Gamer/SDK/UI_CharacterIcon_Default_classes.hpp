#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CharacterIcon_Default

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CharacterIcon_Default.UI_CharacterIcon_Default_C
// 0x0020 (0x0740 - 0x0720)
class UUI_CharacterIcon_Default_C final : public UM1UICharacterIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          In_BgHidden;                                       // 0x0728(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          In_IconReverse;                                    // 0x0729(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72A[0x2];                                      // 0x072A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                In_Padding;                                        // 0x072C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void SetUIIconAlign();
	void SetUIBg();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_CharacterIcon_Default(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CharacterIcon_Default_C">();
	}
	static class UUI_CharacterIcon_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CharacterIcon_Default_C>();
	}
};
static_assert(alignof(UUI_CharacterIcon_Default_C) == 0x000008, "Wrong alignment on UUI_CharacterIcon_Default_C");
static_assert(sizeof(UUI_CharacterIcon_Default_C) == 0x000740, "Wrong size on UUI_CharacterIcon_Default_C");
static_assert(offsetof(UUI_CharacterIcon_Default_C, UberGraphFrame) == 0x000720, "Member 'UUI_CharacterIcon_Default_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_CharacterIcon_Default_C, In_BgHidden) == 0x000728, "Member 'UUI_CharacterIcon_Default_C::In_BgHidden' has a wrong offset!");
static_assert(offsetof(UUI_CharacterIcon_Default_C, In_IconReverse) == 0x000729, "Member 'UUI_CharacterIcon_Default_C::In_IconReverse' has a wrong offset!");
static_assert(offsetof(UUI_CharacterIcon_Default_C, In_Padding) == 0x00072C, "Member 'UUI_CharacterIcon_Default_C::In_Padding' has a wrong offset!");

}

