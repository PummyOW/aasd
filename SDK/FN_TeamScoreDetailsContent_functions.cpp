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

// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.TrimUnusedRows
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamScoreDetailsContent_C::TrimUnusedRows()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x68cd040e);

	UTeamScoreDetailsContent_C_TrimUnusedRows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.SetRowData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            RowIdx                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamScoreDetailsContent_C::SetRowData(int RowIdx)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x205dcc13);

	UTeamScoreDetailsContent_C_SetRowData_Params params;
	params.RowIdx = RowIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTeamScoreDetailsContent_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8ca1134e);

	UTeamScoreDetailsContent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.OnScoreReportChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamScoreDetailsContent_C::OnScoreReportChanged()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x54373bc);

	UTeamScoreDetailsContent_C_OnScoreReportChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.ExecuteUbergraph_TeamScoreDetailsContent
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamScoreDetailsContent_C::ExecuteUbergraph_TeamScoreDetailsContent(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfa7017e3);

	UTeamScoreDetailsContent_C_ExecuteUbergraph_TeamScoreDetailsContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
