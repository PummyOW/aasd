#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UACCommon.UACNetComponent.SendPacketToServer
struct UUACNetComponent_SendPacketToServer_Params
{
	EUACPacketType                                     Type;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<unsigned char>                              Packet;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function UACCommon.UACNetComponent.SendPacketToClient
struct UUACNetComponent_SendPacketToClient_Params
{
	EUACPacketType                                     Type;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<unsigned char>                              Packet;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function UACCommon.UACNetComponent.SendClientHello
struct UUACNetComponent_SendClientHello_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
