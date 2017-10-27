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

// Function TooltipLibrary.TooltipLibrary_C.CreateXPTooltip
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Owner                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Header                         (CPF_Parm)
// struct FText                   CommanderXP                    (CPF_Parm)
// struct FText                   BoostXP                        (CPF_Parm)
// struct FText                   RestXP                         (CPF_Parm)
// struct FText                   Body                           (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonUserWidget*       Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltipLibrary_C::STATIC_CreateXPTooltip(class APlayerController* Owner, const struct FText& Header, const struct FText& CommanderXP, const struct FText& BoostXP, const struct FText& RestXP, const struct FText& Body, class UObject* __WorldContext, class UCommonUserWidget** Out)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4d07b238);

	UTooltipLibrary_C_CreateXPTooltip_Params params;
	params.Owner = Owner;
	params.Header = Header;
	params.CommanderXP = CommanderXP;
	params.BoostXP = BoostXP;
	params.RestXP = RestXP;
	params.Body = Body;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function TooltipLibrary.TooltipLibrary_C.Create Core Stat Tooltip
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHeroCoreStat           Data                           (CPF_Parm)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltipLibrary_C::STATIC_Create_Core_Stat_Tooltip(class APlayerController* Owning_Player, const struct FHeroCoreStat& Data, float Value, class UObject* __WorldContext, class UUserWidget** Output)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdf843b4b);

	UTooltipLibrary_C_Create_Core_Stat_Tooltip_Params params;
	params.Owning_Player = Owning_Player;
	params.Data = Data;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function TooltipLibrary.TooltipLibrary_C.Create Basic Multi Line Tooltip
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FText>           Body_Text                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FText                   Header_Text                    (CPF_Parm)
// class USlateBrushAsset*        Icon_Brush                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltipLibrary_C::STATIC_Create_Basic_Multi_Line_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, TArray<struct FText>* Body_Text, class UUserWidget** Output)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2d2ba625);

	UTooltipLibrary_C_Create_Basic_Multi_Line_Tooltip_Params params;
	params.Owning_Player = Owning_Player;
	params.Header_Text = Header_Text;
	params.Icon_Brush = Icon_Brush;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Body_Text != nullptr)
		*Body_Text = params.Body_Text;
	if (Output != nullptr)
		*Output = params.Output;
}


// Function TooltipLibrary.TooltipLibrary_C.Create Compare Item Tooltip
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Header_Text                    (CPF_Parm)
// class USlateBrushAsset*        Header_Icon                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               ComparedItem                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltipLibrary_C::STATIC_Create_Compare_Item_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, class UFortItem* ComparedItem, class UObject* __WorldContext, class UWidget** Return_Value)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1d4e651e);

	UTooltipLibrary_C_Create_Compare_Item_Tooltip_Params params;
	params.Owning_Player = Owning_Player;
	params.Header_Text = Header_Text;
	params.Header_Icon = Header_Icon;
	params.Item = Item;
	params.ComparedItem = ComparedItem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function TooltipLibrary.TooltipLibrary_C.Create Item Tooltip
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Header_Text                    (CPF_Parm)
// class USlateBrushAsset*        Header_Icon                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OverrideQuantity               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltipLibrary_C::STATIC_Create_Item_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, int OverrideQuantity, class UObject* __WorldContext, class UWidget** Return_Value)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf9a96301);

	UTooltipLibrary_C_Create_Item_Tooltip_Params params;
	params.Owning_Player = Owning_Player;
	params.Header_Text = Header_Text;
	params.Header_Icon = Header_Icon;
	params.Item = Item;
	params.OverrideQuantity = OverrideQuantity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function TooltipLibrary.TooltipLibrary_C.Set Enabled And Tooltip Text
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Tooltip_Text                   (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltipLibrary_C::STATIC_Set_Enabled_And_Tooltip_Text(class UWidget* Widget, bool Enabled, const struct FText& Tooltip_Text, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x11d8799d);

	UTooltipLibrary_C_Set_Enabled_And_Tooltip_Text_Params params;
	params.Widget = Widget;
	params.Enabled = Enabled;
	params.Tooltip_Text = Tooltip_Text;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipLibrary.TooltipLibrary_C.Create Custom Tooltip
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Header_Text                    (CPF_Parm)
// class USlateBrushAsset*        Icon_Brush                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltipLibrary_C::STATIC_Create_Custom_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UUserWidget* Widget, class UObject* __WorldContext, class UUserWidget** Output)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x60a65215);

	UTooltipLibrary_C_Create_Custom_Tooltip_Params params;
	params.Owning_Player = Owning_Player;
	params.Header_Text = Header_Text;
	params.Icon_Brush = Icon_Brush;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function TooltipLibrary.TooltipLibrary_C.Create Basic Tooltip
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Body_Text                      (CPF_Parm)
// struct FText                   Header_Text                    (CPF_Parm)
// class USlateBrushAsset*        Icon_Brush                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltipLibrary_C::STATIC_Create_Basic_Tooltip(class APlayerController* Owning_Player, const struct FText& Body_Text, const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, class UUserWidget** Output)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x21c892c8);

	UTooltipLibrary_C_Create_Basic_Tooltip_Params params;
	params.Owning_Player = Owning_Player;
	params.Body_Text = Body_Text;
	params.Header_Text = Header_Text;
	params.Icon_Brush = Icon_Brush;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
