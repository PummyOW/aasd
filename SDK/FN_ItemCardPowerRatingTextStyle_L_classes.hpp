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

// BlueprintGeneratedClass ItemCardPowerRatingTextStyle_L.ItemCardPowerRatingTextStyle_L_C
// 0x0000 (0x00D0 - 0x00D0)
class UItemCardPowerRatingTextStyle_L_C : public UCommonTextStyle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x40ef4a09);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
