#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged
struct UGamepadMappingInfo_C_HandleConfigChanged_Params
{
	int                                                Mode;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Config;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged_Athena
struct UGamepadMappingInfo_C_HandleConfigChanged_Athena_Params
{
	int                                                Mode;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Config;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.OnConfigChanged
struct UGamepadMappingInfo_C_OnConfigChanged_Params
{
	int                                                Mode;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Config;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.Update Displayed Mapping
struct UGamepadMappingInfo_C_Update_Displayed_Mapping_Params
{
	int                                                platform;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Mode;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Configuration;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
