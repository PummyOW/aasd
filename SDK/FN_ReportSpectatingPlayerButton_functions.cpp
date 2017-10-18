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

// Function ReportSpectatingPlayerButton.ReportSpectatingPlayerButton_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReportSpectatingPlayerButton_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportSpectatingPlayerButton.ReportSpectatingPlayerButton_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature");

	UReportSpectatingPlayerButton_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportSpectatingPlayerButton.ReportSpectatingPlayerButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReportSpectatingPlayerButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportSpectatingPlayerButton.ReportSpectatingPlayerButton_C.Construct");

	UReportSpectatingPlayerButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportSpectatingPlayerButton.ReportSpectatingPlayerButton_C.ExecuteUbergraph_ReportSpectatingPlayerButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReportSpectatingPlayerButton_C::ExecuteUbergraph_ReportSpectatingPlayerButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportSpectatingPlayerButton.ReportSpectatingPlayerButton_C.ExecuteUbergraph_ReportSpectatingPlayerButton");

	UReportSpectatingPlayerButton_C_ExecuteUbergraph_ReportSpectatingPlayerButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
