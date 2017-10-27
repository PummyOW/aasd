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

// Function BluGlow_MorphAnimation.BluGlow_MorphAnimation_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABluGlow_MorphAnimation_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe57ca662);

	ABluGlow_MorphAnimation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlow_MorphAnimation.BluGlow_MorphAnimation_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABluGlow_MorphAnimation_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x58a2acef);

	ABluGlow_MorphAnimation_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlow_MorphAnimation.BluGlow_MorphAnimation_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABluGlow_MorphAnimation_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x73f4a61a);

	ABluGlow_MorphAnimation_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlow_MorphAnimation.BluGlow_MorphAnimation_C.Timeline_0__ChangeTargetFrame__EventFunc
// (FUNC_BlueprintEvent)

void ABluGlow_MorphAnimation_C::Timeline_0__ChangeTargetFrame__EventFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2b823e65);

	ABluGlow_MorphAnimation_C_Timeline_0__ChangeTargetFrame__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlow_MorphAnimation.BluGlow_MorphAnimation_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABluGlow_MorphAnimation_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x74af7df5);

	ABluGlow_MorphAnimation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlow_MorphAnimation.BluGlow_MorphAnimation_C.ExecuteUbergraph_BluGlow_MorphAnimation
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABluGlow_MorphAnimation_C::ExecuteUbergraph_BluGlow_MorphAnimation(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf49fba7e);

	ABluGlow_MorphAnimation_C_ExecuteUbergraph_BluGlow_MorphAnimation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
