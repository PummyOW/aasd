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

// Function StatItemLarge.StatItemLarge_C.UpdateValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CurrentValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortStatValueDisplayType      DisplayType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortBuffState                 BuffState                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatItemLarge_C::UpdateValue(float NewValue, float CurrentValue, EFortStatValueDisplayType DisplayType, EFortBuffState BuffState)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe42e2383);

	UStatItemLarge_C_UpdateValue_Params params;
	params.NewValue = NewValue;
	params.CurrentValue = CurrentValue;
	params.DisplayType = DisplayType;
	params.BuffState = BuffState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.UpdateIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatItemLarge_C::UpdateIcon()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7057cf93);

	UStatItemLarge_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.UpdateDisplayData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatItemLarge_C::UpdateDisplayData()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x880f1a8a);

	UStatItemLarge_C_UpdateDisplayData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.GetLocalPlayerId
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        LocalPlayerNetId               (CPF_Parm, CPF_OutParm)

void UStatItemLarge_C::GetLocalPlayerId(struct FUniqueNetIdRepl* LocalPlayerNetId)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdaa75b82);

	UStatItemLarge_C_GetLocalPlayerId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalPlayerNetId != nullptr)
		*LocalPlayerNetId = params.LocalPlayerNetId;
}


// Function StatItemLarge.StatItemLarge_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatItemLarge_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6d3e557a);

	UStatItemLarge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.DisplayAttributeChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatItemLarge_C::DisplayAttributeChanged()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8efc650b);

	UStatItemLarge_C_DisplayAttributeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatItemLarge_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x93f283d1);

	UStatItemLarge_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.PreviewStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatItemLarge_C::PreviewStarted()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfaa401b0);

	UStatItemLarge_C_PreviewStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.PreviewEnded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatItemLarge_C::PreviewEnded()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7b6abe2b);

	UStatItemLarge_C_PreviewEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.ValueChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         Delta                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatItemLarge_C::ValueChanged(float* Delta)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa6f5718e);

	UStatItemLarge_C_ValueChanged_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.ExecuteUbergraph_StatItemLarge
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatItemLarge_C::ExecuteUbergraph_StatItemLarge(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xac87edb9);

	UStatItemLarge_C_ExecuteUbergraph_StatItemLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
