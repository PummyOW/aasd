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

// Function MiscellaneousModeItemDetailsHostPanel.MiscellaneousModeItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMiscellaneousModeItemDetailsHostPanel_C::HandleHasItemMarkedForMulchingChanged()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd2717aca);

	UMiscellaneousModeItemDetailsHostPanel_C_HandleHasItemMarkedForMulchingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiscellaneousModeItemDetailsHostPanel.MiscellaneousModeItemDetailsHostPanel_C.ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMiscellaneousModeItemDetailsHostPanel_C::ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x66c9301b);

	UMiscellaneousModeItemDetailsHostPanel_C_ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
