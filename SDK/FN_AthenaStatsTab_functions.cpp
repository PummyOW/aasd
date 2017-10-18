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

// Function AthenaStatsTab.AthenaStatsTab_C.UpdateLastUpdatedTime
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaStatsTab_C::UpdateLastUpdatedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.UpdateLastUpdatedTime");

	UAthenaStatsTab_C_UpdateLastUpdatedTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.UpdateStats
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaStatsTab_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.UpdateStats");

	UAthenaStatsTab_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaStatsTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.Construct");

	UAthenaStatsTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaStatsTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnActivated");

	UAthenaStatsTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryFinished
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bWasSuccessful                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaStatsTab_C::OnQueryFinished(bool* bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnQueryFinished");

	UAthenaStatsTab_C_OnQueryFinished_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaStatsTab_C::BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	UAthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaStatsTab_C::OnQueryStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnQueryStarted");

	UAthenaStatsTab_C_OnQueryStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.OnDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaStatsTab_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.OnDeactivated");

	UAthenaStatsTab_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaStatsTab_C::ExecuteUbergraph_AthenaStatsTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab");

	UAthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
