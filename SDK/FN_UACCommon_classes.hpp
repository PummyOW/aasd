#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UACCommon.UACNetComponent
// 0x0090 (0x0180 - 0x00F0)
class UUACNetComponent : public UActorComponent
{
public:
	int                                                PlayerID;                                                 // 0x00F0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8C];                                      // 0x00F4(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6c5b00a);
		return ptr;
	}


	void SendPacketToServer(EUACPacketType Type, TArray<unsigned char> Packet);
	void SendPacketToClient(EUACPacketType Type, TArray<unsigned char> Packet);
	void SendClientHello();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
