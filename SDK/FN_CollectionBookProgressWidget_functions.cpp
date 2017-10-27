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

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookLevelProgressionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float*                         NewCompletionPct               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookProgressWidget_C::OnCollectionBookLevelProgressionChanged(float* NewCompletionPct)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6fafa7f0);

	UCollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged_Params params;
	params.NewCompletionPct = NewCompletionPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookPreviewXPChange
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float*                         PreviewCompletionPct           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookProgressWidget_C::OnCollectionBookPreviewXPChange(float* PreviewCompletionPct)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc7f624c5);

	UCollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange_Params params;
	params.PreviewCompletionPct = PreviewCompletionPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.ExecuteUbergraph_CollectionBookProgressWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookProgressWidget_C::ExecuteUbergraph_CollectionBookProgressWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa14f0ddd);

	UCollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
