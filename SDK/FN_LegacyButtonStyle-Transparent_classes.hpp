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

// BlueprintGeneratedClass LegacyButtonStyle-Transparent.LegacyButtonStyle-Transparent_C
// 0x0000 (0x1C08 - 0x1C08)
class ULegacyButtonStyle_Transparent_C : public ULegacyButtonStyle_Base_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb9617c35);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
