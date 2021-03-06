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

// Function Subtitles.Subtitles_C.GetSubtitleVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility USubtitles_C::GetSubtitleVisibility()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc65879d1);

	USubtitles_C_GetSubtitleVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Subtitles.Subtitles_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USubtitles_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xba07df0a);

	USubtitles_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Subtitles.Subtitles_C.ExecuteUbergraph_Subtitles
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubtitles_C::ExecuteUbergraph_Subtitles(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xba13d40e);

	USubtitles_C_ExecuteUbergraph_Subtitles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
