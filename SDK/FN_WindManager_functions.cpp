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

// Function WindManager.WindManager_C.Find Matching Wind Mesh Index And Write Bool
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Wind_location                  (CPF_Parm, CPF_IsPlainOldData)
// bool                           Storm_Cyl_Mesh_Match           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Wind_Cyl_Mesh_Array_Match_Index (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::Find_Matching_Wind_Mesh_Index_And_Write_Bool(const struct FVector& Wind_location, bool* Storm_Cyl_Mesh_Match, int* Wind_Cyl_Mesh_Array_Match_Index)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x88013c08);

	AWindManager_C_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Params params;
	params.Wind_location = Wind_location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Storm_Cyl_Mesh_Match != nullptr)
		*Storm_Cyl_Mesh_Match = params.Storm_Cyl_Mesh_Match;
	if (Wind_Cyl_Mesh_Array_Match_Index != nullptr)
		*Wind_Cyl_Mesh_Array_Match_Index = params.Wind_Cyl_Mesh_Array_Match_Index;
}


// Function WindManager.WindManager_C.SetWindMatVariables
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Mid                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Set_AnimatedCylinderCenter     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 AnimatedCylinderCenter         (CPF_Parm, CPF_IsPlainOldData)
// bool                           Set_Animating_Wind_Magnitude   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Animating_Wind_Magnitude       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Set_Static_Wind_Magnitude      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Static_Wind_Magnitude          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Set_CylinderCenter             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 CylinderCenter                 (CPF_Parm, CPF_IsPlainOldData)
// bool                           Set_WindVector                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 WindVector                     (CPF_Parm, CPF_IsPlainOldData)
// bool                           Set_WindCrossVector            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 WindCrossVector                (CPF_Parm, CPF_IsPlainOldData)
// bool                           Set_OverallOuterRadius         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OverallOuterRadius             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Set_OverallInnerRadius         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OverallInnerRadius             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Set_Wind_Still_0_or_Animating_1 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Wind_Still_0_or_Animating_1    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Set_Circular_Shader_           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Circular_Shader_               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::SetWindMatVariables(class UMaterialInstanceDynamic* Mid, bool Set_AnimatedCylinderCenter, const struct FVector& AnimatedCylinderCenter, bool Set_Animating_Wind_Magnitude, float Animating_Wind_Magnitude, bool Set_Static_Wind_Magnitude, float Static_Wind_Magnitude, bool Set_CylinderCenter, const struct FVector& CylinderCenter, bool Set_WindVector, const struct FVector& WindVector, bool Set_WindCrossVector, const struct FVector& WindCrossVector, bool Set_OverallOuterRadius, float OverallOuterRadius, bool Set_OverallInnerRadius, float OverallInnerRadius, bool Set_Wind_Still_0_or_Animating_1, float Wind_Still_0_or_Animating_1, bool Set_Circular_Shader_, float Circular_Shader_, bool* NewParam)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe1e490c2);

	AWindManager_C_SetWindMatVariables_Params params;
	params.Mid = Mid;
	params.Set_AnimatedCylinderCenter = Set_AnimatedCylinderCenter;
	params.AnimatedCylinderCenter = AnimatedCylinderCenter;
	params.Set_Animating_Wind_Magnitude = Set_Animating_Wind_Magnitude;
	params.Animating_Wind_Magnitude = Animating_Wind_Magnitude;
	params.Set_Static_Wind_Magnitude = Set_Static_Wind_Magnitude;
	params.Static_Wind_Magnitude = Static_Wind_Magnitude;
	params.Set_CylinderCenter = Set_CylinderCenter;
	params.CylinderCenter = CylinderCenter;
	params.Set_WindVector = Set_WindVector;
	params.WindVector = WindVector;
	params.Set_WindCrossVector = Set_WindCrossVector;
	params.WindCrossVector = WindCrossVector;
	params.Set_OverallOuterRadius = Set_OverallOuterRadius;
	params.OverallOuterRadius = OverallOuterRadius;
	params.Set_OverallInnerRadius = Set_OverallInnerRadius;
	params.OverallInnerRadius = OverallInnerRadius;
	params.Set_Wind_Still_0_or_Animating_1 = Set_Wind_Still_0_or_Animating_1;
	params.Wind_Still_0_or_Animating_1 = Wind_Still_0_or_Animating_1;
	params.Set_Circular_Shader_ = Set_Circular_Shader_;
	params.Circular_Shader_ = Circular_Shader_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WindManager.WindManager_C.UpdateWindDeltaCyl
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Static_Cylinder_Outer_Radius   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* Mid                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Is_Wind_Circular_              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::UpdateWindDeltaCyl(float Static_Cylinder_Outer_Radius, float Duration, class UMaterialInstanceDynamic* Mid, bool Is_Wind_Circular_)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd3f37a4c);

	AWindManager_C_UpdateWindDeltaCyl_Params params;
	params.Static_Cylinder_Outer_Radius = Static_Cylinder_Outer_Radius;
	params.Duration = Duration;
	params.Mid = Mid;
	params.Is_Wind_Circular_ = Is_Wind_Circular_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.RemoveWindCylinder
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder WindImpulseCylinder            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AWindManager_C::RemoveWindCylinder(const struct FFortWindImpulseCylinder& WindImpulseCylinder)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xac2b20cb);

	AWindManager_C_RemoveWindCylinder_Params params;
	params.WindImpulseCylinder = WindImpulseCylinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.UpdateStormWindCylinder
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder Wind_Impulse                   (CPF_Parm)
// struct FFortWindImpulseCylinderDelta Wind_Delta                     (CPF_Parm)

void AWindManager_C::UpdateStormWindCylinder(const struct FFortWindImpulseCylinder& Wind_Impulse, const struct FFortWindImpulseCylinderDelta& Wind_Delta)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8154bc43);

	AWindManager_C_UpdateStormWindCylinder_Params params;
	params.Wind_Impulse = Wind_Impulse;
	params.Wind_Delta = Wind_Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Calculate Camera Position
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USceneCaptureComponent2D* Scene_Capture                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AWindManager_C::Calculate_Camera_Position(float Scale, class USceneCaptureComponent2D* Scene_Capture)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x920279a3);

	AWindManager_C_Calculate_Camera_Position_Params params;
	params.Scale = Scale;
	params.Scene_Capture = Scene_Capture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindManager.WindManager_C.SetRenderOnlyAssets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::SetRenderOnlyAssets(class UPrimitiveComponent* InComponent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd5c24a80);

	AWindManager_C_SetRenderOnlyAssets_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.InitializeOrthoSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWindManager_C::InitializeOrthoSettings()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xefcb4c86);

	AWindManager_C_InitializeOrthoSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWindManager_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb9912b74);

	AWindManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Add Render To Texture Particle
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              InTransform                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AWindManager_C::Add_Render_To_Texture_Particle(class UParticleSystem* EmitterTemplate, const struct FTransform& InTransform)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdb3d31c0);

	AWindManager_C_Add_Render_To_Texture_Particle_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.OnWorldReady
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWindManager_C::OnWorldReady()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x333cbf85);

	AWindManager_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x712aed41);

	AWindManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Register player for render to texture purposes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerPawn_Generic_C*   Player_Pawn_Generic            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::Register_player_for_render_to_texture_purposes(class APlayerPawn_Generic_C* Player_Pawn_Generic)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfe5bf939);

	AWindManager_C_Register_player_for_render_to_texture_purposes_Params params;
	params.Player_Pawn_Generic = Player_Pawn_Generic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.AddWindParticleSystemComponent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystemComponent** ParticleSystemComponent        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::AddWindParticleSystemComponent(class UParticleSystemComponent** ParticleSystemComponent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6aba1754);

	AWindManager_C_AddWindParticleSystemComponent_Params params;
	params.ParticleSystemComponent = ParticleSystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.OnWindImpulseCylinderCreation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder* WindImpulseCylinder            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FFortWindImpulseCylinderDelta* WindImpulseCylinderDelta       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AWindManager_C::OnWindImpulseCylinderCreation(struct FFortWindImpulseCylinder* WindImpulseCylinder, struct FFortWindImpulseCylinderDelta* WindImpulseCylinderDelta)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7bcaee32);

	AWindManager_C_OnWindImpulseCylinderCreation_Params params;
	params.WindImpulseCylinder = WindImpulseCylinder;
	params.WindImpulseCylinderDelta = WindImpulseCylinderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.OnWindImpulseCylinderDeath
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder* WindImpulseCylinder            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AWindManager_C::OnWindImpulseCylinderDeath(struct FFortWindImpulseCylinder* WindImpulseCylinder)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x63c1581);

	AWindManager_C_OnWindImpulseCylinderDeath_Params params;
	params.WindImpulseCylinder = WindImpulseCylinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.OnWindImpulseCylinderDeltaComplete
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder* WindImpulseCylinder            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AWindManager_C::OnWindImpulseCylinderDeltaComplete(struct FFortWindImpulseCylinder* WindImpulseCylinder)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbd5af384);

	AWindManager_C_OnWindImpulseCylinderDeltaComplete_Params params;
	params.WindImpulseCylinder = WindImpulseCylinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.SpawnTestWind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ImpulseMagnitude               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::SpawnTestWind(float Radius, float ImpulseMagnitude)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xce4cd93a);

	AWindManager_C_SpawnTestWind_Params params;
	params.Radius = Radius;
	params.ImpulseMagnitude = ImpulseMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Play Water Splash Particle System At Location
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Particle_Transform             (CPF_Parm, CPF_IsPlainOldData)

void AWindManager_C::Play_Water_Splash_Particle_System_At_Location(const struct FTransform& Particle_Transform)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1497f054);

	AWindManager_C_Play_Water_Splash_Particle_System_At_Location_Params params;
	params.Particle_Transform = Particle_Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Add Wind Component
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     InComponent                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::Add_Wind_Component(class UPrimitiveComponent* InComponent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x89282beb);

	AWindManager_C_Add_Wind_Component_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWindManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x63a8bab);

	AWindManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Update Test
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewMagnitude                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::Update_Test(float NewMagnitude)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x51295cf4);

	AWindManager_C_Update_Test_Params params;
	params.NewMagnitude = NewMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.ExecuteUbergraph_WindManager
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWindManager_C::ExecuteUbergraph_WindManager(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7d545f16);

	AWindManager_C_ExecuteUbergraph_WindManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
