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

// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Mode                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Config                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamepadMappingInfo_C::HandleConfigChanged(int Mode, int Config)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3f803533);

	UGamepadMappingInfo_C_HandleConfigChanged_Params params;
	params.Mode = Mode;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged_Athena
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Mode                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Config                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamepadMappingInfo_C::HandleConfigChanged_Athena(int Mode, int Config)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8c032023);

	UGamepadMappingInfo_C_HandleConfigChanged_Athena_Params params;
	params.Mode = Mode;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.OnConfigChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Mode                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Config                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamepadMappingInfo_C::OnConfigChanged(int Mode, int Config)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5a0a4db8);

	UGamepadMappingInfo_C_OnConfigChanged_Params params;
	params.Mode = Mode;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Update Displayed Mapping
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            platform                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Mode                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Configuration                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamepadMappingInfo_C::Update_Displayed_Mapping(int platform, int Mode, int Configuration)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x826006bd);

	UGamepadMappingInfo_C_Update_Displayed_Mapping_Params params;
	params.platform = platform;
	params.Mode = Mode;
	params.Configuration = Configuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
