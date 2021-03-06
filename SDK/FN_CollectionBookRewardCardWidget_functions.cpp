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

// Function CollectionBookRewardCardWidget.CollectionBookRewardCardWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookRewardCardWidget_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x349c0a8d);

	UCollectionBookRewardCardWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookRewardCardWidget.CollectionBookRewardCardWidget_C.ExecuteUbergraph_CollectionBookRewardCardWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookRewardCardWidget_C::ExecuteUbergraph_CollectionBookRewardCardWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6ce819ff);

	UCollectionBookRewardCardWidget_C_ExecuteUbergraph_CollectionBookRewardCardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
