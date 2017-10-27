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

// Function AccountLinkingWindow.AccountLinkingWindow_C.SetupLinkText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::SetupLinkText()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x49d2e9f1);

	UAccountLinkingWindow_C_SetupLinkText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.HideLinkOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::HideLinkOptions()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xceb87421);

	UAccountLinkingWindow_C_HideLinkOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.SetLinkedAccountNeedsPurchase
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInLinkedAccountNeedsPurchase  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountLinkingWindow_C::SetLinkedAccountNeedsPurchase(bool bInLinkedAccountNeedsPurchase)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe30d6b6d);

	UAccountLinkingWindow_C_SetLinkedAccountNeedsPurchase_Params params;
	params.bInLinkedAccountNeedsPurchase = bInLinkedAccountNeedsPurchase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountNotCreated_2B6C467D495BF62E436C79B3550FE868
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnAccountNotCreated_2B6C467D495BF62E436C79B3550FE868()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd9cc0a32);

	UAccountLinkingWindow_C_OnAccountNotCreated_2B6C467D495BF62E436C79B3550FE868_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountCreatedButNotLinked_2B6C467D495BF62E436C79B3550FE868
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnAccountCreatedButNotLinked_2B6C467D495BF62E436C79B3550FE868()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd47d5abe);

	UAccountLinkingWindow_C_OnAccountCreatedButNotLinked_2B6C467D495BF62E436C79B3550FE868_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountCreatedAndLinked_2B6C467D495BF62E436C79B3550FE868
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnAccountCreatedAndLinked_2B6C467D495BF62E436C79B3550FE868()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc6452a4d);

	UAccountLinkingWindow_C_OnAccountCreatedAndLinked_2B6C467D495BF62E436C79B3550FE868_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnNotPurchased_3B76089F4EB5000544C7BD8B10E707CF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnNotPurchased_3B76089F4EB5000544C7BD8B10E707CF()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xec5656e0);

	UAccountLinkingWindow_C_OnNotPurchased_3B76089F4EB5000544C7BD8B10E707CF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnPurchased_3B76089F4EB5000544C7BD8B10E707CF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnPurchased_3B76089F4EB5000544C7BD8B10E707CF()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3ad5429b);

	UAccountLinkingWindow_C_OnPurchased_3B76089F4EB5000544C7BD8B10E707CF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountNotCreated_9EEEC6E44BF7A7C172929DA05184702A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnAccountNotCreated_9EEEC6E44BF7A7C172929DA05184702A()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7d4ff1bc);

	UAccountLinkingWindow_C_OnAccountNotCreated_9EEEC6E44BF7A7C172929DA05184702A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountCreated_9EEEC6E44BF7A7C172929DA05184702A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnAccountCreated_9EEEC6E44BF7A7C172929DA05184702A()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5e7f7b9);

	UAccountLinkingWindow_C_OnAccountCreated_9EEEC6E44BF7A7C172929DA05184702A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnShowHaveEpicAccountScreen_6FD0DEB74DEF4060FC743CB004F3E654
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnShowHaveEpicAccountScreen_6FD0DEB74DEF4060FC743CB004F3E654()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xff740540);

	UAccountLinkingWindow_C_OnShowHaveEpicAccountScreen_6FD0DEB74DEF4060FC743CB004F3E654_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnShowLinkOrBuyAccessScreen_6FD0DEB74DEF4060FC743CB004F3E654
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnShowLinkOrBuyAccessScreen_6FD0DEB74DEF4060FC743CB004F3E654()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7fd829df);

	UAccountLinkingWindow_C_OnShowLinkOrBuyAccessScreen_6FD0DEB74DEF4060FC743CB004F3E654_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnCodeRedeemCanceled_E9B5F30942BE3B295E62309A2EB8DA8D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnCodeRedeemCanceled_E9B5F30942BE3B295E62309A2EB8DA8D()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x593a8036);

	UAccountLinkingWindow_C_OnCodeRedeemCanceled_E9B5F30942BE3B295E62309A2EB8DA8D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnCodeRedeemComplete_E9B5F30942BE3B295E62309A2EB8DA8D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnCodeRedeemComplete_E9B5F30942BE3B295E62309A2EB8DA8D()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4bd5c42);

	UAccountLinkingWindow_C_OnCodeRedeemComplete_E9B5F30942BE3B295E62309A2EB8DA8D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonNoThanks_K2Node_ComponentBoundEvent_447_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountLinkingWindow_C::BndEvt__ButtonNoThanks_K2Node_ComponentBoundEvent_447_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa91d02f2);

	UAccountLinkingWindow_C_BndEvt__ButtonNoThanks_K2Node_ComponentBoundEvent_447_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonLogInFromPurchase_K2Node_ComponentBoundEvent_464_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountLinkingWindow_C::BndEvt__ButtonLogInFromPurchase_K2Node_ComponentBoundEvent_464_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbbcd56c1);

	UAccountLinkingWindow_C_BndEvt__ButtonLogInFromPurchase_K2Node_ComponentBoundEvent_464_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonLogIn_K2Node_ComponentBoundEvent_431_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountLinkingWindow_C::BndEvt__ButtonLogIn_K2Node_ComponentBoundEvent_431_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x435a8e52);

	UAccountLinkingWindow_C_BndEvt__ButtonLogIn_K2Node_ComponentBoundEvent_431_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonSignUp_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountLinkingWindow_C::BndEvt__ButtonSignUp_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xcd27e666);

	UAccountLinkingWindow_C_BndEvt__ButtonSignUp_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonSkipSignInSignIn_K2Node_ComponentBoundEvent_444_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountLinkingWindow_C::BndEvt__ButtonSkipSignInSignIn_K2Node_ComponentBoundEvent_444_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x11559400);

	UAccountLinkingWindow_C_BndEvt__ButtonSkipSignInSignIn_K2Node_ComponentBoundEvent_444_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonSkipSignInLogIn_K2Node_ComponentBoundEvent_463_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountLinkingWindow_C::BndEvt__ButtonSkipSignInLogIn_K2Node_ComponentBoundEvent_463_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x91909b88);

	UAccountLinkingWindow_C_BndEvt__ButtonSkipSignInLogIn_K2Node_ComponentBoundEvent_463_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonSkipSignInNoThanks_K2Node_ComponentBoundEvent_483_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountLinkingWindow_C::BndEvt__ButtonSkipSignInNoThanks_K2Node_ComponentBoundEvent_483_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x48934ab1);

	UAccountLinkingWindow_C_BndEvt__ButtonSkipSignInNoThanks_K2Node_ComponentBoundEvent_483_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.ShowBuyAccessScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::ShowBuyAccessScreen()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xebf68944);

	UAccountLinkingWindow_C_ShowBuyAccessScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.ShowHaveEpicAccountScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::ShowHaveEpicAccountScreen()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x84c029e8);

	UAccountLinkingWindow_C_ShowHaveEpicAccountScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.ShowSkipSignInScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::ShowSkipSignInScreen()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd2776895);

	UAccountLinkingWindow_C_ShowSkipSignInScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.ArtificialDelayExpired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::ArtificialDelayExpired()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc5da1101);

	UAccountLinkingWindow_C_ArtificialDelayExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.StartSignup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::StartSignup()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3979079f);

	UAccountLinkingWindow_C_StartSignup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountLinkingWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x51f10edf);

	UAccountLinkingWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnActivated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf53f1fdb);

	UAccountLinkingWindow_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_305_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountLinkingWindow_C::BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_305_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd468a8dc);

	UAccountLinkingWindow_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_305_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x726ff453);

	UAccountLinkingWindow_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd5b8642c);

	UAccountLinkingWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.HandleNewPurchaseReceipt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::HandleNewPurchaseReceipt()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb8c247fa);

	UAccountLinkingWindow_C_HandleNewPurchaseReceipt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.BndEvt__ButtonPurchasePack_K2Node_ComponentBoundEvent_175_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountLinkingWindow_C::BndEvt__ButtonPurchasePack_K2Node_ComponentBoundEvent_175_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2c387c78);

	UAccountLinkingWindow_C_BndEvt__ButtonPurchasePack_K2Node_ComponentBoundEvent_175_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.ExecuteUbergraph_AccountLinkingWindow
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAccountLinkingWindow_C::ExecuteUbergraph_AccountLinkingWindow(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x24b3fa36);

	UAccountLinkingWindow_C_ExecuteUbergraph_AccountLinkingWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnViewEula__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnViewEula__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe96538c1);

	UAccountLinkingWindow_C_OnViewEula__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnPopStatus__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnPopStatus__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x67faef28);

	UAccountLinkingWindow_C_OnPopStatus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnPushStatus__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   StatusText                     (CPF_Parm)

void UAccountLinkingWindow_C::OnPushStatus__DelegateSignature(const struct FText& StatusText)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2c47ad9b);

	UAccountLinkingWindow_C_OnPushStatus__DelegateSignature_Params params;
	params.StatusText = StatusText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountLinkingFailed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   FailReason                     (CPF_Parm)

void UAccountLinkingWindow_C::OnAccountLinkingFailed__DelegateSignature(const struct FText& FailReason)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6e7a1695);

	UAccountLinkingWindow_C_OnAccountLinkingFailed__DelegateSignature_Params params;
	params.FailReason = FailReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnRequestSignIn__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnRequestSignIn__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5327171e);

	UAccountLinkingWindow_C_OnRequestSignIn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnAccountLinkingComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnAccountLinkingComplete__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xcb7e903b);

	UAccountLinkingWindow_C_OnAccountLinkingComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountLinkingWindow.AccountLinkingWindow_C.OnRequestAutoLogin__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAccountLinkingWindow_C::OnRequestAutoLogin__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe18ccaa2);

	UAccountLinkingWindow_C_OnRequestAutoLogin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
