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

// Function CampaignMapPage_Stonewood_07.CampaignMapPage_Stonewood_07_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCampaignMapPage_Stonewood_07_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2752409e);

	UCampaignMapPage_Stonewood_07_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignMapPage_Stonewood_07.CampaignMapPage_Stonewood_07_C.ExecuteUbergraph_CampaignMapPage_Stonewood_07
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCampaignMapPage_Stonewood_07_C::ExecuteUbergraph_CampaignMapPage_Stonewood_07(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x57fa1d1b);

	UCampaignMapPage_Stonewood_07_C_ExecuteUbergraph_CampaignMapPage_Stonewood_07_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
