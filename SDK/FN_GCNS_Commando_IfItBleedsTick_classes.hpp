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

// BlueprintGeneratedClass GCNS_Commando_IfItBleedsTick.GCNS_Commando_IfItBleedsTick_C
// 0x0000 (0x0070 - 0x0070)
class UGCNS_Commando_IfItBleedsTick_C : public UFortGameplayCueNotify_Simple
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7880717f);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
