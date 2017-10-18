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

// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.SetStatNameText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_Parm)

void ULeaderboardHeaderRowWidget_C::SetStatNameText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.SetStatNameText");

	ULeaderboardHeaderRowWidget_C_SetStatNameText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULeaderboardHeaderRowWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.Construct");

	ULeaderboardHeaderRowWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.ExecuteUbergraph_LeaderboardHeaderRowWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULeaderboardHeaderRowWidget_C::ExecuteUbergraph_LeaderboardHeaderRowWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.ExecuteUbergraph_LeaderboardHeaderRowWidget");

	ULeaderboardHeaderRowWidget_C_ExecuteUbergraph_LeaderboardHeaderRowWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
