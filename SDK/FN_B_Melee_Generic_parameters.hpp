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

// Function B_Melee_Generic.B_Melee_Generic_C.Melee_Effect_Color
struct AB_Melee_Generic_C_Melee_Effect_Color_Params
{
	struct FVector                                     Melee_Color_Set;                                          // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function B_Melee_Generic.B_Melee_Generic_C.SetWpnRarity
struct AB_Melee_Generic_C_SetWpnRarity_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.UserConstructionScript
struct AB_Melee_Generic_C_UserConstructionScript_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnLoaded_CB594210420542B302428F8181D85E48
struct AB_Melee_Generic_C_OnLoaded_CB594210420542B302428F8181D85E48_Params
{
	class UObject*                                     Loaded;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight
struct AB_Melee_Generic_C_MeleeSwingRight_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft
struct AB_Melee_Generic_C_MeleeSwingLeft_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.FootStepLeft
struct AB_Melee_Generic_C_FootStepLeft_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.FootStepRight
struct AB_Melee_Generic_C_FootStepRight_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.ReceiveBeginPlay
struct AB_Melee_Generic_C_ReceiveBeginPlay_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnPlayWeaponFireFX
struct AB_Melee_Generic_C_OnPlayWeaponFireFX_Params
{
	bool*                                              bPersistentFire;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bSecondaryFire;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Melee_Generic.B_Melee_Generic_C.PlayRClickImpacts
struct AB_Melee_Generic_C_PlayRClickImpacts_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnPlayImpactFX
struct AB_Melee_Generic_C_OnPlayImpactFX_Params
{
	struct FHitResult*                                 HitResult;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>*                     ImpactPhysicalSurface;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent**                   SpawnedPSC;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnEquippedWeaponDestory
struct AB_Melee_Generic_C_OnEquippedWeaponDestory_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponAttached
struct AB_Melee_Generic_C_OnWeaponAttached_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.K2_OnUnEquip
struct AB_Melee_Generic_C_K2_OnUnEquip_Params
{
};

// Function B_Melee_Generic.B_Melee_Generic_C.OnInitCosmeticAlterations
struct AB_Melee_Generic_C_OnInitCosmeticAlterations_Params
{
	struct FFortCosmeticModification*                  CosmeticMod;                                              // (CPF_Parm)
	class UMaterialInstanceDynamic**                   DynamicMaterialInstance;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Melee_Generic.B_Melee_Generic_C.ExecuteUbergraph_B_Melee_Generic
struct AB_Melee_Generic_C_ExecuteUbergraph_B_Melee_Generic_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
