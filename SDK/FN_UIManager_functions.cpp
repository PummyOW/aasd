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

// Function UIManager.UIManager_C.IsShowingModalsConfirmationsErrors
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShowing                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::IsShowingModalsConfirmationsErrors(bool* bShowing)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x45d2d941);

	UUIManager_C_IsShowingModalsConfirmationsErrors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShowing != nullptr)
		*bShowing = params.bShowing;
}


// Function UIManager.UIManager_C.ClearConfirmationLayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::ClearConfirmationLayer()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2c8b2510);

	UUIManager_C_ClearConfirmationLayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.RemoveModalPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* Panel                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::RemoveModalPanel(class UCommonActivatablePanel* Panel)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1bc559a8);

	UUIManager_C_RemoveModalPanel_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.PopModalPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::PopModalPanel(class UCommonActivatablePanel* ActivatablePanel)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x62a8dccf);

	UUIManager_C_PopModalPanel_Params params;
	params.ActivatablePanel = ActivatablePanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleStateContentUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIStateWidget_NUI*  NewStateWidget                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::HandleStateContentUpdated(class UFortUIStateWidget_NUI* NewStateWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb5695c78);

	UUIManager_C_HandleStateContentUpdated_Params params;
	params.NewStateWidget = NewStateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleControllerConnectionChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bConnected                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::HandleControllerConnectionChanged(bool bConnected)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x852ad0e3);

	UUIManager_C_HandleControllerConnectionChanged_Params params;
	params.bConnected = bConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.OnEndLatentWaitForConfirmationDialog
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDialogExternalLatentActionHandle WaitingDialogHandle            (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUIManager_C::OnEndLatentWaitForConfirmationDialog(struct FFortDialogExternalLatentActionHandle* WaitingDialogHandle)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfcfd01c);

	UUIManager_C_OnEndLatentWaitForConfirmationDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaitingDialogHandle != nullptr)
		*WaitingDialogHandle = params.WaitingDialogHandle;
}


// Function UIManager.UIManager_C.IsConsole
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUIManager_C::IsConsole()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe4ec2c9a);

	UUIManager_C_IsConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIManager.UIManager_C.DismissWebPurchase
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::DismissWebPurchase()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2bf22e20);

	UUIManager_C_DismissWebPurchase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.DisplayWebPurchase
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 WebWidget                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 OfferId                        (CPF_Parm, CPF_ZeroConstructor)

void UUIManager_C::DisplayWebPurchase(class UWidget* WebWidget, const struct FString& OfferId)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4b3a7006);

	UUIManager_C_DisplayWebPurchase_Params params;
	params.WebWidget = WebWidget;
	params.OfferId = OfferId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleDeactivatedErrorWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* DeactivatedPanel               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::HandleDeactivatedErrorWindow(class UCommonActivatablePanel* DeactivatedPanel)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7c853379);

	UUIManager_C_HandleDeactivatedErrorWindow_Params params;
	params.DeactivatedPanel = DeactivatedPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ShowErrorInErrorWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortErrorInfo          ErrorInfo                      (CPF_Parm)

void UUIManager_C::ShowErrorInErrorWindow(const struct FFortErrorInfo& ErrorInfo)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe07d2fdf);

	UUIManager_C_ShowErrorInErrorWindow_Params params;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleDeactivatedPanelModalLayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* DeactivatedPanel               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::HandleDeactivatedPanelModalLayer(class UCommonActivatablePanel* DeactivatedPanel)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x57eca25b);

	UUIManager_C_HandleDeactivatedPanelModalLayer_Params params;
	params.DeactivatedPanel = DeactivatedPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.AddActivatablePanelToModalLayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::AddActivatablePanelToModalLayer(class UCommonActivatablePanel* ActivatablePanel)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x96dacc15);

	UUIManager_C_AddActivatablePanelToModalLayer_Params params;
	params.ActivatablePanel = ActivatablePanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::Initialize()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5e7a9d2d);

	UUIManager_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.QueueConfirmation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDialogDescription_NUI ConfirmationDescription        (CPF_Parm)

void UUIManager_C::QueueConfirmation(const struct FFortDialogDescription_NUI& ConfirmationDescription)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xffa4baeb);

	UUIManager_C_QueueConfirmation_Params params;
	params.ConfirmationDescription = ConfirmationDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ShowNextConfirmation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::ShowNextConfirmation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x35ef44d8);

	UUIManager_C_ShowNextConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleDeactivatedPanelConfirmationLayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* DeactivatedPanel               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::HandleDeactivatedPanelConfirmationLayer(class UCommonActivatablePanel* DeactivatedPanel)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x85adc261);

	UUIManager_C_HandleDeactivatedPanelConfirmationLayer_Params params;
	params.DeactivatedPanel = DeactivatedPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleModalContentCleared
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::HandleModalContentCleared()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd377f149);

	UUIManager_C_HandleModalContentCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.IsStateContentChildShowing
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUIManager_C::IsStateContentChildShowing()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6ebee966);

	UUIManager_C_IsStateContentChildShowing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIManager.UIManager_C.BindDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::BindDelegates()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb18e8ed6);

	UUIManager_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ShowNextModalWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::ShowNextModalWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa21759a);

	UUIManager_C_ShowNextModalWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.QueueModalPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::QueueModalPanel(class UCommonActivatablePanel* ActivatablePanel)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1734dacf);

	UUIManager_C_QueueModalPanel_Params params;
	params.ActivatablePanel = ActivatablePanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.PopCurrentModal
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::PopCurrentModal()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdc012716);

	UUIManager_C_PopCurrentModal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ClearLayers
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::ClearLayers()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2eb3dbe0);

	UUIManager_C_ClearLayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.DisplayStateContent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bDisplay                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::DisplayStateContent(bool* bDisplay)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x521e0811);

	UUIManager_C_DisplayStateContent_Params params;
	params.bDisplay = bDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.OnStateStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUIManager_C::OnStateStarted()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x52a6fafe);

	UUIManager_C_OnStateStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUIManager_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1c4ec559);

	UUIManager_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.KillConfirmation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUIManager_C::KillConfirmation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5bcc4474);

	UUIManager_C_KillConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.DisplayErrorDialog
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortErrorInfo*         Info                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUIManager_C::DisplayErrorDialog(struct FFortErrorInfo* Info)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1042861b);

	UUIManager_C_DisplayErrorDialog_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.DebugToggleInvalidationPanel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::DebugToggleInvalidationPanel()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xcbdd61ba);

	UUIManager_C_DebugToggleInvalidationPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUIManager_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbe7e3382);

	UUIManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.OnShowConfirmation_NUI
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDialogDescription_NUI* Description                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUIManager_C::OnShowConfirmation_NUI(struct FFortDialogDescription_NUI* Description)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xaf486061);

	UUIManager_C_OnShowConfirmation_NUI_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.UpdateStateWidgetContent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIStateWidget_NUI** StateWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::UpdateStateWidgetContent(class UFortUIStateWidget_NUI** StateWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xec27ee6e);

	UUIManager_C_UpdateStateWidgetContent_Params params;
	params.StateWidget = StateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.QueueActivatablePanelIntoModalLayer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel** Panel                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::QueueActivatablePanelIntoModalLayer(class UCommonActivatablePanel** Panel)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa0c7a708);

	UUIManager_C_QueueActivatablePanelIntoModalLayer_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.OnStateEnded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUIManager_C::OnStateEnded()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7ee6aedd);

	UUIManager_C_OnStateEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.PopActivatablePanelInModalLayer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel** Panel                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::PopActivatablePanelInModalLayer(class UCommonActivatablePanel** Panel)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xec60052b);

	UUIManager_C_PopActivatablePanelInModalLayer_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.CloseConfirmationWindow
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::CloseConfirmationWindow()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x49cf4032);

	UUIManager_C_CloseConfirmationWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.CloseErrorWindow
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::CloseErrorWindow()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x203313a5);

	UUIManager_C_CloseErrorWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ExecuteUbergraph_UIManager
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::ExecuteUbergraph_UIManager(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6d39f2ba);

	UUIManager_C_ExecuteUbergraph_UIManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
