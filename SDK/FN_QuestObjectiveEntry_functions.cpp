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

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.PlayAppearAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestObjectiveEntry_C::PlayAppearAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9096d8f8);

	UQuestObjectiveEntry_C_PlayAppearAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            AchievedCount                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestObjectiveEntry_C::Update(class UFortQuestObjectiveInfo* Objective, int AchievedCount)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xba86a0c0);

	UQuestObjectiveEntry_C_Update_Params params;
	params.Objective = Objective;
	params.AchievedCount = AchievedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.UpdateProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            AchievedCount                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestObjectiveEntry_C::UpdateProgress(class UFortQuestObjectiveInfo* Objective, int AchievedCount)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xba54799);

	UQuestObjectiveEntry_C_UpdateProgress_Params params;
	params.Objective = Objective;
	params.AchievedCount = AchievedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestObjectiveEntry_C::SetData(class UObject* InData)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x20100afd);

	UQuestObjectiveEntry_C_SetData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.ExecuteUbergraph_QuestObjectiveEntry
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestObjectiveEntry_C::ExecuteUbergraph_QuestObjectiveEntry(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4c9d9f80);

	UQuestObjectiveEntry_C_ExecuteUbergraph_QuestObjectiveEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
