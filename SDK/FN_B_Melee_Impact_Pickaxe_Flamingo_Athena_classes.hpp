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

// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_Flamingo_Athena.B_Melee_Impact_Pickaxe_Flamingo_Athena_C
// 0x0000 (0x0B68 - 0x0B68)
class AB_Melee_Impact_Pickaxe_Flamingo_Athena_C : public AB_Melee_Impact_Pickaxe_Athena_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3c931fc1);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
