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

// Function Female_Commando_01_Skeleton_AnimBP.Female_Commando_01_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFemale_Commando_01_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x361b0efa);

	UFemale_Commando_01_Skeleton_AnimBP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Female_Commando_01_Skeleton_AnimBP.Female_Commando_01_Skeleton_AnimBP_C.ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFemale_Commando_01_Skeleton_AnimBP_C::ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb49f9f38);

	UFemale_Commando_01_Skeleton_AnimBP_C_ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
