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

// Function WeakSpot.WeakSpot_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeakSpot_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3ad79640);

	AWeakSpot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__FinishedFunc
// (FUNC_BlueprintEvent)

void AWeakSpot_C::ScaleDownParticleTL__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8e0ca277);

	AWeakSpot_C_ScaleDownParticleTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__UpdateFunc
// (FUNC_BlueprintEvent)

void AWeakSpot_C::ScaleDownParticleTL__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x53759502);

	AWeakSpot_C_ScaleDownParticleTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.OnStartDirectionEffect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWeakSpot_C::OnStartDirectionEffect()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc5939b8c);

	AWeakSpot_C_OnStartDirectionEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.OnHitCrack
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWeakSpot_C::OnHitCrack()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5e1a28b);

	AWeakSpot_C_OnHitCrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.OnFadeOut
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWeakSpot_C::OnFadeOut()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf1d11326);

	AWeakSpot_C_OnFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.HideMesh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeakSpot_C::HideMesh()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5c841054);

	AWeakSpot_C_HideMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.ExecuteUbergraph_WeakSpot
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeakSpot_C::ExecuteUbergraph_WeakSpot(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb262af7b);

	AWeakSpot_C_ExecuteUbergraph_WeakSpot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
