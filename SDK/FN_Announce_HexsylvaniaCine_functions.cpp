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

// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_HexsylvaniaCine_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe1dfdd5e);

	AAnnounce_HexsylvaniaCine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.OnStateEntered_9C83DA6340C5A54C51BA50B49786F065
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_HexsylvaniaCine_C::OnStateEntered_9C83DA6340C5A54C51BA50B49786F065()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x55a7ee08);

	AAnnounce_HexsylvaniaCine_C_OnStateEntered_9C83DA6340C5A54C51BA50B49786F065_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.OnStateEntered_FE03E71B4E723372BF2F0F96EC45C24B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_HexsylvaniaCine_C::OnStateEntered_FE03E71B4E723372BF2F0F96EC45C24B()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xaf65dbd0);

	AAnnounce_HexsylvaniaCine_C_OnStateEntered_FE03E71B4E723372BF2F0F96EC45C24B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.OnClientAnnouncementStart
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAnnounce_HexsylvaniaCine_C::OnClientAnnouncementStart()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x377e92a6);

	AAnnounce_HexsylvaniaCine_C_OnClientAnnouncementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.OnClientAnnouncementStop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAnnounce_HexsylvaniaCine_C::OnClientAnnouncementStop()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3d79cb26);

	AAnnounce_HexsylvaniaCine_C_OnClientAnnouncementStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.OnPlayerSkippedCutscene
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AAnnounce_HexsylvaniaCine_C::OnPlayerSkippedCutscene()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd3c4f7fb);

	AAnnounce_HexsylvaniaCine_C_OnPlayerSkippedCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.HandleClientEvent_CinematicFinishedPlaying
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AAnnounce_HexsylvaniaCine_C::HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8df2f4c0);

	AAnnounce_HexsylvaniaCine_C_HandleClientEvent_CinematicFinishedPlaying_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.HandleAllowSkip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_HexsylvaniaCine_C::HandleAllowSkip()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x58538613);

	AAnnounce_HexsylvaniaCine_C_HandleAllowSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C.ExecuteUbergraph_Announce_HexsylvaniaCine
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_HexsylvaniaCine_C::ExecuteUbergraph_Announce_HexsylvaniaCine(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8c59fb54);

	AAnnounce_HexsylvaniaCine_C_ExecuteUbergraph_Announce_HexsylvaniaCine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
