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

// Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   StatValueAsText                (CPF_Parm)

void UAthenaMainStatTile_C::SetStatValue(const struct FText& StatValueAsText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue");

	UAthenaMainStatTile_C_SetStatValue_Params params;
	params.StatValueAsText = StatValueAsText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMainStatTile.AthenaMainStatTile_C.SetTagAndDisplayName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Tag                            (CPF_Parm, CPF_ZeroConstructor)
// struct FText                   DisplayName                    (CPF_Parm)

void UAthenaMainStatTile_C::SetTagAndDisplayName(const struct FString& Tag, const struct FText& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMainStatTile.AthenaMainStatTile_C.SetTagAndDisplayName");

	UAthenaMainStatTile_C_SetTagAndDisplayName_Params params;
	params.Tag = Tag;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMainStatTile.AthenaMainStatTile_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaMainStatTile_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMainStatTile.AthenaMainStatTile_C.PreConstruct");

	UAthenaMainStatTile_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMainStatTile.AthenaMainStatTile_C.ExecuteUbergraph_AthenaMainStatTile
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaMainStatTile_C::ExecuteUbergraph_AthenaMainStatTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMainStatTile.AthenaMainStatTile_C.ExecuteUbergraph_AthenaMainStatTile");

	UAthenaMainStatTile_C_ExecuteUbergraph_AthenaMainStatTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
