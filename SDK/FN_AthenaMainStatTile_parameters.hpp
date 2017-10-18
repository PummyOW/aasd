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

// Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue
struct UAthenaMainStatTile_C_SetStatValue_Params
{
	struct FText                                       StatValueAsText;                                          // (CPF_Parm)
};

// Function AthenaMainStatTile.AthenaMainStatTile_C.SetTagAndDisplayName
struct UAthenaMainStatTile_C_SetTagAndDisplayName_Params
{
	struct FString                                     Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor)
	struct FText                                       DisplayName;                                              // (CPF_Parm)
};

// Function AthenaMainStatTile.AthenaMainStatTile_C.PreConstruct
struct UAthenaMainStatTile_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaMainStatTile.AthenaMainStatTile_C.ExecuteUbergraph_AthenaMainStatTile
struct UAthenaMainStatTile_C_ExecuteUbergraph_AthenaMainStatTile_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
