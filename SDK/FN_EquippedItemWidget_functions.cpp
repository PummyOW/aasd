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

// Function EquippedItemWidget.EquippedItemWidget_C.GetCurrentAmmoText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            CurrentAmmoCount               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   CurrentAmmoText                (CPF_Parm, CPF_OutParm)

void UEquippedItemWidget_C::GetCurrentAmmoText(int CurrentAmmoCount, struct FText* CurrentAmmoText)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3d0e0fdb);

	UEquippedItemWidget_C_GetCurrentAmmoText_Params params;
	params.CurrentAmmoCount = CurrentAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAmmoText != nullptr)
		*CurrentAmmoText = params.CurrentAmmoText;
}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateResourceCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquippedItemWidget_C::UpdateResourceCount()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x45c4331);

	UEquippedItemWidget_C_UpdateResourceCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateCurrentAmmo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            LocalCount                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            LocalRemaining                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquippedItemWidget_C::UpdateCurrentAmmo(int LocalCount, int LocalRemaining)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc597907d);

	UEquippedItemWidget_C_UpdateCurrentAmmo_Params params;
	params.LocalCount = LocalCount;
	params.LocalRemaining = LocalRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateAmmoCapacity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquippedItemWidget_C::UpdateAmmoCapacity()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x16067736);

	UEquippedItemWidget_C_UpdateAmmoCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateWidgetColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasAmmo                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquippedItemWidget_C::UpdateWidgetColor(bool HasAmmo)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4ccb5249);

	UEquippedItemWidget_C_UpdateWidgetColor_Params params;
	params.HasAmmo = HasAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquippedItemWidget_C::UpdateVisibility()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb51e2fd4);

	UEquippedItemWidget_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.FullUpdateResourceDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquippedItemWidget_C::FullUpdateResourceDisplay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa10c9463);

	UEquippedItemWidget_C_FullUpdateResourceDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.FullUpdateAmmoDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquippedItemWidget_C::FullUpdateAmmoDisplay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x94569901);

	UEquippedItemWidget_C_FullUpdateAmmoDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEquippedItemWidget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x50adaefa);

	UEquippedItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.OnWeaponEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFortWeapon*             PrevWeapon                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquippedItemWidget_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x37da9377);

	UEquippedItemWidget_C_OnWeaponEquipped_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.OnLocalAmmoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            LocalCount                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            LocalRemaining                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquippedItemWidget_C::OnLocalAmmoChanged(int LocalCount, int LocalRemaining)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x757bdf29);

	UEquippedItemWidget_C_OnLocalAmmoChanged_Params params;
	params.LocalCount = LocalCount;
	params.LocalRemaining = LocalRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.OnWorldItemsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquippedItemWidget_C::OnWorldItemsChanged()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x667d0e8);

	UEquippedItemWidget_C_OnWorldItemsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.OnBuildingMaterialCycled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEquippedItemWidget_C::OnBuildingMaterialCycled()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x22c48a3d);

	UEquippedItemWidget_C_OnBuildingMaterialCycled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.ExecuteUbergraph_EquippedItemWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEquippedItemWidget_C::ExecuteUbergraph_EquippedItemWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x28efe499);

	UEquippedItemWidget_C_ExecuteUbergraph_EquippedItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
