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

// Function BRCurrency.BRCurrency_C.Construct
struct UBRCurrency_C_Construct_Params
{
};

// Function BRCurrency.BRCurrency_C.Destruct
struct UBRCurrency_C_Destruct_Params
{
};

// Function BRCurrency.BRCurrency_C.ExecuteUbergraph_BRCurrency
struct UBRCurrency_C_ExecuteUbergraph_BRCurrency_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
