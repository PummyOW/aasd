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

// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetTotalScore
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EStatCategory                  ScoreCategory                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Score                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreBadgeProviderMission_C::GetTotalScore(EStatCategory ScoreCategory, int* Score)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe81addc1);

	UScoreBadgeProviderMission_C_GetTotalScore_Params params;
	params.ScoreCategory = ScoreCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;
}


// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetScoreBadgeInfos
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EStatCategory                  ScoreCategory                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FCollectionMissionBadgeDisplayInfo> BadgeInfos                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UScoreBadgeProviderMission_C::GetScoreBadgeInfos(EStatCategory ScoreCategory, TArray<struct FCollectionMissionBadgeDisplayInfo>* BadgeInfos)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5cca12f1);

	UScoreBadgeProviderMission_C_GetScoreBadgeInfos_Params params;
	params.ScoreCategory = ScoreCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BadgeInfos != nullptr)
		*BadgeInfos = params.BadgeInfos;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
