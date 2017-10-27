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

// BlueprintGeneratedClass GE_Outlander_FragmentTeamSpeedBoost.GE_Outlander_FragmentTeamSpeedBoost_C
// 0x0000 (0x0660 - 0x0660)
class UGE_Outlander_FragmentTeamSpeedBoost_C : public UGET_MoveSpeed_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x433d2e5);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
