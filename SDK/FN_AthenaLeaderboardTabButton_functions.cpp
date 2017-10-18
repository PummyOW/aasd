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

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ShowText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaLeaderboardTabButton_C::ShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ShowText");

	UAthenaLeaderboardTabButton_C_ShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Icon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (CPF_Parm)

void UAthenaLeaderboardTabButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Icon");

	UAthenaLeaderboardTabButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (CPF_Parm)

void UAthenaLeaderboardTabButton_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Text");

	UAthenaLeaderboardTabButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLeaderboardTabButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.PreConstruct");

	UAthenaLeaderboardTabButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnCurrentTextStyleChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaLeaderboardTabButton_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnCurrentTextStyleChanged");

	UAthenaLeaderboardTabButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.SetTabLabelInfo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAthenaLeaderboardTabButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.SetTabLabelInfo");

	UAthenaLeaderboardTabButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaLeaderboardTabButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnSelected");

	UAthenaLeaderboardTabButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnDeselected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaLeaderboardTabButton_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnDeselected");

	UAthenaLeaderboardTabButton_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaLeaderboardTabButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Construct");

	UAthenaLeaderboardTabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaLeaderboardTabButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnHovered");

	UAthenaLeaderboardTabButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnUnhovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaLeaderboardTabButton_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnUnhovered");

	UAthenaLeaderboardTabButton_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ExecuteUbergraph_AthenaLeaderboardTabButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaLeaderboardTabButton_C::ExecuteUbergraph_AthenaLeaderboardTabButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ExecuteUbergraph_AthenaLeaderboardTabButton");

	UAthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
