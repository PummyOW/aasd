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

// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.LeaveZone
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupCenterMessageModalPanel_C::LeaveZone()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x30005044);

	UPopupCenterMessageModalPanel_C_LeaveZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateMatchTimerText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           StopTimer                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopupCenterMessageModalPanel_C::UpdateMatchTimerText(bool* StopTimer)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7c904779);

	UPopupCenterMessageModalPanel_C_UpdateMatchTimerText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StopTimer != nullptr)
		*StopTimer = params.StopTimer;
}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECenterPopupMessageStateEnum   NewState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopupCenterMessageModalPanel_C::UpdateState(ECenterPopupMessageStateEnum NewState)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa66760b1);

	UPopupCenterMessageModalPanel_C_UpdateState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateMatchTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupCenterMessageModalPanel_C::UpdateMatchTimer()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3ea2039c);

	UPopupCenterMessageModalPanel_C_UpdateMatchTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.StartMatchTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupCenterMessageModalPanel_C::StartMatchTimer()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1a72e65d);

	UPopupCenterMessageModalPanel_C_StartMatchTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPopupCenterMessageModalPanel_C::OnActivated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa0ebcb4f);

	UPopupCenterMessageModalPanel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.ExecuteUbergraph_PopupCenterMessageModalPanel
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopupCenterMessageModalPanel_C::ExecuteUbergraph_PopupCenterMessageModalPanel(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x39b00ce4);

	UPopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
