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

// Function PrimaryHeroActiveAbilitiesListDetailWidget.PrimaryHeroActiveAbilitiesListDetailWidget_C.HandlePostDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPrimaryHeroActiveAbilitiesListDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1a4404cf);

	UPrimaryHeroActiveAbilitiesListDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryHeroActiveAbilitiesListDetailWidget.PrimaryHeroActiveAbilitiesListDetailWidget_C.HandlePostDifferentSquadSlotSetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPrimaryHeroActiveAbilitiesListDetailWidget_C::HandlePostDifferentSquadSlotSetBP()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x86718830);

	UPrimaryHeroActiveAbilitiesListDetailWidget_C_HandlePostDifferentSquadSlotSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryHeroActiveAbilitiesListDetailWidget.PrimaryHeroActiveAbilitiesListDetailWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPrimaryHeroActiveAbilitiesListDetailWidget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xcf456b10);

	UPrimaryHeroActiveAbilitiesListDetailWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryHeroActiveAbilitiesListDetailWidget.PrimaryHeroActiveAbilitiesListDetailWidget_C.ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPrimaryHeroActiveAbilitiesListDetailWidget_C::ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb413abb0);

	UPrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
