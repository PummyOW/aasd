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

// Function PotentialResourceWidget.PotentialResourceWidget_C.ShowPotentialResource
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               PotentialResource              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWeakpointDamage               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPotentialResourceWidget_C::ShowPotentialResource(class UFortItem* PotentialResource, bool bWeakpointDamage)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9461668e);

	UPotentialResourceWidget_C_ShowPotentialResource_Params params;
	params.PotentialResource = PotentialResource;
	params.bWeakpointDamage = bWeakpointDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.SetupFont
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPotentialResourceWidget_C::SetupFont()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb367ee15);

	UPotentialResourceWidget_C_SetupFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.GetResourceCountAsText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortItem*               Resource                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UPotentialResourceWidget_C::GetResourceCountAsText(class UFortItem* Resource, struct FText* Result)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x225eae87);

	UPotentialResourceWidget_C_GetResourceCountAsText_Params params;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.UpdateResourceCountText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPotentialResourceWidget_C::UpdateResourceCountText()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4dde700);

	UPotentialResourceWidget_C_UpdateResourceCountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPotentialResourceWidget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe12ed836);

	UPotentialResourceWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.HandleTranslateAndFadeUpFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPotentialResourceWidget_C::HandleTranslateAndFadeUpFinished()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x30e4d47b);

	UPotentialResourceWidget_C_HandleTranslateAndFadeUpFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.ExecuteUbergraph_PotentialResourceWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPotentialResourceWidget_C::ExecuteUbergraph_PotentialResourceWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x934f0dbf);

	UPotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PotentialResourceWidget.PotentialResourceWidget_C.FinishedShowing__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPotentialResourceWidget_C::FinishedShowing__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x59d45831);

	UPotentialResourceWidget_C_FinishedShowing__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
