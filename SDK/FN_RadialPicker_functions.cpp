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

// Function RadialPicker.RadialPicker_C.SetShowMouseCursor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShowMouseCursor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::SetShowMouseCursor(bool InShowMouseCursor)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2e272dd3);

	URadialPicker_C_SetShowMouseCursor_Params params;
	params.InShowMouseCursor = InShowMouseCursor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.SetPointerDirection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::SetPointerDirection()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xda144079);

	URadialPicker_C_SetPointerDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.IsGamepadInPickerDeadZone
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bIsInDeadZone                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::IsGamepadInPickerDeadZone(bool* bIsInDeadZone)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdc92c2f1);

	URadialPicker_C_IsGamepadInPickerDeadZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInDeadZone != nullptr)
		*bIsInDeadZone = params.bIsInDeadZone;
}


// Function RadialPicker.RadialPicker_C.MoveActiveOption
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MoveOptionDirection            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::MoveActiveOption(int MoveOptionDirection)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x85d4244f);

	URadialPicker_C_MoveActiveOption_Params params;
	params.MoveOptionDirection = MoveOptionDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.ResetInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::ResetInput()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf9f9e582);

	URadialPicker_C_ResetInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.CanConfirm
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CanAccept                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::CanConfirm(bool* CanAccept)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7354dfa3);

	URadialPicker_C_CanConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAccept != nullptr)
		*CanAccept = params.CanAccept;
}


// Function RadialPicker.RadialPicker_C.SetInputMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::SetInputMode()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x657c1000);

	URadialPicker_C_SetInputMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.SetActiveOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Option                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::SetActiveOption(int Option)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc60881a);

	URadialPicker_C_SetActiveOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.ClearActiveOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::ClearActiveOption()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x15719f69);

	URadialPicker_C_ClearActiveOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.GetOptionAngle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Option                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Angle                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::GetOptionAngle(int Option, float* Angle)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x577cb235);

	URadialPicker_C_GetOptionAngle_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function RadialPicker.RadialPicker_C.GetAngleDifference
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          AngleA                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AngleB                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Difference                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::GetAngleDifference(float AngleA, float AngleB, float* Difference)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc418a3a9);

	URadialPicker_C_GetAngleDifference_Params params;
	params.AngleA = AngleA;
	params.AngleB = AngleB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function RadialPicker.RadialPicker_C.GetOptionPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Option                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Position                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void URadialPicker_C::GetOptionPosition(int Option, struct FVector2D* Position)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x14b0b9bd);

	URadialPicker_C_GetOptionPosition_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function RadialPicker.RadialPicker_C.InitializePicker
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortPickerMode                PickerMode                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InitialOption                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::InitializePicker(EFortPickerMode PickerMode, int InitialOption)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd24e58b1);

	URadialPicker_C_InitializePicker_Params params;
	params.PickerMode = PickerMode;
	params.InitialOption = InitialOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5bcf923e);

	URadialPicker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URadialPicker_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x984cbf94);

	URadialPicker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.Event AcceptOption
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::Event_AcceptOption()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc6aa1aa6);

	URadialPicker_C_Event_AcceptOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.Event CancelPicker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::Event_CancelPicker()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6b10e2d);

	URadialPicker_C_Event_CancelPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.ClosePicker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::ClosePicker()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc042f581);

	URadialPicker_C_ClosePicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.AcceptChosenOption
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PickerOption                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::AcceptChosenOption(int PickerOption)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x962a3cf4);

	URadialPicker_C_AcceptChosenOption_Params params;
	params.PickerOption = PickerOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.OnPickerRefreshItems
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::OnPickerRefreshItems()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe0d72153);

	URadialPicker_C_OnPickerRefreshItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.ExecuteUbergraph_RadialPicker
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::ExecuteUbergraph_RadialPicker(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8b56c272);

	URadialPicker_C_ExecuteUbergraph_RadialPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
