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

// Function InteractionIndicator.InteractionIndicator_C.UpdateKeybinds
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInteractionIndicator_C::UpdateKeybinds()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x40ddf899);

	UInteractionIndicator_C_UpdateKeybinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.ShowDefenderBeaconWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABuildingTrapDefender*   BuildingTrap                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionIndicator_C::ShowDefenderBeaconWidget(class ABuildingTrapDefender* BuildingTrap)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xcbcb5e13);

	UInteractionIndicator_C_ShowDefenderBeaconWidget_Params params;
	params.BuildingTrap = BuildingTrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.HandleInteractionUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo* Interaction                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionIndicator_C::HandleInteractionUpdated(class UFortInteractContextInfo* Interaction)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x68f2f0fe);

	UInteractionIndicator_C_HandleInteractionUpdated_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.ShowBasicInteractionWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInteractionIndicator_C::ShowBasicInteractionWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4e4d9fe8);

	UInteractionIndicator_C_ShowBasicInteractionWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.ShowPickupWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortPickup*             Pickup                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionIndicator_C::ShowPickupWidget(class AFortPickup* Pickup)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x16626f6a);

	UInteractionIndicator_C_ShowPickupWidget_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.HandleInteractionChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo* Interaction                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionIndicator_C::HandleInteractionChanged(class UFortInteractContextInfo* Interaction)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x609dfb23);

	UInteractionIndicator_C_HandleInteractionChanged_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInteractionIndicator_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x19520624);

	UInteractionIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInteractionIndicator_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x29deecdb);

	UInteractionIndicator_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionIndicator.InteractionIndicator_C.ExecuteUbergraph_InteractionIndicator
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractionIndicator_C::ExecuteUbergraph_InteractionIndicator(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdf40fefa);

	UInteractionIndicator_C_ExecuteUbergraph_InteractionIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
