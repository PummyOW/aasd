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

// Function RejoinWindow.RejoinWindow_C.OnButtonClicked
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URejoinWindow_C::OnButtonClicked(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3b115fa9);

	URejoinWindow_C_OnButtonClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.CenterFirstButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URejoinWindow_C::CenterFirstButton()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd7d519a4);

	URejoinWindow_C_CenterFirstButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.InitializeRejoinWindow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URejoinWindow_C::InitializeRejoinWindow()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x670a7764);

	URejoinWindow_C_InitializeRejoinWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.ShowInitalScreen
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeoutSeconds                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URejoinWindow_C::ShowInitalScreen(float TimeoutSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6d919c93);

	URejoinWindow_C_ShowInitalScreen_Params params;
	params.TimeoutSeconds = TimeoutSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.ShowRetryScreen
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Failure                        (CPF_Parm)
// float                          TimeoutSeconds                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           AllowRetry                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URejoinWindow_C::ShowRetryScreen(const struct FText& Failure, float TimeoutSeconds, bool AllowRetry)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7924c98c);

	URejoinWindow_C_ShowRetryScreen_Params params;
	params.Failure = Failure;
	params.TimeoutSeconds = TimeoutSeconds;
	params.AllowRetry = AllowRetry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URejoinWindow_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf6caa7c8);

	URejoinWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.OnTimeoutTimeReached
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void URejoinWindow_C::OnTimeoutTimeReached()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe6f3e562);

	URejoinWindow_C_OnTimeoutTimeReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.ExecuteUbergraph_RejoinWindow
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URejoinWindow_C::ExecuteUbergraph_RejoinWindow(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x29372bf6);

	URejoinWindow_C_ExecuteUbergraph_RejoinWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URejoinWindow_C::OnRequestRejoinRetry__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8f8dd23);

	URejoinWindow_C_OnRequestRejoinRetry__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URejoinWindow_C::OnRequestAbandon__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2e12e6af);

	URejoinWindow_C_OnRequestAbandon__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
