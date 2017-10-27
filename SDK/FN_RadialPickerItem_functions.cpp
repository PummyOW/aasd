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

// Function RadialPickerItem.RadialPickerItem_C.SetKeybindVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPickerItem_C::SetKeybindVisibility()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x79ec04f);

	URadialPickerItem_C_SetKeybindVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPickerItem.RadialPickerItem_C.SetShowImageAndLabel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowImageAndLabel              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPickerItem_C::SetShowImageAndLabel(bool ShowImageAndLabel)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8a96c24a);

	URadialPickerItem_C_SetShowImageAndLabel_Params params;
	params.ShowImageAndLabel = ShowImageAndLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPickerItem.RadialPickerItem_C.SetItemContent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Option_Enabled                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Radial_Item_Index              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPickerItem_C::SetItemContent(class UFortItem* Item, bool Option_Enabled, int Radial_Item_Index)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x29f04057);

	URadialPickerItem_C_SetItemContent_Params params;
	params.Item = Item;
	params.Option_Enabled = Option_Enabled;
	params.Radial_Item_Index = Radial_Item_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPickerItem.RadialPickerItem_C.SetSelected
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPickerItem_C::SetSelected(bool IsSelected)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc2c27fba);

	URadialPickerItem_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPickerItem.RadialPickerItem_C.SetImageAndLabelContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_Parm)
// struct FSlateBrush             Brush                          (CPF_Parm)
// bool                           Option_Enabled                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            RadialItemIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPickerItem_C::SetImageAndLabelContent(const struct FText& Text, const struct FSlateBrush& Brush, bool Option_Enabled, int RadialItemIndex)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8bd8abfe);

	URadialPickerItem_C_SetImageAndLabelContent_Params params;
	params.Text = Text;
	params.Brush = Brush;
	params.Option_Enabled = Option_Enabled;
	params.RadialItemIndex = RadialItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPickerItem.RadialPickerItem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URadialPickerItem_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3694d712);

	URadialPickerItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPickerItem.RadialPickerItem_C.ExecuteUbergraph_RadialPickerItem
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPickerItem_C::ExecuteUbergraph_RadialPickerItem(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x312b33ad);

	URadialPickerItem_C_ExecuteUbergraph_RadialPickerItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
