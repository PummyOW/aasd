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

// Function FriendNotification.FriendNotification_C.ShowFriendInvites
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFriendNotification_C::ShowFriendInvites()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xcf2855f0);

	UFriendNotification_C_ShowFriendInvites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendNotification.FriendNotification_C.ShowPartyInvites
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFriendNotification_C::ShowPartyInvites()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9abb86f0);

	UFriendNotification_C_ShowPartyInvites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendNotification.FriendNotification_C.TakeAction
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFriendNotification_C::TakeAction()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc2bb496e);

	UFriendNotification_C_TakeAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendNotification.FriendNotification_C.ExecuteUbergraph_FriendNotification
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFriendNotification_C::ExecuteUbergraph_FriendNotification(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8ca79a2c);

	UFriendNotification_C_ExecuteUbergraph_FriendNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
