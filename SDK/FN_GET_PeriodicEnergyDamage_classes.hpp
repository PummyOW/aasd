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

// BlueprintGeneratedClass GET_PeriodicEnergyDamage.GET_PeriodicEnergyDamage_C
// 0x0000 (0x0660 - 0x0660)
class UGET_PeriodicEnergyDamage_C : public UGET_PeriodicPhysicalDamage_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1d2c375f);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
