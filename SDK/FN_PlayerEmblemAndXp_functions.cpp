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

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.SetupReward
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Container                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTextBlock*              RewardText                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortMultiSizeItemCard*  RewardItemCard                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HasReward                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortItemInstanceQuantityPair RewardItem                     (CPF_Parm)
// int                            LevelRewarded                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerEmblemAndXp_C::SetupReward(class UWidget* Container, class UTextBlock* RewardText, class UFortMultiSizeItemCard* RewardItemCard, bool HasReward, const struct FFortItemInstanceQuantityPair& RewardItem, int LevelRewarded)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5dcfe22f);

	UPlayerEmblemAndXp_C_SetupReward_Params params;
	params.Container = Container;
	params.RewardText = RewardText;
	params.RewardItemCard = RewardItemCard;
	params.HasReward = HasReward;
	params.RewardItem = RewardItem;
	params.LevelRewarded = LevelRewarded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Refresh
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  FortPublicAccountInfo          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayerEmblemAndXp_C::Refresh(const struct FFortPublicAccountInfo& FortPublicAccountInfo)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6328e888);

	UPlayerEmblemAndXp_C_Refresh_Params params;
	params.FortPublicAccountInfo = FortPublicAccountInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerEmblemAndXp_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x362fa0e2);

	UPlayerEmblemAndXp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.OnAccountInfoChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo* Result                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayerEmblemAndXp_C::OnAccountInfoChanged(struct FFortPublicAccountInfo* Result)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe4c30bf7);

	UPlayerEmblemAndXp_C_OnAccountInfoChanged_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.ExecuteUbergraph_PlayerEmblemAndXp
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerEmblemAndXp_C::ExecuteUbergraph_PlayerEmblemAndXp(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbc0bb429);

	UPlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
