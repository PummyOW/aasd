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

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaSeasonDirectAcquisitionScreen_C::Focus()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf006b0a1);

	UAthenaSeasonDirectAcquisitionScreen_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.GenerateOfferWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName*                  StorefrontName                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FCatalogOffer*          Offer                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UFortMtxOfferData**      DisplayAsset                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortDirectAcquisitionOfferWidgetBase* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UFortDirectAcquisitionOfferWidgetBase* UAthenaSeasonDirectAcquisitionScreen_C::GenerateOfferWidget(struct FName* StorefrontName, struct FCatalogOffer* Offer, class UFortMtxOfferData** DisplayAsset)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x54425fc0);

	UAthenaSeasonDirectAcquisitionScreen_C_GenerateOfferWidget_Params params;
	params.StorefrontName = StorefrontName;
	params.Offer = Offer;
	params.DisplayAsset = DisplayAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.NoOffersAvailable
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaSeasonDirectAcquisitionScreen_C::NoOffersAvailable()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2dc98428);

	UAthenaSeasonDirectAcquisitionScreen_C_NoOffersAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnStartReadingOffers
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaSeasonDirectAcquisitionScreen_C::OnStartReadingOffers()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x58f74cfd);

	UAthenaSeasonDirectAcquisitionScreen_C_OnStartReadingOffers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnOffersGenerated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaSeasonDirectAcquisitionScreen_C::OnOffersGenerated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x257006e4);

	UAthenaSeasonDirectAcquisitionScreen_C_OnOffersGenerated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaSeasonDirectAcquisitionScreen_C::OnActivated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x51d06735);

	UAthenaSeasonDirectAcquisitionScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaSeasonDirectAcquisitionScreen
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaSeasonDirectAcquisitionScreen_C::ExecuteUbergraph_AthenaSeasonDirectAcquisitionScreen(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x19b0cd4b);

	UAthenaSeasonDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaSeasonDirectAcquisitionScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
