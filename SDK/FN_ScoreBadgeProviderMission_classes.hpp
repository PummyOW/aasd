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

// BlueprintGeneratedClass ScoreBadgeProviderMission.ScoreBadgeProviderMission_C
// 0x0000 (0x0028 - 0x0028)
class UScoreBadgeProviderMission_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7e771c55);
		return ptr;
	}


	void GetTotalScore(EStatCategory ScoreCategory, int* Score);
	void GetScoreBadgeInfos(EStatCategory ScoreCategory, TArray<struct FCollectionMissionBadgeDisplayInfo>* BadgeInfos);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
