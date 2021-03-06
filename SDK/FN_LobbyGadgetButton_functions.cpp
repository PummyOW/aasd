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

// Function LobbyGadgetButton.LobbyGadgetButton_C.GetLocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bLocked                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyGadgetButton_C::GetLocked(bool* bLocked)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x56b5cf4b);

	ULobbyGadgetButton_C_GetLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLocked != nullptr)
		*bLocked = params.bLocked;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.SetLocked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bLocked                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyGadgetButton_C::SetLocked(bool bLocked)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7193351f);

	ULobbyGadgetButton_C_SetLocked_Params params;
	params.bLocked = bLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.GetGadgetItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortWorldItem*          GadgetItem                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyGadgetButton_C::GetGadgetItem(class UFortWorldItem** GadgetItem)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xef8bc818);

	ULobbyGadgetButton_C_GetGadgetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GadgetItem != nullptr)
		*GadgetItem = params.GadgetItem;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortWorldItem*          WorldItem                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyGadgetButton_C::Refresh(class UFortWorldItem* WorldItem)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5cc98034);

	ULobbyGadgetButton_C_Refresh_Params params;
	params.WorldItem = WorldItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyGadgetButton_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbc48df65);

	ULobbyGadgetButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyGadgetButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfabaf572);

	ULobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyGadgetButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa11f8482);

	ULobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.ExecuteUbergraph_LobbyGadgetButton
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyGadgetButton_C::ExecuteUbergraph_LobbyGadgetButton(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x77c5d051);

	ULobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ULobbyGadgetButton_C*    GadgetButton                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyGadgetButton_C::OnButtonHovered__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd8d00548);

	ULobbyGadgetButton_C_OnButtonHovered__DelegateSignature_Params params;
	params.GadgetButton = GadgetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ULobbyGadgetButton_C*    GadgetButton                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyGadgetButton_C::OnButtonClicked__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa57bb32a);

	ULobbyGadgetButton_C_OnButtonClicked__DelegateSignature_Params params;
	params.GadgetButton = GadgetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
