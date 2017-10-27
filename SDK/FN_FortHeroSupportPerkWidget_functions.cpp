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

// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.IsInInvalidSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           InInvalidSlot                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortHeroSupportPerkWidget_C::IsInInvalidSlot(bool* InInvalidSlot)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x18f7918b);

	UFortHeroSupportPerkWidget_C_IsInInvalidSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InInvalidSlot != nullptr)
		*InInvalidSlot = params.InInvalidSlot;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateComparisonVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFortHeroSupportPerkWidget_C::UpdateComparisonVisibility()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb08eca6f);

	UFortHeroSupportPerkWidget_C_UpdateComparisonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateEmptyVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFortHeroSupportPerkWidget_C::UpdateEmptyVisibility()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa2e1adcf);

	UFortHeroSupportPerkWidget_C_UpdateEmptyVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateActiveDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFortHeroSupportPerkWidget_C::UpdateActiveDisplay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe60ec62c);

	UFortHeroSupportPerkWidget_C_UpdateActiveDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateLockedVisibility
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFortHeroSupportPerkWidget_C::UpdateLockedVisibility()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x29d6a406);

	UFortHeroSupportPerkWidget_C_UpdateLockedVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFortHeroSupportPerkWidget_C::UpdateVisibility()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc4f77e38);

	UFortHeroSupportPerkWidget_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DisplayedOutsideOfHeroSquad    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortSupportBonusType          TargetedSupportType            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortHeroSupportPerkWidget_C::Update(bool DisplayedOutsideOfHeroSquad, EFortSupportBonusType TargetedSupportType)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x368fad9c);

	UFortHeroSupportPerkWidget_C_Update_Params params;
	params.DisplayedOutsideOfHeroSquad = DisplayedOutsideOfHeroSquad;
	params.TargetedSupportType = TargetedSupportType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnHeroUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFortHeroSupportPerkWidget_C::OnHeroUpdated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x32488b7d);

	UFortHeroSupportPerkWidget_C_OnHeroUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnSupportTypeUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFortHeroSupportPerkWidget_C::OnSupportTypeUpdated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdb542f0a);

	UFortHeroSupportPerkWidget_C_OnSupportTypeUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFortHeroSupportPerkWidget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x53477f76);

	UFortHeroSupportPerkWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFortHeroSupportPerkWidget_C::OnStateChanged()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7dcd661);

	UFortHeroSupportPerkWidget_C_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.ExecuteUbergraph_FortHeroSupportPerkWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortHeroSupportPerkWidget_C::ExecuteUbergraph_FortHeroSupportPerkWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf8e3b301);

	UFortHeroSupportPerkWidget_C_ExecuteUbergraph_FortHeroSupportPerkWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
