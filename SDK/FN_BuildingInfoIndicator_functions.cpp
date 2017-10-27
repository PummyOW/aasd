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

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.RefreshBuildingInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuildingInfoIndicator_C::RefreshBuildingInfo()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc8fbd314);

	UBuildingInfoIndicator_C_RefreshBuildingInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleQuickbarFocusChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortQuickBars                 QuickBar                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            QuickBarSlot                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingInfoIndicator_C::HandleQuickbarFocusChanged(EFortQuickBars QuickBar, int QuickBarSlot)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x66efe1b9);

	UBuildingInfoIndicator_C_HandleQuickbarFocusChanged_Params params;
	params.QuickBar = QuickBar;
	params.QuickBarSlot = QuickBarSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleAttachedTrapChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABuildingTrap*           BuildingTrap                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingInfoIndicator_C::HandleAttachedTrapChanged(class ABuildingTrap* BuildingTrap)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6129e370);

	UBuildingInfoIndicator_C_HandleAttachedTrapChanged_Params params;
	params.BuildingTrap = BuildingTrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo_InteractionWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Interactable                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           CanBePlayerEdited              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsAnyTrapAttached              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsTrapAttachedFacingPlayer     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsPreviewTrapAttached          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortBuildingInteraction       InteractionType                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InteractionCost                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFortResourceType> BuildingMaterial               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingInfoIndicator_C::UpdateBuildingInfo_InteractionWidgets(bool Interactable, bool CanBePlayerEdited, bool IsAnyTrapAttached, bool IsTrapAttachedFacingPlayer, bool IsPreviewTrapAttached, EFortBuildingInteraction InteractionType, int InteractionCost, TEnumAsByte<EFortResourceType> BuildingMaterial)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4e52bf4c);

	UBuildingInfoIndicator_C_UpdateBuildingInfo_InteractionWidgets_Params params;
	params.Interactable = Interactable;
	params.CanBePlayerEdited = CanBePlayerEdited;
	params.IsAnyTrapAttached = IsAnyTrapAttached;
	params.IsTrapAttachedFacingPlayer = IsTrapAttachedFacingPlayer;
	params.IsPreviewTrapAttached = IsPreviewTrapAttached;
	params.InteractionType = InteractionType;
	params.InteractionCost = InteractionCost;
	params.BuildingMaterial = BuildingMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.IsCurrentBuildingBeingRepaired
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBuildingInfoIndicator_C::IsCurrentBuildingBeingRepaired()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xde2ee433);

	UBuildingInfoIndicator_C_IsCurrentBuildingBeingRepaired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingRepairCost
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewInteractionCost             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingInfoIndicator_C::UpdateBuildingRepairCost(int NewInteractionCost)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdb938408);

	UBuildingInfoIndicator_C_UpdateBuildingRepairCost_Params params;
	params.NewInteractionCost = NewInteractionCost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandlePlayerTargetingChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsTargeting                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingInfoIndicator_C::HandlePlayerTargetingChanged(bool bIsTargeting)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa3e07ccd);

	UBuildingInfoIndicator_C_HandlePlayerTargetingChanged_Params params;
	params.bIsTargeting = bIsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HideHealth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuildingInfoIndicator_C::HideHealth()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x55237029);

	UBuildingInfoIndicator_C_HideHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.Update Keybinds
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBuildingInfoIndicator_C::Update_Keybinds()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2664896b);

	UBuildingInfoIndicator_C_Update_Keybinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleTrapDurabilityChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentDurability              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxDurability                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingInfoIndicator_C::HandleTrapDurabilityChanged(float CurrentDurability, float MaxDurability)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xef8a425f);

	UBuildingInfoIndicator_C_HandleTrapDurabilityChanged_Params params;
	params.CurrentDurability = CurrentDurability;
	params.MaxDurability = MaxDurability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingHealthChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Health                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingInfoIndicator_C::HandleBuildingHealthChanged(float Health)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf192f461);

	UBuildingInfoIndicator_C_HandleBuildingHealthChanged_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingFocused
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABuildingActor*          FocusedBuilding                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingInfoIndicator_C::HandleBuildingFocused(class ABuildingActor* FocusedBuilding)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x54ea5fb4);

	UBuildingInfoIndicator_C_HandleBuildingFocused_Params params;
	params.FocusedBuilding = FocusedBuilding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortFocusedBuildingInfo NewBuildingInfo                (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBuildingInfoIndicator_C::UpdateBuildingInfo(struct FFortFocusedBuildingInfo* NewBuildingInfo)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x75832064);

	UBuildingInfoIndicator_C_UpdateBuildingInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewBuildingInfo != nullptr)
		*NewBuildingInfo = params.NewBuildingInfo;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBuildingInfoIndicator_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1f13d102);

	UBuildingInfoIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.ExecuteUbergraph_BuildingInfoIndicator
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBuildingInfoIndicator_C::ExecuteUbergraph_BuildingInfoIndicator(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6c158d0e);

	UBuildingInfoIndicator_C_ExecuteUbergraph_BuildingInfoIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
