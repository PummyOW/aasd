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

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Orphaned
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsOrphaned                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFortPawn*               AttachedPawn                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6b808520);

	AEnemyPawn_Parent_C_Orphaned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOrphaned != nullptr)
		*IsOrphaned = params.IsOrphaned;
	if (AttachedPawn != nullptr)
		*AttachedPawn = params.AttachedPawn;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnRep_SpecialEventHalloweenPumpkinHeadApplied
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::OnRep_SpecialEventHalloweenPumpkinHeadApplied()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6f5753df);

	AEnemyPawn_Parent_C_OnRep_SpecialEventHalloweenPumpkinHeadApplied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpecialEventHalloweenPumpkinHeadHusk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ApplyPumpkinHeadMesh           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           DebugApplicationOrRemoval_     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SpecialEventHalloweenPumpkinHeadHusk(bool ApplyPumpkinHeadMesh, bool DebugApplicationOrRemoval_)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x69a702e8);

	AEnemyPawn_Parent_C_SpecialEventHalloweenPumpkinHeadHusk_Params params;
	params.ApplyPumpkinHeadMesh = ApplyPumpkinHeadMesh;
	params.DebugApplicationOrRemoval_ = DebugApplicationOrRemoval_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnMeshAttachedToCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             Static_Mesh                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Socket_Name                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              Relative_Transform             (CPF_Parm, CPF_IsPlainOldData)
// bool                           Absolute_Location              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Absolute_Rotation              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Absolute_Scale                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UStaticMeshComponent*    Static_Mesh_Component_Reference (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SpawnMeshAttachedToCharacter(class UStaticMesh* Static_Mesh, const struct FName& Socket_Name, const struct FTransform& Relative_Transform, bool Absolute_Location, bool Absolute_Rotation, bool Absolute_Scale, class UStaticMeshComponent** Static_Mesh_Component_Reference)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbb824e17);

	AEnemyPawn_Parent_C_SpawnMeshAttachedToCharacter_Params params;
	params.Static_Mesh = Static_Mesh;
	params.Socket_Name = Socket_Name;
	params.Relative_Transform = Relative_Transform;
	params.Absolute_Location = Absolute_Location;
	params.Absolute_Rotation = Absolute_Rotation;
	params.Absolute_Scale = Absolute_Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Static_Mesh_Component_Reference != nullptr)
		*Static_Mesh_Component_Reference = params.Static_Mesh_Component_Reference;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialOnCharacterMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delay_in_Seconds               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::RestorePreviousMaterialOnCharacterMesh(float Delay_in_Seconds)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc98fb56c);

	AEnemyPawn_Parent_C_RestorePreviousMaterialOnCharacterMesh_Params params;
	params.Delay_in_Seconds = Delay_in_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.CharacterSpawnInSafetyCheck
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::CharacterSpawnInSafetyCheck()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x55cad8ac);

	AEnemyPawn_Parent_C_CharacterSpawnInSafetyCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterEyeColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Eye_Color_Inner                (CPF_Parm, CPF_IsPlainOldData)
// struct FLinearColor            Eye_Color_Outer                (CPF_Parm, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SetCharacterEyeColors(const struct FLinearColor& Eye_Color_Inner, const struct FLinearColor& Eye_Color_Outer)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5eaac713);

	AEnemyPawn_Parent_C_SetCharacterEyeColors_Params params;
	params.Eye_Color_Inner = Eye_Color_Inner;
	params.Eye_Color_Outer = Eye_Color_Outer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterFresnelGlowColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Inner_Color                    (CPF_Parm, CPF_IsPlainOldData)
// struct FLinearColor            Outer_Color                    (CPF_Parm, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SetCharacterFresnelGlowColors(const struct FLinearColor& Inner_Color, const struct FLinearColor& Outer_Color)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdbca2d36);

	AEnemyPawn_Parent_C_SetCharacterFresnelGlowColors_Params params;
	params.Inner_Color = Inner_Color;
	params.Outer_Color = Outer_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnParticleSystemOnCharacterMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystem*         ParticleSystemTemplate         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UParticleSystemComponent* ParticleSystemComponentReferenceVar (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   AttachPointName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                Rotation                       (CPF_Parm, CPF_IsPlainOldData)
// TArray<struct FParticleSysParam> InstanceParameters             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           AutoActivate                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           AutoDestroy                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           AbsoluteLocation               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           AbsoluteRotation               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           AbsoluteScale                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UParticleSystemComponent* PSComponentReference           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SpawnParticleSystemOnCharacterMesh(class UParticleSystem* ParticleSystemTemplate, class UParticleSystemComponent* ParticleSystemComponentReferenceVar, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, TArray<struct FParticleSysParam>* InstanceParameters, class UParticleSystemComponent** PSComponentReference)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf1c5126e);

	AEnemyPawn_Parent_C_SpawnParticleSystemOnCharacterMesh_Params params;
	params.ParticleSystemTemplate = ParticleSystemTemplate;
	params.ParticleSystemComponentReferenceVar = ParticleSystemComponentReferenceVar;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.AutoActivate = AutoActivate;
	params.AutoDestroy = AutoDestroy;
	params.AbsoluteLocation = AbsoluteLocation;
	params.AbsoluteRotation = AbsoluteRotation;
	params.AbsoluteScale = AbsoluteScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InstanceParameters != nullptr)
		*InstanceParameters = params.InstanceParameters;
	if (PSComponentReference != nullptr)
		*PSComponentReference = params.PSComponentReference;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverridePhysicalMaterialOnCharacterMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       Physical_Material_Override     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::OverridePhysicalMaterialOnCharacterMesh(class UPhysicalMaterial* Physical_Material_Override)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9ed37fec);

	AEnemyPawn_Parent_C_OverridePhysicalMaterialOnCharacterMesh_Params params;
	params.Physical_Material_Override = Physical_Material_Override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DestroyAwokenSkeletalMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::DestroyAwokenSkeletalMesh()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x537012a0);

	AEnemyPawn_Parent_C_DestroyAwokenSkeletalMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialAndCopyParametersOnCharacterMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterial*               New_Material_To_Apply          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::OverrideMaterialAndCopyParametersOnCharacterMesh(class UMaterial* New_Material_To_Apply)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x30662165);

	AEnemyPawn_Parent_C_OverrideMaterialAndCopyParametersOnCharacterMesh_Params params;
	params.New_Material_To_Apply = New_Material_To_Apply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PlayAdditiveHitReacts
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Hit_Direction                  (CPF_Parm, CPF_IsPlainOldData)
// class UAnimMontage*            Anim_Montage                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc73cc0fe);

	AEnemyPawn_Parent_C_PlayAdditiveHitReacts_Params params;
	params.Hit_Direction = Hit_Direction;
	params.Anim_Montage = Anim_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetActiveParticlesOnCharacterMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Reset                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SetActiveParticlesOnCharacterMesh(bool Active, bool Reset)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2aaccd6d);

	AEnemyPawn_Parent_C_SetActiveParticlesOnCharacterMesh_Params params;
	params.Active = Active;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllCharacterMIDs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Parameter_Name                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Scalar_Value                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SetScalarParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, float Scalar_Value)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5ba30180);

	AEnemyPawn_Parent_C_SetScalarParameterOnAllCharacterMIDs_Params params;
	params.Parameter_Name = Parameter_Name;
	params.Scalar_Value = Scalar_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllCharacterMIDs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Parameter_Name                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Linear_Color                   (CPF_Parm, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SetVectorParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, const struct FLinearColor& Linear_Color)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9a1382d3);

	AEnemyPawn_Parent_C_SetVectorParameterOnAllCharacterMIDs_Params params;
	params.Parameter_Name = Parameter_Name;
	params.Linear_Color = Linear_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PickColorFromAnArrayOfColors
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FLinearColor>    ArrayOfColors                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::PickColorFromAnArrayOfColors(TArray<struct FLinearColor>* ArrayOfColors, struct FLinearColor* Color)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9d475f26);

	AEnemyPawn_Parent_C_PickColorFromAnArrayOfColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArrayOfColors != nullptr)
		*ArrayOfColors = params.ArrayOfColors;
	if (Color != nullptr)
		*Color = params.Color;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopDeathFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::StopDeathFX()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x263c2817);

	AEnemyPawn_Parent_C_StopDeathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopMaterialTimeline
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::StopMaterialTimeline()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf7c341ef);

	AEnemyPawn_Parent_C_StopMaterialTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemyDeathVisuals
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HQ                             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::EnemyDeathVisuals(bool* HQ)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x34f1e6ea);

	AEnemyPawn_Parent_C_EnemyDeathVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HQ != nullptr)
		*HQ = params.HQ;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x96779e9a);

	AEnemyPawn_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__FinishedFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::DeathMaterialParamsTL__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8a51e192);

	AEnemyPawn_Parent_C_DeathMaterialParamsTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__UpdateFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::DeathMaterialParamsTL__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2480755f);

	AEnemyPawn_Parent_C_DeathMaterialParamsTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::Enemy_Spawn_Out_TL__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8e251c44);

	AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::Enemy_Spawn_Out_TL__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x22d343cd);

	AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__FinishedFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdbc9285b);

	AEnemyPawn_Parent_C_EnemySpawnInTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__UpdateFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x126f1dd6);

	AEnemyPawn_Parent_C_EnemySpawnInTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__Spawn__EventFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__Spawn__EventFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4338a34);

	AEnemyPawn_Parent_C_EnemySpawnInTL__Spawn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x60c6add);

	AEnemyPawn_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDeathPlayEffects
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float*                         Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector*                Momentum                       (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult*             HitInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (CPF_Parm)

void AEnemyPawn_Parent_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1be51554);

	AEnemyPawn_Parent_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.BeginDeathFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::BeginDeathFX()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x69ecc664);

	AEnemyPawn_Parent_C_BeginDeathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PostSpawnIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::PostSpawnIn()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb5a69b49);

	AEnemyPawn_Parent_C_PostSpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DespawnEnemy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 RiftLocationWS                 (CPF_Parm, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::DespawnEnemy(const struct FVector& RiftLocationWS)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1409ee7b);

	AEnemyPawn_Parent_C_DespawnEnemy_Params params;
	params.RiftLocationWS = RiftLocationWS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DebugEnemySpawnIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::DebugEnemySpawnIn()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfcb6631e);

	AEnemyPawn_Parent_C_DebugEnemySpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnFinishedEncounterSpawn
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::OnFinishedEncounterSpawn()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x22efe714);

	AEnemyPawn_Parent_C_OnFinishedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnStartedEncounterSpawn
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::OnStartedEncounterSpawn()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf8eb3cf5);

	AEnemyPawn_Parent_C_OnStartedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PawnUniqueIDSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::PawnUniqueIDSet()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x197a2e4b);

	AEnemyPawn_Parent_C_PawnUniqueIDSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDamagePlayEffects
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float*                         Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector*                Momentum                       (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult*             HitInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (CPF_Parm)

void AEnemyPawn_Parent_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd3f9cd0f);

	AEnemyPawn_Parent_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.AdditiveHitReactDelay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::AdditiveHitReactDelay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3fdede1e);

	AEnemyPawn_Parent_C_AdditiveHitReactDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnBeginSleepEffects
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::OnBeginSleepEffects()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa4252cbc);

	AEnemyPawn_Parent_C_OnBeginSleepEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnEndSleepEffects
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::OnEndSleepEffects()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdab91154);

	AEnemyPawn_Parent_C_OnEndSleepEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelayCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::RestorePreviousMaterialDelayCompleted()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6cdd70a9);

	AEnemyPawn_Parent_C_RestorePreviousMaterialDelayCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delay_Amount                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::RestorePreviousMaterialDelay(float Delay_Amount)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd42e251a);

	AEnemyPawn_Parent_C_RestorePreviousMaterialDelay_Params params;
	params.Delay_Amount = Delay_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnCheatUpdateSpecialEventGE
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bShouldUseSpecialEventGE       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::OnCheatUpdateSpecialEventGE(bool* bShouldUseSpecialEventGE)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd8c05187);

	AEnemyPawn_Parent_C_OnCheatUpdateSpecialEventGE_Params params;
	params.bShouldUseSpecialEventGE = bShouldUseSpecialEventGE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ExecuteUbergraph_EnemyPawn_Parent
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::ExecuteUbergraph_EnemyPawn_Parent(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x931f5910);

	AEnemyPawn_Parent_C_ExecuteUbergraph_EnemyPawn_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
