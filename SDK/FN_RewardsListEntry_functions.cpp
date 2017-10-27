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

// Function RewardsListEntry.RewardsListEntry_C.ConfigForSchematic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewardsListEntry_C::ConfigForSchematic()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2b92abd5);

	URewardsListEntry_C_ConfigForSchematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListEntry.RewardsListEntry_C.ConfigForCommonRewards
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewardsListEntry_C::ConfigForCommonRewards()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x95cec94f);

	URewardsListEntry_C_ConfigForCommonRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListEntry.RewardsListEntry_C.ConfigForTransformKey
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewardsListEntry_C::ConfigForTransformKey()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc111d03b);

	URewardsListEntry_C_ConfigForTransformKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListEntry.RewardsListEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URewardsListEntry_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xce52bf7e);

	URewardsListEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListEntry.RewardsListEntry_C.ConfigForPeople
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewardsListEntry_C::ConfigForPeople()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x492de40b);

	URewardsListEntry_C_ConfigForPeople_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListEntry.RewardsListEntry_C.ExecuteUbergraph_RewardsListEntry
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsListEntry_C::ExecuteUbergraph_RewardsListEntry(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6c7d440f);

	URewardsListEntry_C_ExecuteUbergraph_RewardsListEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
