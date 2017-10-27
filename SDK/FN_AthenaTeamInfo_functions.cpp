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

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMutedChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamMuted                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamMutedChanged(TArray<bool>* TeamMuted)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9f5d591d);

	UAthenaTeamInfo_C_HandleTeamMutedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamMuted != nullptr)
		*TeamMuted = params.TeamMuted;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamTalkingChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamTalking                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamTalkingChanged(TArray<bool>* TeamTalking)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x41bd408c);

	UAthenaTeamInfo_C_HandleTeamTalkingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamTalking != nullptr)
		*TeamTalking = params.TeamTalking;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberRemoved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaTeamInfo_C::HandleTeamMemberRemoved()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb27a4fe4);

	UAthenaTeamInfo_C_HandleTeamMemberRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamRevivingChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamReviving                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamRevivingChanged(TArray<bool>* TeamReviving)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc7bb5918);

	UAthenaTeamInfo_C_HandleTeamRevivingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamReviving != nullptr)
		*TeamReviving = params.TeamReviving;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberPlayerNamesChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaTeamInfo_C::HandleTeamMemberPlayerNamesChanged()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf6d5c6df);

	UAthenaTeamInfo_C_HandleTeamMemberPlayerNamesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDeadChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamDead                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamDeadChanged(TArray<bool>* TeamDead)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe9a086d8);

	UAthenaTeamInfo_C_HandleTeamDeadChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamDead != nullptr)
		*TeamDead = params.TeamDead;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDBNOChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamDBNO                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamDBNOChanged(TArray<bool>* TeamDBNO)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc1ad520b);

	UAthenaTeamInfo_C_HandleTeamDBNOChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamDBNO != nullptr)
		*TeamDBNO = params.TeamDBNO;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaTeamInfo_C::HandleTeamMemberAdded()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x15d65a5e);

	UAthenaTeamInfo_C_HandleTeamMemberAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamHitInfoChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<float>                  HealthFractions                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  ShieldFractions                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamHitInfoChanged(TArray<float>* HealthFractions, TArray<float>* ShieldFractions)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x35d6d933);

	UAthenaTeamInfo_C_HandleTeamHitInfoChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthFractions != nullptr)
		*HealthFractions = params.HealthFractions;
	if (ShieldFractions != nullptr)
		*ShieldFractions = params.ShieldFractions;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.ClearContents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaTeamInfo_C::ClearContents()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1beb06a4);

	UAthenaTeamInfo_C_ClearContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.AppendTeamMember
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  PlayerState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamInfo_C::AppendTeamMember(class AFortPlayerStateAthena* PlayerState, int PlayerIndex)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x25e348fa);

	UAthenaTeamInfo_C_AppendTeamMember_Params params;
	params.PlayerState = PlayerState;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaTeamInfo_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe8370dfa);

	UAthenaTeamInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandlePartyLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaTeamInfo_C::HandlePartyLeft()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x95e8fd64);

	UAthenaTeamInfo_C_HandlePartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamInfo_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x46d21151);

	UAthenaTeamInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.ExecuteUbergraph_AthenaTeamInfo
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamInfo_C::ExecuteUbergraph_AthenaTeamInfo(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdb29b26d);

	UAthenaTeamInfo_C_ExecuteUbergraph_AthenaTeamInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
