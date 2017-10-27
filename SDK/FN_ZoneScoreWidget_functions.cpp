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

// Function ZoneScoreWidget.ZoneScoreWidget_C.BindEndOfDayHeaderText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneScoreWidget_C::BindEndOfDayHeaderText()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb5788d42);

	UZoneScoreWidget_C_BindEndOfDayHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.ShowTeamScoreContributions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneScoreWidget_C::ShowTeamScoreContributions()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x22963418);

	UZoneScoreWidget_C_ShowTeamScoreContributions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.ShowXPReward
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneScoreWidget_C::ShowXPReward()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2444c9d5);

	UZoneScoreWidget_C_ShowXPReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.UpdateXPLERP
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          LERP_Factor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZoneScoreWidget_C::UpdateXPLERP(float LERP_Factor)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc2234663);

	UZoneScoreWidget_C_UpdateXPLERP_Params params;
	params.LERP_Factor = LERP_Factor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.BeginTweeningXP
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneScoreWidget_C::BeginTweeningXP()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbf9c34f1);

	UZoneScoreWidget_C_BeginTweeningXP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.UpdateScoresLERP
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          LERP_Factor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZoneScoreWidget_C::UpdateScoresLERP(float LERP_Factor)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5addb35e);

	UZoneScoreWidget_C_UpdateScoresLERP_Params params;
	params.LERP_Factor = LERP_Factor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.BeginTweeningScores
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneScoreWidget_C::BeginTweeningScores()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5b148104);

	UZoneScoreWidget_C_BeginTweeningScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.StartEndOfDayRecapAfterAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneScoreWidget_C::StartEndOfDayRecapAfterAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x619ff9fc);

	UZoneScoreWidget_C_StartEndOfDayRecapAfterAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.OnXPTweenEndEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneScoreWidget_C::OnXPTweenEndEvent()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb654cfe8);

	UZoneScoreWidget_C_OnXPTweenEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.OnScoreTweenEndEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneScoreWidget_C::OnScoreTweenEndEvent()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x90c30736);

	UZoneScoreWidget_C_OnScoreTweenEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZoneScoreWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd8e68828);

	UZoneScoreWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UZoneScoreWidget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8fbb615a);

	UZoneScoreWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.OnEndOfDayRecap
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FEndOfDayRecap          EndOfDayRecap                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UZoneScoreWidget_C::OnEndOfDayRecap(const struct FEndOfDayRecap& EndOfDayRecap)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc942fd0b);

	UZoneScoreWidget_C_OnEndOfDayRecap_Params params;
	params.EndOfDayRecap = EndOfDayRecap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.ExecuteUbergraph_ZoneScoreWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZoneScoreWidget_C::ExecuteUbergraph_ZoneScoreWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9eb4d46d);

	UZoneScoreWidget_C_ExecuteUbergraph_ZoneScoreWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneScoreWidget.ZoneScoreWidget_C.OnEndOfDayRecapEnded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneScoreWidget_C::OnEndOfDayRecapEnded__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd03a4ae8);

	UZoneScoreWidget_C_OnEndOfDayRecapEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
