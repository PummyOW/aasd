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

// Function HalloweenQuestsTile.HalloweenQuestsTile_C.SetupSideQuestRewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHalloweenQuestsTile_C::SetupSideQuestRewards()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x83a5c54d);

	UHalloweenQuestsTile_C_SetupSideQuestRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.Configure Rewards and Timers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHalloweenQuestsTile_C::Configure_Rewards_and_Timers()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6f475074);

	UHalloweenQuestsTile_C_Configure_Rewards_and_Timers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.PopulateVladQuestArray
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHalloweenQuestsTile_C::PopulateVladQuestArray()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x37ad1fb9);

	UHalloweenQuestsTile_C_PopulateVladQuestArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.IsEventUnlocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsUnlocked                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHalloweenQuestsTile_C::IsEventUnlocked(bool* IsUnlocked)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x76ca1d96);

	UHalloweenQuestsTile_C_IsEventUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUnlocked != nullptr)
		*IsUnlocked = params.IsUnlocked;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.AdvanceRewardsDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHalloweenQuestsTile_C::AdvanceRewardsDisplay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7bf5b7fd);

	UHalloweenQuestsTile_C_AdvanceRewardsDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.UpdateSideQuestInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHalloweenQuestsTile_C::UpdateSideQuestInfo()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfdd9398d);

	UHalloweenQuestsTile_C_UpdateSideQuestInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHalloweenQuestsTile_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2f8f6dba);

	UHalloweenQuestsTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.Handle OnQuestsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHalloweenQuestsTile_C::Handle_OnQuestsUpdated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdf65789e);

	UHalloweenQuestsTile_C_Handle_OnQuestsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHalloweenQuestsTile_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5bb174e1);

	UHalloweenQuestsTile_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.ExecuteUbergraph_HalloweenQuestsTile
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHalloweenQuestsTile_C::ExecuteUbergraph_HalloweenQuestsTile(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xee5fb919);

	UHalloweenQuestsTile_C_ExecuteUbergraph_HalloweenQuestsTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
