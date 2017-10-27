// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UACCommon.UACNetComponent.SendPacketToServer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// EUACPacketType                 Type                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<unsigned char>          Packet                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UUACNetComponent::SendPacketToServer(EUACPacketType Type, TArray<unsigned char> Packet)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x11ea60b6);

	UUACNetComponent_SendPacketToServer_Params params;
	params.Type = Type;
	params.Packet = Packet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UACCommon.UACNetComponent.SendPacketToClient
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// EUACPacketType                 Type                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<unsigned char>          Packet                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UUACNetComponent::SendPacketToClient(EUACPacketType Type, TArray<unsigned char> Packet)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2e4eac5a);

	UUACNetComponent_SendPacketToClient_Params params;
	params.Type = Type;
	params.Packet = Packet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UACCommon.UACNetComponent.SendClientHello
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void UUACNetComponent::SendClientHello()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x74ab56f3);

	UUACNetComponent_SendClientHello_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
