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

// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.OnModalDisplayed
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ECenterPopupMessageStateEnum*  NewState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonActivatablePanel** ModalPopup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopupCenterMessageWidget_C::OnModalDisplayed(ECenterPopupMessageStateEnum* NewState, class UCommonActivatablePanel** ModalPopup)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x558ad508);

	UPopupCenterMessageWidget_C_OnModalDisplayed_Params params;
	params.NewState = NewState;
	params.ModalPopup = ModalPopup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopupCenterMessageWidget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x76b2e686);

	UPopupCenterMessageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.UpdateStateEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupCenterMessageWidget_C::UpdateStateEvent()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb39fb629);

	UPopupCenterMessageWidget_C_UpdateStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopupCenterMessageWidget_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdfeb95);

	UPopupCenterMessageWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.ExecuteUbergraph_PopupCenterMessageWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopupCenterMessageWidget_C::ExecuteUbergraph_PopupCenterMessageWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb4ddcd11);

	UPopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
