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

// Function JournalObjectiveProgressWidget.JournalObjectiveProgressWidget_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Required                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Achieved                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalObjectiveProgressWidget_C::Update(int Required, int Achieved)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdb6a78e2);

	UJournalObjectiveProgressWidget_C_Update_Params params;
	params.Required = Required;
	params.Achieved = Achieved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
