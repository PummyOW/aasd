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

// Function AthenaStatsRow.AthenaStatsRow_C.SetStatValueAsText
struct UAthenaStatsRow_C_SetStatValueAsText_Params
{
	struct FText                                       StatValue;                                                // (CPF_Parm)
};

// Function AthenaStatsRow.AthenaStatsRow_C.PreConstruct
struct UAthenaStatsRow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaStatsRow.AthenaStatsRow_C.ExecuteUbergraph_AthenaStatsRow
struct UAthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
