#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaIOCore

#include "Basic.hpp"

#include "ImageWriteQueue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "MediaIOCore_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class MediaIOCore.MediaCapture
// 0x01C0 (0x01E8 - 0x0028)
class UMediaCapture : public UObject
{
public:
	FMulticastInlineDelegateProperty_             OnStateChanged;                                    // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x18];                                      // 0x0038(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaOutput*                           MediaOutput;                                       // 0x0050(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_58[0x190];                                     // 0x0058(0x0190)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions);
	bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions);
	void SetMediaOutput(class UMediaOutput* InMediaOutput);
	void StopCapture(bool bAllowPendingFrameToBeProcess);
	bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget);

	EPixelFormat GetDesiredPixelFormat() const;
	struct FIntPoint GetDesiredSize() const;
	EMediaCaptureState GetState() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaCapture">();
	}
	static class UMediaCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaCapture>();
	}
};
static_assert(alignof(UMediaCapture) == 0x000008, "Wrong alignment on UMediaCapture");
static_assert(sizeof(UMediaCapture) == 0x0001E8, "Wrong size on UMediaCapture");
static_assert(offsetof(UMediaCapture, OnStateChanged) == 0x000028, "Member 'UMediaCapture::OnStateChanged' has a wrong offset!");
static_assert(offsetof(UMediaCapture, MediaOutput) == 0x000050, "Member 'UMediaCapture::MediaOutput' has a wrong offset!");

// Class MediaIOCore.FileMediaCapture
// 0x0068 (0x0250 - 0x01E8)
class UFileMediaCapture final : public UMediaCapture
{
public:
	uint8                                         Pad_1E8[0x68];                                     // 0x01E8(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FileMediaCapture">();
	}
	static class UFileMediaCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFileMediaCapture>();
	}
};
static_assert(alignof(UFileMediaCapture) == 0x000008, "Wrong alignment on UFileMediaCapture");
static_assert(sizeof(UFileMediaCapture) == 0x000250, "Wrong size on UFileMediaCapture");

// Class MediaIOCore.MediaOutput
// 0x0008 (0x0030 - 0x0028)
class UMediaOutput : public UObject
{
public:
	int32                                         NumberOfTextureBuffers;                            // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UMediaCapture* CreateMediaCapture();

	bool Validate(class FString* OutFailureReason) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaOutput">();
	}
	static class UMediaOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaOutput>();
	}
};
static_assert(alignof(UMediaOutput) == 0x000008, "Wrong alignment on UMediaOutput");
static_assert(sizeof(UMediaOutput) == 0x000030, "Wrong size on UMediaOutput");
static_assert(offsetof(UMediaOutput, NumberOfTextureBuffers) == 0x000028, "Member 'UMediaOutput::NumberOfTextureBuffers' has a wrong offset!");

// Class MediaIOCore.FileMediaOutput
// 0x00A0 (0x00D0 - 0x0030)
class UFileMediaOutput final : public UMediaOutput
{
public:
	struct FImageWriteOptions                     WriteOptions;                                      // 0x0030(0x0060)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FDirectoryPath                         FilePath;                                          // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 BaseFileName;                                      // 0x00A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideDesiredSize;                              // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntPoint                              DesiredSize;                                       // 0x00B4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverridePixelFormat;                              // 0x00BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EFileMediaOutputPixelFormat                   DesiredPixelFormat;                                // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInvertAlpha;                                      // 0x00C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C5[0xB];                                       // 0x00C5(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FileMediaOutput">();
	}
	static class UFileMediaOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFileMediaOutput>();
	}
};
static_assert(alignof(UFileMediaOutput) == 0x000010, "Wrong alignment on UFileMediaOutput");
static_assert(sizeof(UFileMediaOutput) == 0x0000D0, "Wrong size on UFileMediaOutput");
static_assert(offsetof(UFileMediaOutput, WriteOptions) == 0x000030, "Member 'UFileMediaOutput::WriteOptions' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, FilePath) == 0x000090, "Member 'UFileMediaOutput::FilePath' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, BaseFileName) == 0x0000A0, "Member 'UFileMediaOutput::BaseFileName' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, bOverrideDesiredSize) == 0x0000B0, "Member 'UFileMediaOutput::bOverrideDesiredSize' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, DesiredSize) == 0x0000B4, "Member 'UFileMediaOutput::DesiredSize' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, bOverridePixelFormat) == 0x0000BC, "Member 'UFileMediaOutput::bOverridePixelFormat' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, DesiredPixelFormat) == 0x0000C0, "Member 'UFileMediaOutput::DesiredPixelFormat' has a wrong offset!");
static_assert(offsetof(UFileMediaOutput, bInvertAlpha) == 0x0000C4, "Member 'UFileMediaOutput::bInvertAlpha' has a wrong offset!");

// Class MediaIOCore.MediaIOCoreSubsystem
// 0x0078 (0x00A8 - 0x0030)
class UMediaIOCoreSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_30[0x78];                                      // 0x0030(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaIOCoreSubsystem">();
	}
	static class UMediaIOCoreSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaIOCoreSubsystem>();
	}
};
static_assert(alignof(UMediaIOCoreSubsystem) == 0x000008, "Wrong alignment on UMediaIOCoreSubsystem");
static_assert(sizeof(UMediaIOCoreSubsystem) == 0x0000A8, "Wrong size on UMediaIOCoreSubsystem");

}

