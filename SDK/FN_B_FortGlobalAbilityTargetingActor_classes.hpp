#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_FortGlobalAbilityTargetingActor.B_FortGlobalAbilityTargetingActor_C
// 0x0000 (0x0388 - 0x0388)
class AB_FortGlobalAbilityTargetingActor_C : public AFortGlobalAbilityTargetingActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf9fc65ed);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
