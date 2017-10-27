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

// Function PickupMessageItem.PickupMessageItem_C.Setup
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Picked_Up_Item                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPickupMessageItem_C::Setup(class UFortItem* Picked_Up_Item)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9112f916);

	UPickupMessageItem_C_Setup_Params params;
	params.Picked_Up_Item = Picked_Up_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupMessageItem.PickupMessageItem_C.Refresh Count
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPickupMessageItem_C::Refresh_Count()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa7079e8d);

	UPickupMessageItem_C_Refresh_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupMessageItem.PickupMessageItem_C.OnStackSizeChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int*                           OldStackSize                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPickupMessageItem_C::OnStackSizeChanged(int* OldStackSize)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x58f40a89);

	UPickupMessageItem_C_OnStackSizeChanged_Params params;
	params.OldStackSize = OldStackSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupMessageItem.PickupMessageItem_C.OnBeginRemove
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPickupMessageItem_C::OnBeginRemove()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2d80e9f3);

	UPickupMessageItem_C_OnBeginRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupMessageItem.PickupMessageItem_C.OnReturnedToPool
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPickupMessageItem_C::OnReturnedToPool()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x51a1b20c);

	UPickupMessageItem_C_OnReturnedToPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupMessageItem.PickupMessageItem_C.ExecuteUbergraph_PickupMessageItem
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPickupMessageItem_C::ExecuteUbergraph_PickupMessageItem(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbf83e16d);

	UPickupMessageItem_C_ExecuteUbergraph_PickupMessageItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
