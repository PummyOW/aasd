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

// Function QuestPlayButton.QuestPlayButton_C.OnLobbyDisconnected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestPlayButton_C::OnLobbyDisconnected()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x79ef6159);

	UQuestPlayButton_C_OnLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.UpdateQuestStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInCanPlayQuest                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestPlayButton_C::UpdateQuestStatus(bool bInCanPlayQuest)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf2aad568);

	UQuestPlayButton_C_UpdateQuestStatus_Params params;
	params.bInCanPlayQuest = bInCanPlayQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.GetActiveTileType
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFortTheaterMapTileType        TileType                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestPlayButton_C::GetActiveTileType(EFortTheaterMapTileType* TileType)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5e7550d7);

	UQuestPlayButton_C_GetActiveTileType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TileType != nullptr)
		*TileType = params.TileType;
}


// Function QuestPlayButton.QuestPlayButton_C.CalculateCritMissionDifficulty
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OverrideMin                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OverrideMax                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OutDifficultyMin               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OutDifficultyMax               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestPlayButton_C::CalculateCritMissionDifficulty(float OverrideMin, float OverrideMax, float* OutDifficultyMin, float* OutDifficultyMax)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbfcc3e6a);

	UQuestPlayButton_C_CalculateCritMissionDifficulty_Params params;
	params.OverrideMin = OverrideMin;
	params.OverrideMax = OverrideMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDifficultyMin != nullptr)
		*OutDifficultyMin = params.OutDifficultyMin;
	if (OutDifficultyMax != nullptr)
		*OutDifficultyMax = params.OutDifficultyMax;
}


// Function QuestPlayButton.QuestPlayButton_C.SetPlayButtonEnable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestPlayButton_C::SetPlayButtonEnable(bool Enable)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7b7f87f2);

	UQuestPlayButton_C_SetPlayButtonEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.CanPlayQuest
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanPlay                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestPlayButton_C::CanPlayQuest(bool* CanPlay)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x95b45829);

	UQuestPlayButton_C_CanPlayQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPlay != nullptr)
		*CanPlay = params.CanPlay;
}


// Function QuestPlayButton.QuestPlayButton_C.CanNavigateToQuestObjective
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UQuestPlayButton_C::CanNavigateToQuestObjective()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe0c37542);

	UQuestPlayButton_C_CanNavigateToQuestObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuestPlayButton.QuestPlayButton_C.AttemptPlayQuest
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestPlayButton_C::AttemptPlayQuest()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x51ae2a56);

	UQuestPlayButton_C_AttemptPlayQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.AttemptNavigationToQuestObjective
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestPlayButton_C::AttemptNavigationToQuestObjective()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb6e29628);

	UQuestPlayButton_C_AttemptNavigationToQuestObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.SetQuest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestPlayButton_C::SetQuest(class UFortQuestItem* Quest)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x72fca09);

	UQuestPlayButton_C_SetQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestPlayButton_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x45ee1be6);

	UQuestPlayButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestPlayButton_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4c68daf2);

	UQuestPlayButton_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.ForceClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestPlayButton_C::ForceClick()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x82d207c4);

	UQuestPlayButton_C_ForceClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.OnMatchmakingStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestPlayButton_C::OnMatchmakingStarted()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x455576a3);

	UQuestPlayButton_C_OnMatchmakingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.OnMatchmakingCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EMatchmakingCompleteResult     Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestPlayButton_C::OnMatchmakingCompleted(EMatchmakingCompleteResult Result)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2cd7244f);

	UQuestPlayButton_C_OnMatchmakingCompleted_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.OnPlayerStateChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerInfo                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UQuestPlayButton_C::OnPlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdfd3a566);

	UQuestPlayButton_C_OnPlayerStateChanged_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestPlayButton_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x305d8775);

	UQuestPlayButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestPlayButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x55fa9ebc);

	UQuestPlayButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestPlayButton.QuestPlayButton_C.ExecuteUbergraph_QuestPlayButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestPlayButton_C::ExecuteUbergraph_QuestPlayButton(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x768313a9);

	UQuestPlayButton_C_ExecuteUbergraph_QuestPlayButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
