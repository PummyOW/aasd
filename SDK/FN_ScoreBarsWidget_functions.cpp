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

// Function ScoreBarsWidget.ScoreBarsWidget_C.UnregisterForScoreStreamEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreBarsWidget_C::UnregisterForScoreStreamEvents()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x207626fb);

	UScoreBarsWidget_C_UnregisterForScoreStreamEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreNumberChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EStatCategory                  ScoreCategory                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreBarsWidget_C::HandleScoreNumberChanged(EStatCategory ScoreCategory)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xcada765a);

	UScoreBarsWidget_C_HandleScoreNumberChanged_Params params;
	params.ScoreCategory = ScoreCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMessageDisplayed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget* ItemWidget                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreBarsWidget_C::HandleMessageDisplayed(class UFortUIMessageItemWidget* ItemWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xee7126bf);

	UScoreBarsWidget_C_HandleMessageDisplayed_Params params;
	params.ItemWidget = ItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HideScoreMessageSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreBarsWidget_C::HideScoreMessageSlots()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x28bf8b37);

	UScoreBarsWidget_C_HideScoreMessageSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.RegisterForScoreStreamEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreBarsWidget_C::RegisterForScoreStreamEvents()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x686db1c6);

	UScoreBarsWidget_C_RegisterForScoreStreamEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreMessageExpired
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget* Expired_Message                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreBarsWidget_C::HandleScoreMessageExpired(class UFortUIMessageItemWidget* Expired_Message)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8e722559);

	UScoreBarsWidget_C_HandleScoreMessageExpired_Params params;
	params.Expired_Message = Expired_Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.TryGetNextScoreMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreBarsWidget_C::TryGetNextScoreMessage()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x981daafa);

	UScoreBarsWidget_C_TryGetNextScoreMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreStatChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Delta                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Name                           (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<EFortReplicatedStat> StatType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EStatCategory                  StatCategory                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreBarsWidget_C::HandleScoreStatChanged(int Delta, TEnumAsByte<EFortReplicatedStat> StatType, EStatCategory StatCategory, struct FText* Name)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfd7a3dfd);

	UScoreBarsWidget_C_HandleScoreStatChanged_Params params;
	params.Delta = Delta;
	params.StatType = StatType;
	params.StatCategory = StatCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeIcons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreBarsWidget_C::InitializeIcons()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbabfef85);

	UScoreBarsWidget_C_InitializeIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreBars
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreBarsWidget_C::UpdateScoreBars()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x474d5428);

	UScoreBarsWidget_C_UpdateScoreBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleUpdateUI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortMissionState*       Mission                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreBarsWidget_C::HandleUpdateUI(class AFortMissionState* Mission)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x417da9d0);

	UScoreBarsWidget_C_HandleUpdateUI_Params params;
	params.Mission = Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreTotals
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreBarsWidget_C::UpdateScoreTotals()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd183f6ff);

	UScoreBarsWidget_C_UpdateScoreTotals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HasValidBadgeInfos
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bHasValidBadgeInfos            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreBarsWidget_C::HasValidBadgeInfos(bool* bHasValidBadgeInfos)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1238dc29);

	UScoreBarsWidget_C_HasValidBadgeInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasValidBadgeInfos != nullptr)
		*bHasValidBadgeInfos = params.bHasValidBadgeInfos;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeScoreBars
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreBarsWidget_C::InitializeScoreBars()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf4afdd87);

	UScoreBarsWidget_C_InitializeScoreBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMissionsUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreBarsWidget_C::HandleMissionsUpdated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1d051261);

	UScoreBarsWidget_C_HandleMissionsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreBarsWidget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfe5f7cc2);

	UScoreBarsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreBarsWidget_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4e202899);

	UScoreBarsWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.ExecuteUbergraph_ScoreBarsWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreBarsWidget_C::ExecuteUbergraph_ScoreBarsWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb9498abd);

	UScoreBarsWidget_C_ExecuteUbergraph_ScoreBarsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
