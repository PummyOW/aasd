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

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleShowHideWeaponRail
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaQuickbarPrimary_C::HandleShowHideWeaponRail()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleShowHideWeaponRail");

	UAthenaQuickbarPrimary_C_HandleShowHideWeaponRail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleUpdateSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaQuickbarPrimary_C::HandleUpdateSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleUpdateSlots");

	UAthenaQuickbarPrimary_C_HandleUpdateSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HasOneNonHarvestWeapon
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasNonHarvestWeapon            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaQuickbarPrimary_C::HasOneNonHarvestWeapon(bool* HasNonHarvestWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HasOneNonHarvestWeapon");

	UAthenaQuickbarPrimary_C_HasOneNonHarvestWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasNonHarvestWeapon != nullptr)
		*HasNonHarvestWeapon = params.HasNonHarvestWeapon;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Show Primary Quickbar Rail
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaQuickbarPrimary_C::Show_Primary_Quickbar_Rail(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Show Primary Quickbar Rail");

	UAthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleKeybindsChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaQuickbarPrimary_C::HandleKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleKeybindsChanged");

	UAthenaQuickbarPrimary_C_HandleKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleInputMethodChanged_Bind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaQuickbarPrimary_C::HandleInputMethodChanged_Bind(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleInputMethodChanged_Bind");

	UAthenaQuickbarPrimary_C_HandleInputMethodChanged_Bind_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaQuickbarPrimary_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Destruct");

	UAthenaQuickbarPrimary_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickBarSlotFocusChanged_Bind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortQuickBars                 QuickbarIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaQuickbarPrimary_C::OnQuickBarSlotFocusChanged_Bind(EFortQuickBars QuickbarIndex, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickBarSlotFocusChanged_Bind");

	UAthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind_Params params;
	params.QuickbarIndex = QuickbarIndex;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Maximize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaQuickbarPrimary_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Maximize");

	UAthenaQuickbarPrimary_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Minimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaQuickbarPrimary_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Minimize");

	UAthenaQuickbarPrimary_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaQuickbarPrimary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Construct");

	UAthenaQuickbarPrimary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickbarContentsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortQuickBars*                QuickbarIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaQuickbarPrimary_C::OnQuickbarContentsChanged(EFortQuickBars* QuickbarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickbarContentsChanged");

	UAthenaQuickbarPrimary_C_OnQuickbarContentsChanged_Params params;
	params.QuickbarIndex = QuickbarIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.ExecuteUbergraph_AthenaQuickbarPrimary
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaQuickbarPrimary_C::ExecuteUbergraph_AthenaQuickbarPrimary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.ExecuteUbergraph_AthenaQuickbarPrimary");

	UAthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
