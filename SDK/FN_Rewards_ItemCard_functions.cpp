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

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetOutpostInventoryNotification
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::SetOutpostInventoryNotification(bool ShouldShow)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6a107e);

	URewards_ItemCard_C_SetOutpostInventoryNotification_Params params;
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetOpaque
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::SetOpaque()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1389ff88);

	URewards_ItemCard_C_SetOpaque_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SkipPopInAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::SkipPopInAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x122e4c28);

	URewards_ItemCard_C_SkipPopInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetTransparent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::SetTransparent()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9f1549e5);

	URewards_ItemCard_C_SetTransparent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PlaySecondaryPopInAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::PlaySecondaryPopInAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6f88350f);

	URewards_ItemCard_C_PlaySecondaryPopInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PlayPrimaryPopInAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::PlayPrimaryPopInAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x490dae9b);

	URewards_ItemCard_C_PlayPrimaryPopInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.GetDropShadowDepth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          DropShadowDepth                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::GetDropShadowDepth(float* DropShadowDepth)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xcafcce9d);

	URewards_ItemCard_C_GetDropShadowDepth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DropShadowDepth != nullptr)
		*DropShadowDepth = params.DropShadowDepth;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.InitDropShadow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::InitDropShadow()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2e72f95e);

	URewards_ItemCard_C_InitDropShadow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetDropShadowSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::SetDropShadowSize()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4f2a1879);

	URewards_ItemCard_C_SetDropShadowSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetDropShadowDepth
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ShadowDepth                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::SetDropShadowDepth(float ShadowDepth)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6f782ca9);

	URewards_ItemCard_C_SetDropShadowDepth_Params params;
	params.ShadowDepth = ShadowDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.HideDropShadow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::HideDropShadow()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x40461948);

	URewards_ItemCard_C_HideDropShadow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.ShowDropShadow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ShadowDepth                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::ShowDropShadow(float ShadowDepth)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb0fdd7af);

	URewards_ItemCard_C_ShowDropShadow_Params params;
	params.ShadowDepth = ShadowDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.StartResizeAnimation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::StartResizeAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x81deb6c5);

	URewards_ItemCard_C_StartResizeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SizeUp
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Delay                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DropShadowDepth                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::SizeUp(float Duration, float Delay, float DropShadowDepth)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8687884b);

	URewards_ItemCard_C_SizeUp_Params params;
	params.Duration = Duration;
	params.Delay = Delay;
	params.DropShadowDepth = DropShadowDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.TickResizeAnimation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::TickResizeAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4c2a116);

	URewards_ItemCard_C_TickResizeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SizeDown
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Delay                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DropShadowDepth                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::SizeDown(float Duration, float Delay, float DropShadowDepth)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb0cda7f0);

	URewards_ItemCard_C_SizeDown_Params params;
	params.Duration = Duration;
	params.Delay = Delay;
	params.DropShadowDepth = DropShadowDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.GetCardSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D URewards_ItemCard_C::GetCardSize()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x84374a8);

	URewards_ItemCard_C_GetCardSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.GetItemToRepresent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortItem*               ItemToRepresent                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::GetItemToRepresent(class UFortItem** ItemToRepresent)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb49c9da5);

	URewards_ItemCard_C_GetItemToRepresent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemToRepresent != nullptr)
		*ItemToRepresent = params.ItemToRepresent;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.HandlePopInAnimationFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::HandlePopInAnimationFinished()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x69422cc5);

	URewards_ItemCard_C_HandlePopInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetInspectAction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::SetInspectAction()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1e54b57d);

	URewards_ItemCard_C_SetInspectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.TickScaleAnimation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::TickScaleAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x133eac6c);

	URewards_ItemCard_C_TickScaleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PlayScaleAnimation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TargetScale                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DropShadowDepth                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::PlayScaleAnimation(float TargetScale, float Duration, float DropShadowDepth)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x26564ec1);

	URewards_ItemCard_C_PlayScaleAnimation_Params params;
	params.TargetScale = TargetScale;
	params.Duration = Duration;
	params.DropShadowDepth = DropShadowDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.StartSlideAnimation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::StartSlideAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x88f00532);

	URewards_ItemCard_C_StartSlideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.EndSlideAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::EndSlideAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe27c83dd);

	URewards_ItemCard_C_EndSlideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PlaySlideAnimation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               TargetAlignment                (CPF_Parm, CPF_IsPlainOldData)
// struct FAnchors                TargetAnchors                  (CPF_Parm)
// float                          TargetScale                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TargetOffset                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TargetAngle                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StaggerDelay                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               TargetTranslation              (CPF_Parm, CPF_IsPlainOldData)

void URewards_ItemCard_C::PlaySlideAnimation(const struct FVector2D& TargetAlignment, const struct FAnchors& TargetAnchors, float TargetScale, float TargetOffset, float TargetAngle, float Duration, float StaggerDelay, const struct FVector2D& TargetTranslation)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x89ba937e);

	URewards_ItemCard_C_PlaySlideAnimation_Params params;
	params.TargetAlignment = TargetAlignment;
	params.TargetAnchors = TargetAnchors;
	params.TargetScale = TargetScale;
	params.TargetOffset = TargetOffset;
	params.TargetAngle = TargetAngle;
	params.Duration = Duration;
	params.StaggerDelay = StaggerDelay;
	params.TargetTranslation = TargetTranslation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.TickSlideAnimation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::TickSlideAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x98a11feb);

	URewards_ItemCard_C_TickSlideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetItemToRepresent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::SetItemToRepresent(class UFortItem* Item)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3a0082d1);

	URewards_ItemCard_C_SetItemToRepresent_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.InitDesignView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::InitDesignView()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9652b9cc);

	URewards_ItemCard_C_InitDesignView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x765f7905);

	URewards_ItemCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb4127080);

	URewards_ItemCard_C_BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URewards_ItemCard_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3e01149e);

	URewards_ItemCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.ExecuteUbergraph_Rewards_ItemCard
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::ExecuteUbergraph_Rewards_ItemCard(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe266ba07);

	URewards_ItemCard_C_ExecuteUbergraph_Rewards_ItemCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.OnPopInAnimationFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewards_ItemCard_C::OnPopInAnimationFinished__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x82e3184f);

	URewards_ItemCard_C_OnPopInAnimationFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.OnResizeAnimationFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     RewardsItemCard                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::OnResizeAnimationFinished__DelegateSignature(class URewards_ItemCard_C* RewardsItemCard)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xae19902b);

	URewards_ItemCard_C_OnResizeAnimationFinished__DelegateSignature_Params params;
	params.RewardsItemCard = RewardsItemCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.OnInspectClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     Card                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::OnInspectClicked__DelegateSignature(class URewards_ItemCard_C* Card)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8ac3dc1a);

	URewards_ItemCard_C_OnInspectClicked__DelegateSignature_Params params;
	params.Card = Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rewards_ItemCard.Rewards_ItemCard_C.OnSlideAnimationFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*     RewardsItemCard                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewards_ItemCard_C::OnSlideAnimationFinished__DelegateSignature(class URewards_ItemCard_C* RewardsItemCard)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x353d8f8c);

	URewards_ItemCard_C_OnSlideAnimationFinished__DelegateSignature_Params params;
	params.RewardsItemCard = RewardsItemCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
