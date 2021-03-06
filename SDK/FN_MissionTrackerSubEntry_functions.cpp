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

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.GetHeightEstimate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMissionTrackerSubEntry_C::GetHeightEstimate()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb4115092);

	UMissionTrackerSubEntry_C_GetHeightEstimate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateCompletionAnnouncement
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionTrackerSubEntry_C::CreateCompletionAnnouncement()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7d042f8c);

	UMissionTrackerSubEntry_C_CreateCompletionAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleMissionUIEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortMissionState*       MissionElement                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer   EventTags                      (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UMissionTrackerSubEntry_C::HandleMissionUIEvent(class AFortMissionState* MissionElement, struct FGameplayTagContainer* EventTags)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfeeeede9);

	UMissionTrackerSubEntry_C_HandleMissionUIEvent_Params params;
	params.MissionElement = MissionElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventTags != nullptr)
		*EventTags = params.EventTags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.DrawAttention
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionTrackerSubEntry_C::DrawAttention()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x66b7487d);

	UMissionTrackerSubEntry_C_DrawAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionTrackerSubEntry_C::Update()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x896c1d94);

	UMissionTrackerSubEntry_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveCompletionIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionTrackerSubEntry_C::HideObjectiveCompletionIcon()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9ef1bf19);

	UMissionTrackerSubEntry_C_HideObjectiveCompletionIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ShowObjectiveWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionTrackerSubEntry_C::ShowObjectiveWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x63bb3e0d);

	UMissionTrackerSubEntry_C_ShowObjectiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HanldeObjectiveVisiblityOverrideChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortMissionVisibilityOverride New_Visibility_Override        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionTrackerSubEntry_C::HanldeObjectiveVisiblityOverrideChanged(class AFortObjectiveBase* Objective, EFortMissionVisibilityOverride New_Visibility_Override)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6338db33);

	UMissionTrackerSubEntry_C_HanldeObjectiveVisiblityOverrideChanged_Params params;
	params.Objective = Objective;
	params.New_Visibility_Override = New_Visibility_Override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateObjectiveContentWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionTrackerSubEntry_C::CreateObjectiveContentWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x48121bb7);

	UMissionTrackerSubEntry_C_CreateObjectiveContentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.StartEndingAnimations
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionTrackerSubEntry_C::StartEndingAnimations(class UWidgetAnimation* Animation)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x775ff679);

	UMissionTrackerSubEntry_C_StartEndingAnimations_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionTrackerSubEntry_C::HideObjectiveWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x18464e6c);

	UMissionTrackerSubEntry_C_HideObjectiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortMissionState*       Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionTrackerSubEntry_C::HandleUpdate(class AFortMissionState* Objective)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x285e55be);

	UMissionTrackerSubEntry_C_HandleUpdate_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveVisibilityChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           NewVisibility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionTrackerSubEntry_C::HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool NewVisibility)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2cd7256);

	UMissionTrackerSubEntry_C_HandleObjectiveVisibilityChanged_Params params;
	params.Objective = Objective;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveStatusChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortObjectiveStatus           NewStatus                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionTrackerSubEntry_C::HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, EFortObjectiveStatus NewStatus)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x368ce9e4);

	UMissionTrackerSubEntry_C_HandleObjectiveStatusChanged_Params params;
	params.Objective = Objective;
	params.NewStatus = NewStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Setup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionTrackerSubEntry_C::Setup(class AFortObjectiveBase* Objective)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa5ad12ea);

	UMissionTrackerSubEntry_C_Setup_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnObjectiveSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMissionTrackerSubEntry_C::OnObjectiveSet()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x120454bb);

	UMissionTrackerSubEntry_C_OnObjectiveSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnHiddenByHeightConstraintChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMissionTrackerSubEntry_C::OnHiddenByHeightConstraintChanged()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb2c002b1);

	UMissionTrackerSubEntry_C_OnHiddenByHeightConstraintChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ExecuteUbergraph_MissionTrackerSubEntry
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionTrackerSubEntry_C::ExecuteUbergraph_MissionTrackerSubEntry(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x47499607);

	UMissionTrackerSubEntry_C_ExecuteUbergraph_MissionTrackerSubEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.WidgetVisibilityChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionTrackerSubEntry_C::WidgetVisibilityChanged__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x14f58a0c);

	UMissionTrackerSubEntry_C_WidgetVisibilityChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
