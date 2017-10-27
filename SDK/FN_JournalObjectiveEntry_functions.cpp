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

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalObjectiveEntry_C::Update(class UFortQuestObjectiveInfo* Objective)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2968a784);

	UJournalObjectiveEntry_C_Update_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.UpdateProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalObjectiveEntry_C::UpdateProgress(class UFortQuestObjectiveInfo* Objective)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbcb7e125);

	UJournalObjectiveEntry_C_UpdateProgress_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject**                InData                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalObjectiveEntry_C::SetData(class UObject** InData)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb35ea7a9);

	UJournalObjectiveEntry_C_SetData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UJournalObjectiveEntry_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2eba40e);

	UJournalObjectiveEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Handle Quests Updated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalObjectiveEntry_C::Handle_Quests_Updated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4b5d8e5f);

	UJournalObjectiveEntry_C_Handle_Quests_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.ExecuteUbergraph_JournalObjectiveEntry
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalObjectiveEntry_C::ExecuteUbergraph_JournalObjectiveEntry(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x435da937);

	UJournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
