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

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnRemove
struct AGCNL_PurpleStuff_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnActive
struct AGCNL_PurpleStuff_C_OnActive_Params
{
	class AActor**                                     MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.UserConstructionScript
struct AGCNL_PurpleStuff_C_UserConstructionScript_Params
{
};

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveBeginPlay
struct AGCNL_PurpleStuff_C_ReceiveBeginPlay_Params
{
};

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveTick
struct AGCNL_PurpleStuff_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ExecuteUbergraph_GCNL_PurpleStuff
struct AGCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
