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

// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ToggleDisabledTabVisuals
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldBeDisabled              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLeaderboardTab_C::ToggleDisabledTabVisuals(bool bShouldBeDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ToggleDisabledTabVisuals");

	UAthenaLeaderboardTab_C_ToggleDisabledTabVisuals_Params params;
	params.bShouldBeDisabled = bShouldBeDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnShowQueryThrobber
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLeaderboardTab_C::OnShowQueryThrobber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnShowQueryThrobber");

	UAthenaLeaderboardTab_C_OnShowQueryThrobber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStateChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bQueryInProgress               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLeaderboardTab_C::OnQueryStateChanged(bool bQueryInProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStateChanged");

	UAthenaLeaderboardTab_C_OnQueryStateChanged_Params params;
	params.bQueryInProgress = bQueryInProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnFriendTypeChangeGamepad
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCommitted                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLeaderboardTab_C::OnFriendTypeChangeGamepad(bool* bCommitted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnFriendTypeChangeGamepad");

	UAthenaLeaderboardTab_C_OnFriendTypeChangeGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommitted != nullptr)
		*bCommitted = params.bCommitted;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnPlaylistChangeGamepad
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCommitted                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLeaderboardTab_C::OnPlaylistChangeGamepad(bool* bCommitted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnPlaylistChangeGamepad");

	UAthenaLeaderboardTab_C_OnPlaylistChangeGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommitted != nullptr)
		*bCommitted = params.bCommitted;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaLeaderboardTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnActivated");

	UAthenaLeaderboardTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLeaderboardTab_C::BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature");

	UAthenaLeaderboardTab_C_BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaLeaderboardTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.Construct");

	UAthenaLeaderboardTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ActiveWidgetIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLeaderboardTab_C::BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature");

	UAthenaLeaderboardTab_C_BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLeaderboardTab_C::BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature");

	UAthenaLeaderboardTab_C_BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLeaderboardTab_C::BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature");

	UAthenaLeaderboardTab_C_BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLeaderboardTab_C::BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature");

	UAthenaLeaderboardTab_C_BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateTabButtonText
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton**          Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAthenaPlaylistLeaderboardData* PlaylistTabData                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAthenaLeaderboardTab_C::OnUpdateTabButtonText(class UCommonButton** Button, struct FAthenaPlaylistLeaderboardData* PlaylistTabData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateTabButtonText");

	UAthenaLeaderboardTab_C_OnUpdateTabButtonText_Params params;
	params.Button = Button;
	params.PlaylistTabData = PlaylistTabData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateLeaderboardListUI
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bWasSuccessful                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortLeaderboardRowProxyInstance** LocalUserRow                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText*                  ErrorStr                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAthenaLeaderboardTab_C::OnUpdateLeaderboardListUI(bool* bWasSuccessful, class UFortLeaderboardRowProxyInstance** LocalUserRow, struct FText* ErrorStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateLeaderboardListUI");

	UAthenaLeaderboardTab_C_OnUpdateLeaderboardListUI_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.LocalUserRow = LocalUserRow;
	params.ErrorStr = ErrorStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateListHeader
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FAthenaPlaylistLeaderboardData* PlaylistTabData                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAthenaLeaderboardTab_C::OnUpdateListHeader(struct FAthenaPlaylistLeaderboardData* PlaylistTabData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateListHeader");

	UAthenaLeaderboardTab_C_OnUpdateListHeader_Params params;
	params.PlaylistTabData = PlaylistTabData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaLeaderboardTab_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnDeactivated");

	UAthenaLeaderboardTab_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryFinished
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaLeaderboardTab_C::OnQueryFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryFinished");

	UAthenaLeaderboardTab_C_OnQueryFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaLeaderboardTab_C::OnQueryStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStarted");

	UAthenaLeaderboardTab_C_OnQueryStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ExecuteUbergraph_AthenaLeaderboardTab
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLeaderboardTab_C::ExecuteUbergraph_AthenaLeaderboardTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ExecuteUbergraph_AthenaLeaderboardTab");

	UAthenaLeaderboardTab_C_ExecuteUbergraph_AthenaLeaderboardTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
