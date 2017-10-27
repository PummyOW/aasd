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

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Call Animation Curve Again
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AParent_BuildingPropActor_C::Call_Animation_Curve_Again()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xda3d39d2);

	AParent_BuildingPropActor_C_Call_Animation_Curve_Again_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Add to TOD Light Array
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ULightComponent*         NewItem                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void AParent_BuildingPropActor_C::Add_to_TOD_Light_Array(class ULightComponent* NewItem)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb0eefedb);

	AParent_BuildingPropActor_C_Add_to_TOD_Light_Array_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Set  MID Values For Lights
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AParent_BuildingPropActor_C::Set__MID_Values_For_Lights()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4e50907d);

	AParent_BuildingPropActor_C_Set__MID_Values_For_Lights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Set Light parameters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Previous_to_Current_Day_Phase_Alpha (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AParent_BuildingPropActor_C::Set_Light_parameters(float Previous_to_Current_Day_Phase_Alpha)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6bb0d235);

	AParent_BuildingPropActor_C_Set_Light_parameters_Params params;
	params.Previous_to_Current_Day_Phase_Alpha = Previous_to_Current_Day_Phase_Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AParent_BuildingPropActor_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd014efce);

	AParent_BuildingPropActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.OnDayPhaseChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortDayPhase>*    CurrentDayPhase                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFortDayPhase>*    PreviousDayPhase               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          bAtCreation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AParent_BuildingPropActor_C::OnDayPhaseChanged(TEnumAsByte<EFortDayPhase>* CurrentDayPhase, TEnumAsByte<EFortDayPhase>* PreviousDayPhase, bool* bAtCreation)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x847da0e3);

	AParent_BuildingPropActor_C_OnDayPhaseChanged_Params params;
	params.CurrentDayPhase = CurrentDayPhase;
	params.PreviousDayPhase = PreviousDayPhase;
	params.bAtCreation = bAtCreation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AParent_BuildingPropActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x640a2d91);

	AParent_BuildingPropActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.OnBounceAnimationUpdate
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortBounceData*        Data                           (CPF_Parm)

void AParent_BuildingPropActor_C::OnBounceAnimationUpdate(struct FFortBounceData* Data)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x635a1fdf);

	AParent_BuildingPropActor_C_OnBounceAnimationUpdate_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Loop Animation Curve
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AParent_BuildingPropActor_C::Loop_Animation_Curve()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x611462d8);

	AParent_BuildingPropActor_C_Loop_Animation_Curve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.ExecuteUbergraph_Parent_BuildingPropActor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AParent_BuildingPropActor_C::ExecuteUbergraph_Parent_BuildingPropActor(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd2f3fa32);

	AParent_BuildingPropActor_C_ExecuteUbergraph_Parent_BuildingPropActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
