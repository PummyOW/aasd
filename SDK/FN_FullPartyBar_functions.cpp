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

// Function FullPartyBar.FullPartyBar_C.GetTooltipStat
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            Token                          (CPF_ConstParm, CPF_Parm)
// struct FFortDisplayAttribute   OutDisplayAttribute            (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UFullPartyBar_C::GetTooltipStat(const struct FGameplayTag& Token, struct FFortDisplayAttribute* OutDisplayAttribute)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc9ae4cbc);

	UFullPartyBar_C_GetTooltipStat_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDisplayAttribute != nullptr)
		*OutDisplayAttribute = params.OutDisplayAttribute;

	return params.ReturnValue;
}


// Function FullPartyBar.FullPartyBar_C.InitializeStatLabels
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullPartyBar_C::InitializeStatLabels()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x153679a2);

	UFullPartyBar_C_InitializeStatLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.Get_Tech_ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UFullPartyBar_C::Get_Tech_ToolTipWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc54218ec);

	UFullPartyBar_C_Get_Tech_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullPartyBar.FullPartyBar_C.Get_Resistance_ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UFullPartyBar_C::Get_Resistance_ToolTipWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3fb4f);

	UFullPartyBar_C_Get_Resistance_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullPartyBar.FullPartyBar_C.Get_Offense_ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UFullPartyBar_C::Get_Offense_ToolTipWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8e048d06);

	UFullPartyBar_C_Get_Offense_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullPartyBar.FullPartyBar_C.Get_Fortitude_ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UFullPartyBar_C::Get_Fortitude_ToolTipWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x94a77f8c);

	UFullPartyBar_C_Get_Fortitude_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullPartyBar.FullPartyBar_C.GetTotalNumFriendCodes
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Num_Codes                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::GetTotalNumFriendCodes(int* Num_Codes)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2496a4c7);

	UFullPartyBar_C_GetTotalNumFriendCodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num_Codes != nullptr)
		*Num_Codes = params.Num_Codes;
}


// Function FullPartyBar.FullPartyBar_C.isTeammateSlotPopulated
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            inSlotNUmber                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UFullPartyBar_C::isTeammateSlotPopulated(int inSlotNUmber)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe535681f);

	UFullPartyBar_C_isTeammateSlotPopulated_Params params;
	params.inSlotNUmber = inSlotNUmber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullPartyBar.FullPartyBar_C.OpenPartyPrivacy
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullPartyBar_C::OpenPartyPrivacy()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3ff249d7);

	UFullPartyBar_C_OpenPartyPrivacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.HandlePartybarUIFeatureChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortUIFeature                 Feature                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortUIFeatureState            FeatureState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::HandlePartybarUIFeatureChanged(EFortUIFeature Feature, EFortUIFeatureState FeatureState)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xadeb9212);

	UFullPartyBar_C_HandlePartybarUIFeatureChanged_Params params;
	params.Feature = Feature;
	params.FeatureState = FeatureState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullPartyBar_C::Initialize()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x572fc309);

	UFullPartyBar_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.BindDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullPartyBar_C::BindDelegates()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x49369972);

	UFullPartyBar_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFullPartyBar_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3423c52e);

	UFullPartyBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd8f57669);

	UFullPartyBar_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe2a28c5d);

	UFullPartyBar_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7a967c09);

	UFullPartyBar_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa9d29d75);

	UFullPartyBar_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFullPartyBar_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6f43a8cd);

	UFullPartyBar_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x65de1b15);

	UFullPartyBar_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xeb33449a);

	UFullPartyBar_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x23bdbddf);

	UFullPartyBar_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x29445b5f);

	UFullPartyBar_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5eb1b7ee);

	UFullPartyBar_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x592b1a6e);

	UFullPartyBar_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x37af553e);

	UFullPartyBar_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.ExecuteUbergraph_FullPartyBar
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullPartyBar_C::ExecuteUbergraph_FullPartyBar(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1289ea07);

	UFullPartyBar_C_ExecuteUbergraph_FullPartyBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBar.FullPartyBar_C.OnButtonHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   HelpText                       (CPF_Parm)

void UFullPartyBar_C::OnButtonHovered__DelegateSignature(const struct FText& HelpText)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9a57deb8);

	UFullPartyBar_C_OnButtonHovered__DelegateSignature_Params params;
	params.HelpText = HelpText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
