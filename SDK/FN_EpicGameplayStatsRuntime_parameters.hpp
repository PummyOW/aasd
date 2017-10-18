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

// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.NotEqual_GameplayStatTagGameplayStatTag
struct UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Params
{
	struct FGameplayStatTag                            A;                                                        // (CPF_Parm)
	struct FGameplayStatTag                            B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.EqualEqual_GameplayStatTagGameplayStatTag
struct UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Params
{
	struct FGameplayStatTag                            A;                                                        // (CPF_Parm)
	struct FGameplayStatTag                            B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
