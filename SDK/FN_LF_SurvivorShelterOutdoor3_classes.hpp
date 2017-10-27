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

// BlueprintGeneratedClass LF_SurvivorShelterOutdoor3.LF_SurvivorShelterOutdoor3_C
// 0x0000 (0x1080 - 0x1080)
class ALF_SurvivorShelterOutdoor3_C : public ABuildingFoundation5x5
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa66f6d73);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
