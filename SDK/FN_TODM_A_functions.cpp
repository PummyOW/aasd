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

// Function TODM_A.TODM_A_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATODM_A_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x13725dcc);

	ATODM_A_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A.TODM_A_C.FlashLightning__FinishedFunc
// (FUNC_BlueprintEvent)

void ATODM_A_C::FlashLightning__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9caf34a5);

	ATODM_A_C_FlashLightning__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A.TODM_A_C.FlashLightning__UpdateFunc
// (FUNC_BlueprintEvent)

void ATODM_A_C::FlashLightning__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x698ba4f4);

	ATODM_A_C_FlashLightning__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A.TODM_A_C.New Storm Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ATODM_A_C::New_Storm_Timeline__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd1181fbf);

	ATODM_A_C_New_Storm_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A.TODM_A_C.New Storm Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ATODM_A_C::New_Storm_Timeline__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x11ea8cea);

	ATODM_A_C_New_Storm_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A.TODM_A_C.New Storm Timeline__FireOffRain__EventFunc
// (FUNC_BlueprintEvent)

void ATODM_A_C::New_Storm_Timeline__FireOffRain__EventFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe4644d7c);

	ATODM_A_C_New_Storm_Timeline__FireOffRain__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A.TODM_A_C.StartStorm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATODM_A_C::StartStorm()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x98e8435c);

	ATODM_A_C_StartStorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A.TODM_A_C.OnStormStart
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATODM_A_C::OnStormStart()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdd078c5d);

	ATODM_A_C_OnStormStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A.TODM_A_C.OnStormEnd
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATODM_A_C::OnStormEnd()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9f5b7e2e);

	ATODM_A_C_OnStormEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A.TODM_A_C.LightningStrike
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATODM_A_C::LightningStrike()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbb837aa9);

	ATODM_A_C_LightningStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A.TODM_A_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATODM_A_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x51520b73);

	ATODM_A_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A.TODM_A_C.DisableLightAndFog
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATODM_A_C::DisableLightAndFog(bool Enable)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf682d55e);

	ATODM_A_C_DisableLightAndFog_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A.TODM_A_C.EnableHDRRendering
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATODM_A_C::EnableHDRRendering()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xac4e3754);

	ATODM_A_C_EnableHDRRendering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A.TODM_A_C.ExecuteUbergraph_TODM_A
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATODM_A_C::ExecuteUbergraph_TODM_A(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf80464ed);

	ATODM_A_C_ExecuteUbergraph_TODM_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
