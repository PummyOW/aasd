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

// Function PerkWidgetNew.PerkWidgetNew_C.Get_OverlayAbilityPerk_ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UPerkWidgetNew_C::Get_OverlayAbilityPerk_ToolTipWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9caf78e);

	UPerkWidgetNew_C_Get_OverlayAbilityPerk_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIncludeName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIncludeDescription            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFortBrushSize>    IconSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseLargeFormatName            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortUIPerk             Perk                           (CPF_Parm)
// bool                           ShowMouseTooltips              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerkWidgetNew_C::InitializeSettings(bool bIncludeName, bool bIncludeDescription, TEnumAsByte<EFortBrushSize> IconSize, bool bUseLargeFormatName, const struct FFortUIPerk& Perk, bool ShowMouseTooltips)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd4c64c92);

	UPerkWidgetNew_C_InitializeSettings_Params params;
	params.bIncludeName = bIncludeName;
	params.bIncludeDescription = bIncludeDescription;
	params.IconSize = IconSize;
	params.bUseLargeFormatName = bUseLargeFormatName;
	params.Perk = Perk;
	params.ShowMouseTooltips = ShowMouseTooltips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.HighlightBadge
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidgetNew_C::HighlightBadge()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1f9214e2);

	UPerkWidgetNew_C_HighlightBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.GetPerkStat
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTooltipStat            TooltipStat                    (CPF_Parm, CPF_OutParm)

void UPerkWidgetNew_C::GetPerkStat(struct FTooltipStat* TooltipStat)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf1839377);

	UPerkWidgetNew_C_GetPerkStat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TooltipStat != nullptr)
		*TooltipStat = params.TooltipStat;
}


// Function PerkWidgetNew.PerkWidgetNew_C.ShowTierImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidgetNew_C::ShowTierImage()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd0b923b7);

	UPerkWidgetNew_C_ShowTierImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.SetupBadge
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidgetNew_C::SetupBadge()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd0efeb47);

	UPerkWidgetNew_C_SetupBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeHeroBonusIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidgetNew_C::InitializeHeroBonusIcon()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x241bcf35);

	UPerkWidgetNew_C_InitializeHeroBonusIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidgetNew_C::InitializeText()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf8e177a4);

	UPerkWidgetNew_C_InitializeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.ShouldFadePerk
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerkWidgetNew_C::ShouldFadePerk(bool* Result)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x58b47d38);

	UPerkWidgetNew_C_ShouldFadePerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PerkWidgetNew.PerkWidgetNew_C.GetHighlightColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UPerkWidgetNew_C::GetHighlightColor(struct FLinearColor* Color)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb63ccf58);

	UPerkWidgetNew_C_GetHighlightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function PerkWidgetNew.PerkWidgetNew_C.GetTierAbilityBrush
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             SlateBrush                     (CPF_Parm, CPF_OutParm)

void UPerkWidgetNew_C::GetTierAbilityBrush(struct FSlateBrush* SlateBrush)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x69db588b);

	UPerkWidgetNew_C_GetTierAbilityBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlateBrush != nullptr)
		*SlateBrush = params.SlateBrush;
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeAbilityPerk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidgetNew_C::InitializeAbilityPerk()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5d7b15f5);

	UPerkWidgetNew_C_InitializeAbilityPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeBasicPerk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerkWidgetNew_C::InitializeBasicPerk()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd67e6799);

	UPerkWidgetNew_C_InitializeBasicPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerkWidgetNew_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe968ac1d);

	UPerkWidgetNew_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPerkWidgetNew_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x99d54526);

	UPerkWidgetNew_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.ExecuteUbergraph_PerkWidgetNew
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerkWidgetNew_C::ExecuteUbergraph_PerkWidgetNew(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc38beaab);

	UPerkWidgetNew_C_ExecuteUbergraph_PerkWidgetNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
