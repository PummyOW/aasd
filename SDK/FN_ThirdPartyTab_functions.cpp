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

// Function ThirdPartyTab.ThirdPartyTab_C.Activate Scroll Box
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UThirdPartyTab_C::Activate_Scroll_Box()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x46662bb4);

	UThirdPartyTab_C_Activate_Scroll_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
