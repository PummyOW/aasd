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

// Function FortTwitchLogin.FortTwitchLogin_C.Build Player Id Analytic Attribute
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortAnalyticsEventAttribute ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFortAnalyticsEventAttribute UFortTwitchLogin_C::Build_Player_Id_Analytic_Attribute()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7c0af150);

	UFortTwitchLogin_C_Build_Player_Id_Analytic_Attribute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FortTwitchLogin.FortTwitchLogin_C.Build Twitch Name Analytic Attribute
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortAnalyticsEventAttribute ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFortAnalyticsEventAttribute UFortTwitchLogin_C::Build_Twitch_Name_Analytic_Attribute()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9700c1c8);

	UFortTwitchLogin_C_Build_Twitch_Name_Analytic_Attribute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FortTwitchLogin.FortTwitchLogin_C.Build Player Name Analytic Attribute
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortAnalyticsEventAttribute ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFortAnalyticsEventAttribute UFortTwitchLogin_C::Build_Player_Name_Analytic_Attribute()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa7a55fb6);

	UFortTwitchLogin_C_Build_Player_Name_Analytic_Attribute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FortTwitchLogin.FortTwitchLogin_C.Fire Logged In Analytic
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFortTwitchLogin_C::Fire_Logged_In_Analytic()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xef6a1765);

	UFortTwitchLogin_C_Fire_Logged_In_Analytic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.Fire SignIn Analytic
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFortTwitchLogin_C::Fire_SignIn_Analytic()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xeb793378);

	UFortTwitchLogin_C_Fire_SignIn_Analytic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.CenterActiveAuthButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFortTwitchLogin_C::CenterActiveAuthButton()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x89d3e460);

	UFortTwitchLogin_C_CenterActiveAuthButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.CenterOnWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFortTwitchLogin_C::CenterOnWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x720761f);

	UFortTwitchLogin_C_CenterOnWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.DialogResult_5994C6BA48DC4D282A16D7BA54384F79
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortTwitchLogin_C::DialogResult_5994C6BA48DC4D282A16D7BA54384F79(EFortDialogResult Result, const struct FName& ResultName)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x52f03e5);

	UFortTwitchLogin_C_DialogResult_5994C6BA48DC4D282A16D7BA54384F79_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.Initialize Data
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFortTwitchLogin_C::Initialize_Data()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5783c88b);

	UFortTwitchLogin_C_Initialize_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.OnLoginStatusChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bLoggedIn                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString*                AccountName                    (CPF_Parm, CPF_ZeroConstructor)

void UFortTwitchLogin_C::OnLoginStatusChanged(bool* bLoggedIn, struct FString* AccountName)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbcb923b7);

	UFortTwitchLogin_C_OnLoginStatusChanged_Params params;
	params.bLoggedIn = bLoggedIn;
	params.AccountName = AccountName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.OnLoginFlowModalCreated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UFortTwitchLoginModalWidget** Modal                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortTwitchLogin_C::OnLoginFlowModalCreated(class UFortTwitchLoginModalWidget** Modal)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xad6925ee);

	UFortTwitchLogin_C_OnLoginFlowModalCreated_Params params;
	params.Modal = Modal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.OnCancelButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFortTwitchLogin_C::OnCancelButtonClicked()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x128816b1);

	UFortTwitchLogin_C_OnCancelButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.OnLoginFlowModalDismissed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UFortTwitchLoginModalWidget** Modal                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortTwitchLogin_C::OnLoginFlowModalDismissed(class UFortTwitchLoginModalWidget** Modal)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4284a9a1);

	UFortTwitchLogin_C_OnLoginFlowModalDismissed_Params params;
	params.Modal = Modal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_209_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortTwitchLogin_C::BndEvt__SignInButton_K2Node_ComponentBoundEvent_209_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3493eec4);

	UFortTwitchLogin_C_BndEvt__SignInButton_K2Node_ComponentBoundEvent_209_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignOutButton_K2Node_ComponentBoundEvent_229_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortTwitchLogin_C::BndEvt__SignOutButton_K2Node_ComponentBoundEvent_229_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8330e91d);

	UFortTwitchLogin_C_BndEvt__SignOutButton_K2Node_ComponentBoundEvent_229_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortTwitchLogin_C::BndEvt__SignInButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x50851341);

	UFortTwitchLogin_C_BndEvt__SignInButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortTwitchLogin_C::BndEvt__SignInButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xff0bee35);

	UFortTwitchLogin_C_BndEvt__SignInButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignOutButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortTwitchLogin_C::BndEvt__SignOutButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4c8e8e56);

	UFortTwitchLogin_C_BndEvt__SignOutButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignOutButton_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortTwitchLogin_C::BndEvt__SignOutButton_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb5fa5f01);

	UFortTwitchLogin_C_BndEvt__SignOutButton_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.OnShowLoginError
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText*                  ErrorTitle                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText*                  ErrorMessage                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UFortTwitchLogin_C::OnShowLoginError(struct FText* ErrorTitle, struct FText* ErrorMessage)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7db1d9b0);

	UFortTwitchLogin_C_OnShowLoginError_Params params;
	params.ErrorTitle = ErrorTitle;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.ExecuteUbergraph_FortTwitchLogin
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortTwitchLogin_C::ExecuteUbergraph_FortTwitchLogin(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb2990d00);

	UFortTwitchLogin_C_ExecuteUbergraph_FortTwitchLogin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortTwitchLogin.FortTwitchLogin_C.OnRequestToolTipChange__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewTooltipText                 (CPF_Parm)

void UFortTwitchLogin_C::OnRequestToolTipChange__DelegateSignature(const struct FText& NewTooltipText)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5f01299f);

	UFortTwitchLogin_C_OnRequestToolTipChange__DelegateSignature_Params params;
	params.NewTooltipText = NewTooltipText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
