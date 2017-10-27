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

// Function QuickbarSlot.QuickbarSlot_C.UpdateItemBoxSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::UpdateItemBoxSize()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc162bcf);

	UQuickbarSlot_C_UpdateItemBoxSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.UpdateItemCardsVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::UpdateItemCardsVisibility()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x78a35296);

	UQuickbarSlot_C_UpdateItemCardsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStopped
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortItemCooldownType          CooldownType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::OnCooldownStopped(EFortItemCooldownType CooldownType)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x88e0b246);

	UQuickbarSlot_C_OnCooldownStopped_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStarted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortItemCooldownType          CooldownType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::OnCooldownStarted(EFortItemCooldownType CooldownType)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdc2beb6);

	UQuickbarSlot_C_OnCooldownStarted_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.InitializeCooldowns
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::InitializeCooldowns()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xeefe5);

	UQuickbarSlot_C_InitializeCooldowns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Gamepad
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyBindingAction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::GetKeyBindingAction_Gamepad(struct FName* KeyBindingAction)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe45df6d7);

	UQuickbarSlot_C_GetKeyBindingAction_Gamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyBindingAction != nullptr)
		*KeyBindingAction = params.KeyBindingAction;
}


// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Keyboard
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Key_Binding_Action             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::GetKeyBindingAction_Keyboard(struct FName* Key_Binding_Action)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf2d1be0d);

	UQuickbarSlot_C_GetKeyBindingAction_Keyboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key_Binding_Action != nullptr)
		*Key_Binding_Action = params.Key_Binding_Action;
}


// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyBindingAction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::GetKeyBindingAction(struct FName* KeyBindingAction)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x61371cd3);

	UQuickbarSlot_C_GetKeyBindingAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyBindingAction != nullptr)
		*KeyBindingAction = params.KeyBindingAction;
}


// Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::UpdateKeyBindingVisibility()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7f390a70);

	UQuickbarSlot_C_UpdateKeyBindingVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::UpdateKeyBindingText()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6d13e361);

	UQuickbarSlot_C_UpdateKeyBindingText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Resize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortItemCardSize              Card_Size                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::Resize(EFortItemCardSize Card_Size)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe6e58c33);

	UQuickbarSlot_C_Resize_Params params;
	params.Card_Size = Card_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Maximize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldSkipAnimation            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::Maximize(bool ShouldSkipAnimation)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xda73f7dd);

	UQuickbarSlot_C_Maximize_Params params;
	params.ShouldSkipAnimation = ShouldSkipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Minimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldSkipAnimation            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::Minimize(bool ShouldSkipAnimation)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2b0ca2c7);

	UQuickbarSlot_C_Minimize_Params params;
	params.ShouldSkipAnimation = ShouldSkipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::SetSelected(bool Selected)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfcd33896);

	UQuickbarSlot_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::HandleMaximizeStarted()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8ddf0dae);

	UQuickbarSlot_C_HandleMaximizeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::HandleMinimizeFinished()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4808df47);

	UQuickbarSlot_C_HandleMinimizeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::HandleMaximizeFinished()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xacac765);

	UQuickbarSlot_C_HandleMaximizeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::HandleMinimizeStarted()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xace8c3b8);

	UQuickbarSlot_C_HandleMinimizeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x143086ec);

	UQuickbarSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6224a04d);

	UQuickbarSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.RefreshItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::RefreshItem()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2e562111);

	UQuickbarSlot_C_RefreshItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuickbarSlot_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1d60b936);

	UQuickbarSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.SetAnimatedBoxScaleFactor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          AnimatedBoxScaleFactor         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::SetAnimatedBoxScaleFactor(float AnimatedBoxScaleFactor)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc48c9374);

	UQuickbarSlot_C_SetAnimatedBoxScaleFactor_Params params;
	params.AnimatedBoxScaleFactor = AnimatedBoxScaleFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.ExecuteUbergraph_QuickbarSlot
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::ExecuteUbergraph_QuickbarSlot(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3c5c12f7);

	UQuickbarSlot_C_ExecuteUbergraph_QuickbarSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
