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

// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewActive                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::ActivateOrDeactivateWindParticle(bool bNewActive)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x64840939);

	AB_Ranged_Generic_C_ActivateOrDeactivateWindParticle_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::DeactivateMuzzleFX()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdbb43b58);

	AB_Ranged_Generic_C_DeactivateMuzzleFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::DeactivateReloadSmokeFX()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa46c1133);

	AB_Ranged_Generic_C_DeactivateReloadSmokeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::ActivateReloadSmokeFX()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2bd6e83c);

	AB_Ranged_Generic_C_ActivateReloadSmokeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Bool                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::ActivateShellsFX(bool Bool)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5a1d35db);

	AB_Ranged_Generic_C_ActivateShellsFX_Params params;
	params.Bool = Bool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::DeactivateShellsFX()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1ceee432);

	AB_Ranged_Generic_C_DeactivateShellsFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::SetupShellFX()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1b2c4af6);

	AB_Ranged_Generic_C_SetupShellFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::UpdateShellEmittersFX()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x43da6245);

	AB_Ranged_Generic_C_UpdateShellEmittersFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortReloadFXState> Selection                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::Muzzle_Play_Reload_FX(TEnumAsByte<EFortReloadFXState> Selection)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3910b835);

	AB_Ranged_Generic_C_Muzzle_Play_Reload_FX_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Persistent_Fire                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::Muzzle_Flash_FX(bool Persistent_Fire)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb5189530);

	AB_Ranged_Generic_C_Muzzle_Flash_FX_Params params;
	params.Persistent_Fire = Persistent_Fire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::SetWpnRarity()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa11afd8f);

	AB_Ranged_Generic_C_SetWpnRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::AddRandomScale()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x67fa4a45);

	AB_Ranged_Generic_C_AddRandomScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb9829524);

	AB_Ranged_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
// (FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::AnimateScopePostProcess__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x29c55333);

	AB_Ranged_Generic_C_AnimateScopePostProcess__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
// (FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::AnimateScopePostProcess__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x97f810ee);

	AB_Ranged_Generic_C_AnimateScopePostProcess__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd88f216d);

	AB_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe9f870a5);

	AB_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3cec045f);

	AB_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x260b4ed9);

	AB_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bPersistentFire                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          bSecondaryFire                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x72368494);

	AB_Ranged_Generic_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::OnStopWeaponFireFX()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x244bc9fe);

	AB_Ranged_Generic_C_OnStopWeaponFireFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortReloadFXState>* ReloadStage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnPlayReloadFX(TEnumAsByte<EFortReloadFXState>* ReloadStage)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd164123f);

	AB_Ranged_Generic_C_OnPlayReloadFX_Params params;
	params.ReloadStage = ReloadStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bNewIsTargeting                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnSetTargeting(bool* bNewIsTargeting)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9d866a31);

	AB_Ranged_Generic_C_OnSetTargeting_Params params;
	params.bNewIsTargeting = bNewIsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::K2_OnUnEquip()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6cef4833);

	AB_Ranged_Generic_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::InitializeScopeVariables()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf6687c6e);

	AB_Ranged_Generic_C_InitializeScopeVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable_Or_Disable              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            StencilBufferValue             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int StencilBufferValue)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9dbbc2a1);

	AB_Ranged_Generic_C_Update_Enemy_Custom_Depths_Params params;
	params.Enable_Or_Disable = Enable_Or_Disable;
	params.StencilBufferValue = StencilBufferValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::OnWeaponAttached()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x12836ebc);

	AB_Ranged_Generic_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition** NewAlteration                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnInitAlteration(class UFortAlterationItemDefinition** NewAlteration)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa68419fd);

	AB_Ranged_Generic_C_OnInitAlteration_Params params;
	params.NewAlteration = NewAlteration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification* CosmeticMod                    (CPF_Parm)
// class UMaterialInstanceDynamic** DynamicMaterialInstance        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::OnInitCosmeticAlterations(struct FFortCosmeticModification* CosmeticMod, class UMaterialInstanceDynamic** DynamicMaterialInstance)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xad41f913);

	AB_Ranged_Generic_C_OnInitCosmeticAlterations_Params params;
	params.CosmeticMod = CosmeticMod;
	params.DynamicMaterialInstance = DynamicMaterialInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::ShellsON__onPump_()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2c899bc2);

	AB_Ranged_Generic_C_ShellsON__onPump__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::OnEquippedWeaponDestory()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x649241ed);

	AB_Ranged_Generic_C_OnEquippedWeaponDestory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TargetLimit                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::SetWeaponPierceThrough(bool Enable, int TargetLimit)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xef56c04);

	AB_Ranged_Generic_C_SetWeaponPierceThrough_Params params;
	params.Enable = Enable;
	params.TargetLimit = TargetLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TargetLimit                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::SetWeaponPierceThrough_ClientRep(bool Enable, int TargetLimit)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa20a3597);

	AB_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep_Params params;
	params.Enable = Enable;
	params.TargetLimit = TargetLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AB_Ranged_Generic_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3ad2005b);

	AB_Ranged_Generic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_Ranged_Generic_C::ExecuteUbergraph_B_Ranged_Generic(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfa021c41);

	AB_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
