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

// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Player Died
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAthenaGameOverScreen_C::On_Player_Died(const struct FFortPlayerDeathReport& DeathReport)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa5511c8d);

	UAthenaGameOverScreen_C_On_Player_Died_Params params;
	params.DeathReport = DeathReport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Player Won
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaGameOverScreen_C::On_Player_Won()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc9fc81cd);

	UAthenaGameOverScreen_C_On_Player_Won_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.HandleRevived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaGameOverScreen_C::HandleRevived()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe34ee1f8);

	UAthenaGameOverScreen_C_HandleRevived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaGameOverScreen_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3d4b6ea8);

	UAthenaGameOverScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.Clear GameOver Screen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaGameOverScreen_C::Clear_GameOver_Screen()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x48acbd2c);

	UAthenaGameOverScreen_C_Clear_GameOver_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Team Won
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaGameOverScreen_C::On_Team_Won()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xea48b99d);

	UAthenaGameOverScreen_C_On_Team_Won_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.ExecuteUbergraph_AthenaGameOverScreen
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaGameOverScreen_C::ExecuteUbergraph_AthenaGameOverScreen(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9852b814);

	UAthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
