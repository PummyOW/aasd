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

// Function EnemyPawn_Interface.EnemyPawn_Interface_C.Orphaned
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsOrphaned                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFortPawn*               AttachedPawn                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEnemyPawn_Interface_C::Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x83462a46);

	UEnemyPawn_Interface_C_Orphaned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOrphaned != nullptr)
		*IsOrphaned = params.IsOrphaned;
	if (AttachedPawn != nullptr)
		*AttachedPawn = params.AttachedPawn;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
