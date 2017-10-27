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

// Function TeamMicStack.TeamMicStack_C.ClearContents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamMicStack_C::ClearContents()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x13ec5f30);

	UTeamMicStack_C_ClearContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMicStack.TeamMicStack_C.AppendTeamMember
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTeamMicStack_C::AppendTeamMember(struct FFortTeamMemberInfo* TeamMemberInfo)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd1e433ce);

	UTeamMicStack_C_AppendTeamMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamMemberInfo != nullptr)
		*TeamMemberInfo = params.TeamMemberInfo;
}


// Function TeamMicStack.TeamMicStack_C.ShiftTeamMembers
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamMicStack_C::ShiftTeamMembers(int Index, struct FFortTeamMemberInfo* TeamMemberInfo)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb76de973);

	UTeamMicStack_C_ShiftTeamMembers_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamMemberInfo != nullptr)
		*TeamMemberInfo = params.TeamMemberInfo;
}


// Function TeamMicStack.TeamMicStack_C.HandleTeamMemberChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     Member_Info                    (CPF_Parm)

void UTeamMicStack_C::HandleTeamMemberChanged(const struct FFortTeamMemberInfo& Member_Info)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x56ea6008);

	UTeamMicStack_C_HandleTeamMemberChanged_Params params;
	params.Member_Info = Member_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMicStack.TeamMicStack_C.HandleTeamMemberRemoved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Member_Index                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamMicStack_C::HandleTeamMemberRemoved(int Member_Index)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x90be70a8);

	UTeamMicStack_C_HandleTeamMemberRemoved_Params params;
	params.Member_Index = Member_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMicStack.TeamMicStack_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTeamMicStack_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf72c485e);

	UTeamMicStack_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMicStack.TeamMicStack_C.HandlePartyLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamMicStack_C::HandlePartyLeft()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x88cd38f8);

	UTeamMicStack_C_HandlePartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMicStack.TeamMicStack_C.ExecuteUbergraph_TeamMicStack
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamMicStack_C::ExecuteUbergraph_TeamMicStack(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfcd60463);

	UTeamMicStack_C_ExecuteUbergraph_TeamMicStack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
