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

// Function JoinServer.JoinServer_C.HandleLobbyConnectingToGame
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::HandleLobbyConnectingToGame()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfaf58f0a);

	UJoinServer_C_HandleLobbyConnectingToGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowAbandoningProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::ShowAbandoningProgress()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfa2eb77a);

	UJoinServer_C_ShowAbandoningProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowRetryRejoinWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Failure                        (CPF_Parm)
// bool                           AllowRetry                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::ShowRetryRejoinWindow(const struct FText& Failure, bool AllowRetry)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6367f027);

	UJoinServer_C_ShowRetryRejoinWindow_Params params;
	params.Failure = Failure;
	params.AllowRetry = AllowRetry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowRetryRejoinSession
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::ShowRetryRejoinSession()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x35bac015);

	UJoinServer_C_ShowRetryRejoinSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowRejoiningProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::ShowRejoiningProgress()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7016d47e);

	UJoinServer_C_ShowRejoiningProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HideRejoinWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AbandonSession                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::HideRejoinWindow(bool AbandonSession)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xea4b6092);

	UJoinServer_C_HideRejoinWindow_Params params;
	params.AbandonSession = AbandonSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowRejoinWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::ShowRejoinWindow()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf2927545);

	UJoinServer_C_ShowRejoinWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleGetMainMenuContent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UJoinServer_C::HandleGetMainMenuContent()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5dcdb38e);

	UJoinServer_C_HandleGetMainMenuContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JoinServer.JoinServer_C.ShowTutorialCanceled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::ShowTutorialCanceled()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xde3bfcad);

	UJoinServer_C_ShowTutorialCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.GetMatchmakingError
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EMatchmakingCompleteResult     MatchMakingError               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ErrorText                      (CPF_Parm, CPF_OutParm)

void UJoinServer_C::GetMatchmakingError(EMatchmakingCompleteResult MatchMakingError, struct FText* ErrorText)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa823d6e9);

	UJoinServer_C_GetMatchmakingError_Params params;
	params.MatchMakingError = MatchMakingError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorText != nullptr)
		*ErrorText = params.ErrorText;
}


// Function JoinServer.JoinServer_C.HandleLobbyTimeUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TimeRemaining                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::HandleLobbyTimeUpdated(int TimeRemaining)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfbab49b);

	UJoinServer_C_HandleLobbyTimeUpdated_Params params;
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.SkipTutorial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::SkipTutorial()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x893ea6d2);

	UJoinServer_C_SkipTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.StartTutorialMatchmakingFlow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::StartTutorialMatchmakingFlow()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb21a7bd7);

	UJoinServer_C_StartTutorialMatchmakingFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleEnterState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortUIState                   PreviousState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::HandleEnterState(EFortUIState PreviousState)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x36367b0e);

	UJoinServer_C_HandleEnterState_Params params;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleLobbyDisconnected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::HandleLobbyDisconnected()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x61970974);

	UJoinServer_C_HandleLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleMatchmakingStateChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMatchmakingState> OldState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EMatchmakingState> NewState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::HandleMatchmakingStateChange(TEnumAsByte<EMatchmakingState> OldState, TEnumAsByte<EMatchmakingState> NewState)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x25b6007c);

	UJoinServer_C_HandleMatchmakingStateChange_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleMatchmakingComplete
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EMatchmakingCompleteResult     Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::HandleMatchmakingComplete(EMatchmakingCompleteResult Result)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x59b82a30);

	UJoinServer_C_HandleMatchmakingComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::Initialize()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4f63a787);

	UJoinServer_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF(EFortDialogResult Result, const struct FName& ResultName)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfeccb211);

	UJoinServer_C_DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnFailure_B419884742513722D11D8AB4D90DE5E2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::OnFailure_B419884742513722D11D8AB4D90DE5E2()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb4e23c6d);

	UJoinServer_C_OnFailure_B419884742513722D11D8AB4D90DE5E2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnSuccess_B419884742513722D11D8AB4D90DE5E2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::OnSuccess_B419884742513722D11D8AB4D90DE5E2()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3cf83498);

	UJoinServer_C_OnSuccess_B419884742513722D11D8AB4D90DE5E2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnFailure_C91A02504569664A4B1E259E5F57A79D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::OnFailure_C91A02504569664A4B1E259E5F57A79D()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdd3fc240);

	UJoinServer_C_OnFailure_C91A02504569664A4B1E259E5F57A79D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnSuccess_C91A02504569664A4B1E259E5F57A79D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::OnSuccess_C91A02504569664A4B1E259E5F57A79D()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4cb50689);

	UJoinServer_C_OnSuccess_C91A02504569664A4B1E259E5F57A79D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.RequestTutorialRetry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::RequestTutorialRetry()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x649b1dc8);

	UJoinServer_C_RequestTutorialRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowSkipTutorial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::ShowSkipTutorial()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x27e6c1c9);

	UJoinServer_C_ShowSkipTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleClientEvent_RejoinStart
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UJoinServer_C::HandleClientEvent_RejoinStart(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa4b6460a);

	UJoinServer_C_HandleClientEvent_RejoinStart_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleRequestRejoinRetry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::HandleRequestRejoinRetry()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9b8d5d91);

	UJoinServer_C_HandleRequestRejoinRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleRequestAbandon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::HandleRequestAbandon()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa10f0a35);

	UJoinServer_C_HandleRequestAbandon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleClientEvent_OnboardingStartMatchmaking
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UJoinServer_C::HandleClientEvent_OnboardingStartMatchmaking(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x782cc8a6);

	UJoinServer_C_HandleClientEvent_OnboardingStartMatchmaking_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UJoinServer_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf819b480);

	UJoinServer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnEnterState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5135ecfb);

	UJoinServer_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::ExecuteUbergraph_JoinServer(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x29fdbb58);

	UJoinServer_C_ExecuteUbergraph_JoinServer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
