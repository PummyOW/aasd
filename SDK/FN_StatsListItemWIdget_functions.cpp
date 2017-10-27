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

// Function StatsListItemWIdget.StatsListItemWIdget_C.SetTextAndBorderHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bHightlight                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatsListItemWIdget_C::SetTextAndBorderHighlight(bool bHightlight)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x41c8dc7b);

	UStatsListItemWIdget_C_SetTextAndBorderHighlight_Params params;
	params.bHightlight = bHightlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.GetListItemTooltipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UStatsListItemWIdget_C::GetListItemTooltipWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4a3609bd);

	UStatsListItemWIdget_C_GetListItemTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.SetStatIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             NewParam                       (CPF_Parm)

void UStatsListItemWIdget_C::SetStatIcon(const struct FSlateBrush& NewParam)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb6c9df48);

	UStatsListItemWIdget_C_SetStatIcon_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBuffArrows
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (CPF_Parm)

void UStatsListItemWIdget_C::UpdateBuffArrows(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x24f6ee21);

	UStatsListItemWIdget_C_UpdateBuffArrows_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBasicPairLabel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (CPF_Parm)

void UStatsListItemWIdget_C::UpdateBasicPairLabel(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x346eabb4);

	UStatsListItemWIdget_C_UpdateBasicPairLabel_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateValueText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (CPF_Parm)

void UStatsListItemWIdget_C::UpdateValueText(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x81e25706);

	UStatsListItemWIdget_C_UpdateValueText_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateType
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (CPF_Parm)

void UStatsListItemWIdget_C::UpdateType(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2e4963d8);

	UStatsListItemWIdget_C_UpdateType_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateColors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (CPF_Parm)

void UStatsListItemWIdget_C::UpdateColors(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x513773a4);

	UStatsListItemWIdget_C_UpdateColors_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatsListItemWIdget_C::Update()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x336b37c0);

	UStatsListItemWIdget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.ValueChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         Delta                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatsListItemWIdget_C::ValueChanged(float* Delta)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf6e926e);

	UStatsListItemWIdget_C_ValueChanged_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatsListItemWIdget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x98d10b9a);

	UStatsListItemWIdget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewEnded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatsListItemWIdget_C::PreviewEnded()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x71e3560b);

	UStatsListItemWIdget_C_PreviewEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatsListItemWIdget_C::PreviewStarted()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x93767390);

	UStatsListItemWIdget_C_PreviewStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.DisplayAttributeChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatsListItemWIdget_C::DisplayAttributeChanged()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x17e4c82b);

	UStatsListItemWIdget_C_DisplayAttributeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.ExecuteUbergraph_StatsListItemWIdget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatsListItemWIdget_C::ExecuteUbergraph_StatsListItemWIdget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5bc93e6d);

	UStatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
