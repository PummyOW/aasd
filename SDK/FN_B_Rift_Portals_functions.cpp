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

// Function B_Rift_Portals.B_Rift_Portals_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Rift_Portals_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x54032900);

	AB_Rift_Portals_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.BoostLight__FinishedFunc
// (FUNC_BlueprintEvent)

void AB_Rift_Portals_C::BoostLight__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc07400f2);

	AB_Rift_Portals_C_BoostLight__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.BoostLight__UpdateFunc
// (FUNC_BlueprintEvent)

void AB_Rift_Portals_C::BoostLight__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2ae5d9bf);

	AB_Rift_Portals_C_BoostLight__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ScaleLightOnOff__FinishedFunc
// (FUNC_BlueprintEvent)

void AB_Rift_Portals_C::ScaleLightOnOff__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x677f876f);

	AB_Rift_Portals_C_ScaleLightOnOff__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ScaleLightOnOff__UpdateFunc
// (FUNC_BlueprintEvent)

void AB_Rift_Portals_C::ScaleLightOnOff__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdca65c9a);

	AB_Rift_Portals_C_ScaleLightOnOff__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.OnPlaced
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AB_Rift_Portals_C::OnPlaced()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa9f1fa97);

	AB_Rift_Portals_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.OnRemoved
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AB_Rift_Portals_C::OnRemoved()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3c54c094);

	AB_Rift_Portals_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.OnSpawnAI
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AB_Rift_Portals_C::OnSpawnAI()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd581c23);

	AB_Rift_Portals_C_OnSpawnAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.Lightning Impact Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Rift_Portals_C::Lightning_Impact_Event()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8c4ab79f);

	AB_Rift_Portals_C_Lightning_Impact_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.OnActivated
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AB_Rift_Portals_C::OnActivated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x779da385);

	AB_Rift_Portals_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Rift_Portals_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf84e3b6f);

	AB_Rift_Portals_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AB_Rift_Portals_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8dec15a7);

	AB_Rift_Portals_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.FadeLightIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Rift_Portals_C::FadeLightIn()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x791e818a);

	AB_Rift_Portals_C_FadeLightIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.FadeLightOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Rift_Portals_C::FadeLightOut()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5915547d);

	AB_Rift_Portals_C_FadeLightOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ManuallyActivateRift
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Rift_Portals_C::ManuallyActivateRift()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xade3e052);

	AB_Rift_Portals_C_ManuallyActivateRift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ManuallyDeactivateRift
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Rift_Portals_C::ManuallyDeactivateRift()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x89012ad3);

	AB_Rift_Portals_C_ManuallyDeactivateRift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.PatrolEnemySuckIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delay                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RiftLightningDuration          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           SpawnImpactParticles           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Rift_Portals_C::PatrolEnemySuckIn(float Delay, float RiftLightningDuration, bool SpawnImpactParticles)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7518a7e4);

	AB_Rift_Portals_C_PatrolEnemySuckIn_Params params;
	params.Delay = Delay;
	params.RiftLightningDuration = RiftLightningDuration;
	params.SpawnImpactParticles = SpawnImpactParticles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.OnDeactivated
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AB_Rift_Portals_C::OnDeactivated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6ec98cda);

	AB_Rift_Portals_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ResetGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Rift_Portals_C::ResetGate()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1d5730cd);

	AB_Rift_Portals_C_ResetGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rift_Portals.B_Rift_Portals_C.ExecuteUbergraph_B_Rift_Portals
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Rift_Portals_C::ExecuteUbergraph_B_Rift_Portals(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x52b651ff);

	AB_Rift_Portals_C_ExecuteUbergraph_B_Rift_Portals_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
