#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M1EpicOnlineServices

#include "Basic.hpp"

#include "M1EpicOnlineServices_structs.hpp"


namespace SDK::Params
{

// Function M1EpicOnlineServices.M1EOSNetworkTransportComponent.ClientOnReceivedAntiCheatServerMessage
// 0x0010 (0x0010 - 0x0000)
struct M1EOSNetworkTransportComponent_ClientOnReceivedAntiCheatServerMessage final
{
public:
	struct FM1EOSNetworkTransportMessage          Message;                                           // 0x0000(0x0010)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(M1EOSNetworkTransportComponent_ClientOnReceivedAntiCheatServerMessage) == 0x000008, "Wrong alignment on M1EOSNetworkTransportComponent_ClientOnReceivedAntiCheatServerMessage");
static_assert(sizeof(M1EOSNetworkTransportComponent_ClientOnReceivedAntiCheatServerMessage) == 0x000010, "Wrong size on M1EOSNetworkTransportComponent_ClientOnReceivedAntiCheatServerMessage");
static_assert(offsetof(M1EOSNetworkTransportComponent_ClientOnReceivedAntiCheatServerMessage, Message) == 0x000000, "Member 'M1EOSNetworkTransportComponent_ClientOnReceivedAntiCheatServerMessage::Message' has a wrong offset!");

// Function M1EpicOnlineServices.M1EOSNetworkTransportComponent.ServerOnReceivedAntiCheatClientMessage
// 0x0010 (0x0010 - 0x0000)
struct M1EOSNetworkTransportComponent_ServerOnReceivedAntiCheatClientMessage final
{
public:
	struct FM1EOSNetworkTransportMessage          Message;                                           // 0x0000(0x0010)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(M1EOSNetworkTransportComponent_ServerOnReceivedAntiCheatClientMessage) == 0x000008, "Wrong alignment on M1EOSNetworkTransportComponent_ServerOnReceivedAntiCheatClientMessage");
static_assert(sizeof(M1EOSNetworkTransportComponent_ServerOnReceivedAntiCheatClientMessage) == 0x000010, "Wrong size on M1EOSNetworkTransportComponent_ServerOnReceivedAntiCheatClientMessage");
static_assert(offsetof(M1EOSNetworkTransportComponent_ServerOnReceivedAntiCheatClientMessage, Message) == 0x000000, "Member 'M1EOSNetworkTransportComponent_ServerOnReceivedAntiCheatClientMessage::Message' has a wrong offset!");

// Function M1EpicOnlineServices.M1EOSNetworkTransportComponent.ServerReceiveAuthInfo
// 0x0028 (0x0028 - 0x0000)
struct M1EOSNetworkTransportComponent_ServerReceiveAuthInfo final
{
public:
	struct FM1EOSClientAuthInfo                   ClientAuthInfo;                                    // 0x0000(0x0028)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(M1EOSNetworkTransportComponent_ServerReceiveAuthInfo) == 0x000008, "Wrong alignment on M1EOSNetworkTransportComponent_ServerReceiveAuthInfo");
static_assert(sizeof(M1EOSNetworkTransportComponent_ServerReceiveAuthInfo) == 0x000028, "Wrong size on M1EOSNetworkTransportComponent_ServerReceiveAuthInfo");
static_assert(offsetof(M1EOSNetworkTransportComponent_ServerReceiveAuthInfo, ClientAuthInfo) == 0x000000, "Member 'M1EOSNetworkTransportComponent_ServerReceiveAuthInfo::ClientAuthInfo' has a wrong offset!");

}

