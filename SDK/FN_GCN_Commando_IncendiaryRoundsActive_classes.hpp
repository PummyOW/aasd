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

// BlueprintGeneratedClass GCN_Commando_IncendiaryRoundsActive.GCN_Commando_IncendiaryRoundsActive_C
// 0x0000 (0x0468 - 0x0468)
class AGCN_Commando_IncendiaryRoundsActive_C : public AFortGameplayCueNotify_Looping
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbfd81b61);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
