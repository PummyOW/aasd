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

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeConvertScorePlayRate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeamTotalScore_C::InitializeConvertScorePlayRate(float PlayRate)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x579a7c5c);

	UResults_TeamTotalScore_C_InitializeConvertScorePlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeCountScorePlayRate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeamTotalScore_C::InitializeCountScorePlayRate(float PlayRate)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1a734a88);

	UResults_TeamTotalScore_C_InitializeCountScorePlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToConvertScoreEnd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamTotalScore_C::SetSkippingToConvertScoreEnd()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7e668241);

	UResults_TeamTotalScore_C_SetSkippingToConvertScoreEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToConvertScoreFinalState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamTotalScore_C::SkipToConvertScoreFinalState()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x16228427);

	UResults_TeamTotalScore_C_SkipToConvertScoreFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToCountScoreEnd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamTotalScore_C::SetSkippingToCountScoreEnd()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x55e0ac95);

	UResults_TeamTotalScore_C_SetSkippingToCountScoreEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToCountScoreFinalState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamTotalScore_C::SkipToCountScoreFinalState()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfa5be433);

	UResults_TeamTotalScore_C_SkipToCountScoreFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      Score_Report                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeamTotalScore_C::Initialize(class UFortUIScoreReport* Score_Report)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2ee0fb79);

	UResults_TeamTotalScore_C_Initialize_Params params;
	params.Score_Report = Score_Report;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamTotalScore_C::Count_Score_Sequence()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2b05ce79);

	UResults_TeamTotalScore_C_Count_Score_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Intro Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamTotalScore_C::Count_Score_Intro_Sequence()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb60e6bd3);

	UResults_TeamTotalScore_C_Count_Score_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeamTotalScore_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x74379785);

	UResults_TeamTotalScore_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Intro Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamTotalScore_C::Convert_Score_Intro_Sequence()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7e87e307);

	UResults_TeamTotalScore_C_Convert_Score_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamTotalScore_C::Convert_Score_Sequence()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc6949c65);

	UResults_TeamTotalScore_C_Convert_Score_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Interpolation Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamTotalScore_C::Count_Score_Interpolation_Finished()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x569e8e2);

	UResults_TeamTotalScore_C_Count_Score_Interpolation_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Interpolation Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamTotalScore_C::Convert_Score_Interpolation_Finished()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfbe29f96);

	UResults_TeamTotalScore_C_Convert_Score_Interpolation_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Teleport Pad Intro Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamTotalScore_C::Teleport_Pad_Intro_Sequence()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdd785c62);

	UResults_TeamTotalScore_C_Teleport_Pad_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HadCompleted                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeamTotalScore_C::BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x46944db5);

	UResults_TeamTotalScore_C_BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;
	params.HadCompleted = HadCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.ExecuteUbergraph_Results_TeamTotalScore
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TeamTotalScore_C::ExecuteUbergraph_Results_TeamTotalScore(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x67470e71);

	UResults_TeamTotalScore_C_ExecuteUbergraph_Results_TeamTotalScore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Finished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TeamTotalScore_C::Count_Score_Finished__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4debb217);

	UResults_TeamTotalScore_C_Count_Score_Finished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
