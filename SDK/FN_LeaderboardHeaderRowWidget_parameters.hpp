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

// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.SetStatNameText
struct ULeaderboardHeaderRowWidget_C_SetStatNameText_Params
{
	struct FText                                       Text;                                                     // (CPF_Parm)
};

// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.Construct
struct ULeaderboardHeaderRowWidget_C_Construct_Params
{
};

// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.ExecuteUbergraph_LeaderboardHeaderRowWidget
struct ULeaderboardHeaderRowWidget_C_ExecuteUbergraph_LeaderboardHeaderRowWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
