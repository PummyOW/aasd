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

// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.Completed_3C8EA97E467ED88E163FF0B4F830736D
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (CPF_Parm)

void UGA_DefaultPlayer_Stunned_C::Completed_3C8EA97E467ED88E163FF0B4F830736D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc18716e4);

	UGA_DefaultPlayer_Stunned_C_Completed_3C8EA97E467ED88E163FF0B4F830736D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.Cancelled_3C8EA97E467ED88E163FF0B4F830736D
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (CPF_Parm)

void UGA_DefaultPlayer_Stunned_C::Cancelled_3C8EA97E467ED88E163FF0B4F830736D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4c7a0662);

	UGA_DefaultPlayer_Stunned_C_Cancelled_3C8EA97E467ED88E163FF0B4F830736D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.Triggered_3C8EA97E467ED88E163FF0B4F830736D
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (CPF_Parm)

void UGA_DefaultPlayer_Stunned_C::Triggered_3C8EA97E467ED88E163FF0B4F830736D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xff49502c);

	UGA_DefaultPlayer_Stunned_C_Triggered_3C8EA97E467ED88E163FF0B4F830736D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.OnInterrupted_F3FA8C4A4CF8BA1E44F6768A402E7D71
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGA_DefaultPlayer_Stunned_C::OnInterrupted_F3FA8C4A4CF8BA1E44F6768A402E7D71()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbefa2abf);

	UGA_DefaultPlayer_Stunned_C_OnInterrupted_F3FA8C4A4CF8BA1E44F6768A402E7D71_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.OnComplete_F3FA8C4A4CF8BA1E44F6768A402E7D71
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGA_DefaultPlayer_Stunned_C::OnComplete_F3FA8C4A4CF8BA1E44F6768A402E7D71()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd7a0e3ae);

	UGA_DefaultPlayer_Stunned_C_OnComplete_F3FA8C4A4CF8BA1E44F6768A402E7D71_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.OnCancelled_B4CDDE17442A807B7592E7A70F4F6DEF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGA_DefaultPlayer_Stunned_C::OnCancelled_B4CDDE17442A807B7592E7A70F4F6DEF()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6e29b8f2);

	UGA_DefaultPlayer_Stunned_C_OnCancelled_B4CDDE17442A807B7592E7A70F4F6DEF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.OnInterrupted_B4CDDE17442A807B7592E7A70F4F6DEF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGA_DefaultPlayer_Stunned_C::OnInterrupted_B4CDDE17442A807B7592E7A70F4F6DEF()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x349212bb);

	UGA_DefaultPlayer_Stunned_C_OnInterrupted_B4CDDE17442A807B7592E7A70F4F6DEF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.OnBlendOut_B4CDDE17442A807B7592E7A70F4F6DEF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGA_DefaultPlayer_Stunned_C::OnBlendOut_B4CDDE17442A807B7592E7A70F4F6DEF()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf831f73c);

	UGA_DefaultPlayer_Stunned_C_OnBlendOut_B4CDDE17442A807B7592E7A70F4F6DEF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.OnCompleted_B4CDDE17442A807B7592E7A70F4F6DEF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGA_DefaultPlayer_Stunned_C::OnCompleted_B4CDDE17442A807B7592E7A70F4F6DEF()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x74ec4490);

	UGA_DefaultPlayer_Stunned_C_OnCompleted_B4CDDE17442A807B7592E7A70F4F6DEF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.K2_ActivateAbility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UGA_DefaultPlayer_Stunned_C::K2_ActivateAbility()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6edc8514);

	UGA_DefaultPlayer_Stunned_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.K2_OnEndAbility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UGA_DefaultPlayer_Stunned_C::K2_OnEndAbility()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe75268f5);

	UGA_DefaultPlayer_Stunned_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.ResetSoulSuckLift
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGA_DefaultPlayer_Stunned_C::ResetSoulSuckLift()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6b549f5a);

	UGA_DefaultPlayer_Stunned_C_ResetSoulSuckLift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.SoulSuckCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGA_DefaultPlayer_Stunned_C::SoulSuckCheck()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x549338fa);

	UGA_DefaultPlayer_Stunned_C_SoulSuckCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.ResetSoulSuckRelease
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGA_DefaultPlayer_Stunned_C::ResetSoulSuckRelease()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4471ed60);

	UGA_DefaultPlayer_Stunned_C_ResetSoulSuckRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.SoulSuckEndCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGA_DefaultPlayer_Stunned_C::SoulSuckEndCheck()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd51fc4c7);

	UGA_DefaultPlayer_Stunned_C_SoulSuckEndCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.ExecuteUbergraph_GA_DefaultPlayer_Stunned
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGA_DefaultPlayer_Stunned_C::ExecuteUbergraph_GA_DefaultPlayer_Stunned(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5a0a3d18);

	UGA_DefaultPlayer_Stunned_C_ExecuteUbergraph_GA_DefaultPlayer_Stunned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
