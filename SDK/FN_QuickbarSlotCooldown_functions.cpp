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

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Initialize
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EItemDisplayStyle> QuickbarItemDisplayStyle       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<EFortItemCooldownType>  DesiredCooldownTypesSupported  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UQuickbarSlotCooldown_C::Initialize(TEnumAsByte<EItemDisplayStyle> QuickbarItemDisplayStyle, TArray<EFortItemCooldownType>* DesiredCooldownTypesSupported)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xab2414ab);

	UQuickbarSlotCooldown_C_Initialize_Params params;
	params.QuickbarItemDisplayStyle = QuickbarItemDisplayStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredCooldownTypesSupported != nullptr)
		*DesiredCooldownTypesSupported = params.DesiredCooldownTypesSupported;
}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Show Countdown
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlotCooldown_C::Show_Countdown(bool Show)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2434dfdb);

	UQuickbarSlotCooldown_C_Show_Countdown_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EFortItemCooldownType*         CooldownType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlotCooldown_C::OnCooldownStarted(EFortItemCooldownType* CooldownType)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3ececc8c);

	UQuickbarSlotCooldown_C_OnCooldownStarted_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStopped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EFortItemCooldownType*         CooldownType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlotCooldown_C::OnCooldownStopped(EFortItemCooldownType* CooldownType)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7018b6fc);

	UQuickbarSlotCooldown_C_OnCooldownStopped_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.ExecuteUbergraph_QuickbarSlotCooldown
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlotCooldown_C::ExecuteUbergraph_QuickbarSlotCooldown(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa30d1c6);

	UQuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
