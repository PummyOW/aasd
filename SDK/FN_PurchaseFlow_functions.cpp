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

// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 CloseInfo                      (CPF_Parm, CPF_ZeroConstructor)

void UPurchaseFlowJSBridge::RequestClose(const struct FString& CloseInfo)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x49b3ea1c);

	UPurchaseFlowJSBridge_RequestClose_Params params;
	params.CloseInfo = CloseInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseFlow.PurchaseFlowJSBridge.RECEIPT
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FPurchaseFlowReceiptParam RECEIPT                        (CPF_Parm)

void UPurchaseFlowJSBridge::RECEIPT(const struct FPurchaseFlowReceiptParam& RECEIPT)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x730686d3);

	UPurchaseFlowJSBridge_RECEIPT_Params params;
	params.RECEIPT = RECEIPT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
