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

// BlueprintGeneratedClass ButtonStyle-HighlightEmphasized.ButtonStyle-HighlightEmphasized_C
// 0x0000 (0x0530 - 0x0530)
class UButtonStyle_HighlightEmphasized_C : public UButtonStyle_MediumTransparentNoCues_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xcb2a7505);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
