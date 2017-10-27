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

// Function ItemCount.ItemCount_C.SetBrushAndTextStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    InBrushSize                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  InStyle                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCount_C::SetBrushAndTextStyle(TEnumAsByte<EFortBrushSize> InBrushSize, class UClass* InStyle)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb2fab4a6);

	UItemCount_C_SetBrushAndTextStyle_Params params;
	params.InBrushSize = InBrushSize;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.UpdateOverrideState
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemCount_C::UpdateOverrideState()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7a837bf3);

	UItemCount_C_UpdateOverrideState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.SetOverrideValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            OverrrideValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCount_C::SetOverrideValue(int OverrrideValue)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9db42e38);

	UItemCount_C_SetOverrideValue_Params params;
	params.OverrrideValue = OverrrideValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.SetIsBeingPreviewed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BeingPreviewed                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCount_C::SetIsBeingPreviewed(bool BeingPreviewed)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x806fca5d);

	UItemCount_C_SetIsBeingPreviewed_Params params;
	params.BeingPreviewed = BeingPreviewed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.SetItemDefinition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCount_C::SetItemDefinition(class UFortItemDefinition* ItemDefinition)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc7fddbd7);

	UItemCount_C_SetItemDefinition_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemCount_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x41a0fb56);

	UItemCount_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCount_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4792fbad);

	UItemCount_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCount.ItemCount_C.ExecuteUbergraph_ItemCount
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCount_C::ExecuteUbergraph_ItemCount(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6841cecf);

	UItemCount_C_ExecuteUbergraph_ItemCount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
