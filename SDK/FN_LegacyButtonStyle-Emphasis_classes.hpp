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

// BlueprintGeneratedClass LegacyButtonStyle-Emphasis.LegacyButtonStyle-Emphasis_C
// 0x0000 (0x1C08 - 0x1C08)
class ULegacyButtonStyle_Emphasis_C : public ULegacyButtonStyle_Default_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x341ed23b);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
