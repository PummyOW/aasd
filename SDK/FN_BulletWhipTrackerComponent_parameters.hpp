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

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.PlayWhipSound
struct UBulletWhipTrackerComponent_C_PlayWhipSound_Params
{
};

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.GetLocalPawnForTracking
struct UBulletWhipTrackerComponent_C_GetLocalPawnForTracking_Params
{
	class AFortPlayerPawn*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.TrackWhipStatus
struct UBulletWhipTrackerComponent_C_TrackWhipStatus_Params
{
	bool                                               Changed;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Whip_Distance;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.ReceiveTick
struct UBulletWhipTrackerComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.Reset
struct UBulletWhipTrackerComponent_C_Reset_Params
{
	struct FVector                                     StartLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
};

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.Update Velocity
struct UBulletWhipTrackerComponent_C_Update_Velocity_Params
{
	struct FVector                                     Current_Velocity;                                         // (CPF_Parm, CPF_IsPlainOldData)
};

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.ExecuteUbergraph_BulletWhipTrackerComponent
struct UBulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
