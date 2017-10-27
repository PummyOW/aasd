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

// Function MicIndicator.MicIndicator_C.OnPlayerTalkingChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bIsTalking                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMicIndicator_C::OnPlayerTalkingChanged(bool* bIsTalking)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7e13695d);

	UMicIndicator_C_OnPlayerTalkingChanged_Params params;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicIndicator.MicIndicator_C.OnPlayerMuted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bIsMuted                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMicIndicator_C::OnPlayerMuted(bool* bIsMuted)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x226712f8);

	UMicIndicator_C_OnPlayerMuted_Params params;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicIndicator.MicIndicator_C.ExecuteUbergraph_MicIndicator
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMicIndicator_C::ExecuteUbergraph_MicIndicator(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa627885b);

	UMicIndicator_C_ExecuteUbergraph_MicIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
