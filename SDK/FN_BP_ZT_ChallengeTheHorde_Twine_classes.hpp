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

// BlueprintGeneratedClass BP_ZT_ChallengeTheHorde_Twine.BP_ZT_ChallengeTheHorde_Twine_C
// 0x0000 (0x0290 - 0x0290)
class UBP_ZT_ChallengeTheHorde_Twine_C : public UFortZoneTheme
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7c9db14d);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
