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

// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.GetBroadcasterName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   BroadcasterName                (CPF_Parm, CPF_OutParm)

void UBP_LiveStreamerDescription_C::GetBroadcasterName(struct FText* BroadcasterName)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x94697216);

	UBP_LiveStreamerDescription_C_GetBroadcasterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BroadcasterName != nullptr)
		*BroadcasterName = params.BroadcasterName;
}


// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.SetViewerQuestText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewText                        (CPF_Parm)

void UBP_LiveStreamerDescription_C::SetViewerQuestText(const struct FText& NewText)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7e0b5d86);

	UBP_LiveStreamerDescription_C_SetViewerQuestText_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Update Viewer Note Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_LiveStreamerDescription_C::Update_Viewer_Note_Visibility()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1e72d1ae);

	UBP_LiveStreamerDescription_C_Update_Viewer_Note_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Setup Broadcaster Name
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_LiveStreamerDescription_C::Setup_Broadcaster_Name()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x83ed0673);

	UBP_LiveStreamerDescription_C_Setup_Broadcaster_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Is Viewer Quest
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ViewerQuest                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LiveStreamerDescription_C::Is_Viewer_Quest(bool* ViewerQuest)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd615268d);

	UBP_LiveStreamerDescription_C_Is_Viewer_Quest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewerQuest != nullptr)
		*ViewerQuest = params.ViewerQuest;
}


// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Update Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LiveStreamerDescription_C::Update_Visibility(class UFortQuestItemDefinition* Item)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa61b9098);

	UBP_LiveStreamerDescription_C_Update_Visibility_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LiveStreamerDescription.BP_LiveStreamerDescription_C.Set Quest
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LiveStreamerDescription_C::Set_Quest(class UFortQuestItem* Quest)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc034b06b);

	UBP_LiveStreamerDescription_C_Set_Quest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
