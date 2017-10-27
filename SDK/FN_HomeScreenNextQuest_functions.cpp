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

// Function HomeScreenNextQuest.HomeScreenNextQuest_C.HandleBeyondCutOffQuest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHomeScreenNextQuest_C::HandleBeyondCutOffQuest()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbb3b73d3);

	UHomeScreenNextQuest_C_HandleBeyondCutOffQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.ConfigureScreenForEvent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHomeScreenNextQuest_C::ConfigureScreenForEvent()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x210c2d5e);

	UHomeScreenNextQuest_C_ConfigureScreenForEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.UpdateSceenBasedOnQuestMapShown
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHomeScreenNextQuest_C::UpdateSceenBasedOnQuestMapShown()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd4afcce3);

	UHomeScreenNextQuest_C_UpdateSceenBasedOnQuestMapShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.UpdateButtonBasedOnEventStatus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           EventIsActive                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHomeScreenNextQuest_C::UpdateButtonBasedOnEventStatus(bool* EventIsActive)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6656ff50);

	UHomeScreenNextQuest_C_UpdateButtonBasedOnEventStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventIsActive != nullptr)
		*EventIsActive = params.EventIsActive;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHomeScreenNextQuest_C::BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa85ea6e6);

	UHomeScreenNextQuest_C_BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.Handle Event Flags Changed
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         ActiveEventFlags               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UHomeScreenNextQuest_C::Handle_Event_Flags_Changed(TArray<struct FString> ActiveEventFlags)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x13ec0748);

	UHomeScreenNextQuest_C_Handle_Event_Flags_Changed_Params params;
	params.ActiveEventFlags = ActiveEventFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHomeScreenNextQuest_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1ee904a2);

	UHomeScreenNextQuest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.HandleTabSwitch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHomeScreenNextQuest_C::HandleTabSwitch()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x67684482);

	UHomeScreenNextQuest_C_HandleTabSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHomeScreenNextQuest_C::OnActivated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5f21d2c9);

	UHomeScreenNextQuest_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.ExecuteUbergraph_HomeScreenNextQuest
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHomeScreenNextQuest_C::ExecuteUbergraph_HomeScreenNextQuest(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4c5f14c1);

	UHomeScreenNextQuest_C_ExecuteUbergraph_HomeScreenNextQuest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
