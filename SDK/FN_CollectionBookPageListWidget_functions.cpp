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

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.Update Available Slots Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumAvailableSlots              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookPageListWidget_C::Update_Available_Slots_Widget(int NumAvailableSlots)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x38dd5f82);

	UCollectionBookPageListWidget_C_Update_Available_Slots_Widget_Params params;
	params.NumAvailableSlots = NumAvailableSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsBorderColors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCollectionBookPageListWidget_C::UpdateAvailableSlotsBorderColors()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5fd8655a);

	UCollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsCategory
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UFortCollectionBookCategory** Category                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookPageListWidget_C::SetupAsCategory(class UFortCollectionBookCategory** Category)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8531165e);

	UCollectionBookPageListWidget_C_SetupAsCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsPage
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage** Page                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookPageListWidget_C::SetupAsPage(class UFortCollectionBookPage** Page)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe2ef953b);

	UCollectionBookPageListWidget_C_SetupAsPage_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnExpansionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bExpanded                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookPageListWidget_C::OnExpansionChanged(bool* bExpanded)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd1396161);

	UCollectionBookPageListWidget_C_OnExpansionChanged_Params params;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookPageListWidget_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc9ec50ed);

	UCollectionBookPageListWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnPageDetailsUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int*                           NumAvailableSlots              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortCollectionBookState*      State                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookPageListWidget_C::OnPageDetailsUpdated(int* NumAvailableSlots, EFortCollectionBookState* State)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x64ddb9ce);

	UCollectionBookPageListWidget_C_OnPageDetailsUpdated_Params params;
	params.NumAvailableSlots = NumAvailableSlots;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnSelectionChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           ThisButton                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSelected                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookPageListWidget_C::OnSelectionChanged(class UCommonButton* ThisButton, bool bSelected)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x42c5191e);

	UCollectionBookPageListWidget_C_OnSelectionChanged_Params params;
	params.ThisButton = ThisButton;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.ExecuteUbergraph_CollectionBookPageListWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookPageListWidget_C::ExecuteUbergraph_CollectionBookPageListWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x714dd39d);

	UCollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
