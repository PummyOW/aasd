#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.Focus
struct UAthenaSeasonDirectAcquisitionScreen_C_Focus_Params
{
};

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.GenerateOfferWidget
struct UAthenaSeasonDirectAcquisitionScreen_C_GenerateOfferWidget_Params
{
	struct FName*                                      StorefrontName;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCatalogOffer*                              Offer;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UFortMtxOfferData**                          DisplayAsset;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortDirectAcquisitionOfferWidgetBase*       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.NoOffersAvailable
struct UAthenaSeasonDirectAcquisitionScreen_C_NoOffersAvailable_Params
{
};

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnStartReadingOffers
struct UAthenaSeasonDirectAcquisitionScreen_C_OnStartReadingOffers_Params
{
};

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnOffersGenerated
struct UAthenaSeasonDirectAcquisitionScreen_C_OnOffersGenerated_Params
{
};

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnActivated
struct UAthenaSeasonDirectAcquisitionScreen_C_OnActivated_Params
{
};

// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaSeasonDirectAcquisitionScreen
struct UAthenaSeasonDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaSeasonDirectAcquisitionScreen_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
