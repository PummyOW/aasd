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

// WidgetBlueprintGeneratedClass BP_FortMaterialProgressBar.BP_FortMaterialProgressBar_C
// 0x0000 (0x0390 - 0x0390)
class UBP_FortMaterialProgressBar_C : public UFortMaterialProgressBar
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe85beb3f);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
