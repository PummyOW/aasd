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

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForIncompleteQuest-Halloween Event
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TargetQuestFound               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TargetQuestPageIndex           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UProtoCampaignMapPage_C::CheckForIncompleteQuest_Halloween_Event(bool* TargetQuestFound, int* TargetQuestPageIndex)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x122aa5e8);

	UProtoCampaignMapPage_C_CheckForIncompleteQuest_Halloween_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetQuestFound != nullptr)
		*TargetQuestFound = params.TargetQuestFound;
	if (TargetQuestPageIndex != nullptr)
		*TargetQuestPageIndex = params.TargetQuestPageIndex;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.SetBackgroundImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UProtoCampaignMapPage_C::SetBackgroundImage()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x36799266);

	UProtoCampaignMapPage_C_SetBackgroundImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForMainQuest
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TargetQuestFound               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TargetQuestPageIndex           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UProtoCampaignMapPage_C::CheckForMainQuest(bool* TargetQuestFound, int* TargetQuestPageIndex)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3867595b);

	UProtoCampaignMapPage_C_CheckForMainQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetQuestFound != nullptr)
		*TargetQuestFound = params.TargetQuestFound;
	if (TargetQuestPageIndex != nullptr)
		*TargetQuestPageIndex = params.TargetQuestPageIndex;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.GetMainQuest
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          outCurentMainQuest             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UProtoCampaignMapPage_C::GetMainQuest(class UFortQuestItem** outCurentMainQuest)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x87bbd0ca);

	UProtoCampaignMapPage_C_GetMainQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outCurentMainQuest != nullptr)
		*outCurentMainQuest = params.outCurentMainQuest;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UProtoCampaignMapPage_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd35a2317);

	UProtoCampaignMapPage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UProtoCampaignMapPage_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x82c50788);

	UProtoCampaignMapPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.ExecuteUbergraph_ProtoCampaignMapPage
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UProtoCampaignMapPage_C::ExecuteUbergraph_ProtoCampaignMapPage(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x21e1faa);

	UProtoCampaignMapPage_C_ExecuteUbergraph_ProtoCampaignMapPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
