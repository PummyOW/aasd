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

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleUpdatingBannerMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortQuestItemDefinition* CompletedQuest                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::HandleUpdatingBannerMesh(class USceneComponent* Target, class UFortQuestItemDefinition* CompletedQuest, class UMaterialInstanceDynamic* Material_Instance_Dynamic)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb7398f2a);

	ABP_Hex_PARENT_C_HandleUpdatingBannerMesh_Params params;
	params.Target = Target;
	params.CompletedQuest = CompletedQuest;
	params.Material_Instance_Dynamic = Material_Instance_Dynamic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleMissionAlert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::HandleMissionAlert()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x292ae3b9);

	ABP_Hex_PARENT_C_HandleMissionAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.GroundSliceSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* SourceMaterial                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              TileTypeA                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              TileTypeB                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileIsSameRegionA              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileIsSameRegionB              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileIsHiddenA                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileIsHiddenB                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileExistsA                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileExistsB                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::GroundSliceSettings(class UMaterialInstanceDynamic* SourceMaterial, class UTexture2D* TileTypeA, class UTexture2D* TileTypeB, float TileIsSameRegionA, float TileIsSameRegionB, float TileIsHiddenA, float TileIsHiddenB, float TileExistsA, float TileExistsB)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xcd157acf);

	ABP_Hex_PARENT_C_GroundSliceSettings_Params params;
	params.SourceMaterial = SourceMaterial;
	params.TileTypeA = TileTypeA;
	params.TileTypeB = TileTypeB;
	params.TileIsSameRegionA = TileIsSameRegionA;
	params.TileIsSameRegionB = TileIsSameRegionB;
	params.TileIsHiddenA = TileIsHiddenA;
	params.TileIsHiddenB = TileIsHiddenB;
	params.TileExistsA = TileExistsA;
	params.TileExistsB = TileExistsB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3946d0dc);

	ABP_Hex_PARENT_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::Timeline_11__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xec1c69c1);

	ABP_Hex_PARENT_C_Timeline_11__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::Timeline_11__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6bbdd660);

	ABP_Hex_PARENT_C_Timeline_11__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::Timeline_12__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb25adcca);

	ABP_Hex_PARENT_C_Timeline_12__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::Timeline_12__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa9424917);

	ABP_Hex_PARENT_C_Timeline_12__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleTeamPowerChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TeamPower                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PersonalPower                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::HandleTeamPowerChanged(int TeamPower, int PersonalPower)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8b0f0617);

	ABP_Hex_PARENT_C_HandleTeamPowerChanged_Params params;
	params.TeamPower = TeamPower;
	params.PersonalPower = PersonalPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.FireLightningA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::FireLightningA()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa6f32384);

	ABP_Hex_PARENT_C_FireLightningA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnInitializeTile
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnInitializeTile()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc3a2f492);

	ABP_Hex_PARENT_C_OnInitializeTile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleFrontendCameraChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFrontEndCamera                OldCamera                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::HandleFrontendCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9bf1190);

	ABP_Hex_PARENT_C_HandleFrontendCameraChanged_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMarkedQuestChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnMarkedQuestChanged()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x64d5b42e);

	ABP_Hex_PARENT_C_OnMarkedQuestChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckIfQuestShouldBePinned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::CheckIfQuestShouldBePinned()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa2b3d0de);

	ABP_Hex_PARENT_C_CheckIfQuestShouldBePinned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::CheckFocus()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x917aaabf);

	ABP_Hex_PARENT_C_CheckFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ForceDefocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::ForceDefocus()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9f016897);

	ABP_Hex_PARENT_C_ForceDefocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMissionDataUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnMissionDataUpdated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x21f25eef);

	ABP_Hex_PARENT_C_OnMissionDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckForPinnedInLevel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::CheckForPinnedInLevel()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa9eec0fd);

	ABP_Hex_PARENT_C_CheckForPinnedInLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnDefocus
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnDefocus()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x61d1534b);

	ABP_Hex_PARENT_C_OnDefocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryTileInitialized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::RetryTileInitialized()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xafde388b);

	ABP_Hex_PARENT_C_RetryTileInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryUpdatesPaused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::RetryUpdatesPaused()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd97d9c99);

	ABP_Hex_PARENT_C_RetryUpdatesPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnFocus
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnFocus()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x30c2cf1c);

	ABP_Hex_PARENT_C_OnFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostDeselect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnHostDeselect()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbae50d8b);

	ABP_Hex_PARENT_C_OnHostDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostSelect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnHostSelect()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xaf29cf72);

	ABP_Hex_PARENT_C_OnHostSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.SetMissionPowerLevelDependencies
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::SetMissionPowerLevelDependencies()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6cd8d3b1);

	ABP_Hex_PARENT_C_SetMissionPowerLevelDependencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientDeselect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnClientDeselect()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4bc00040);

	ABP_Hex_PARENT_C_OnClientDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientSelect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnClientSelect()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa9784891);

	ABP_Hex_PARENT_C_OnClientSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1a285e03);

	ABP_Hex_PARENT_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Velocity                       (CPF_Parm, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::MissionLightning(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x46e91acf);

	ABP_Hex_PARENT_C_MissionLightning_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightningOff
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticleTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Velocity                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Direction                      (CPF_Parm, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::MissionLightningOff(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x96e264ae);

	ABP_Hex_PARENT_C_MissionLightningOff_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ExecuteUbergraph_BP_Hex_PARENT
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::ExecuteUbergraph_BP_Hex_PARENT(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf24bd12e);

	ABP_Hex_PARENT_C_ExecuteUbergraph_BP_Hex_PARENT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
