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

// BlueprintGeneratedClass Border-ItemInfo-Blank.Border-ItemInfo-Blank_C
// 0x0000 (0x00B8 - 0x00B8)
class UBorder_ItemInfo_Blank_C : public UBorder_ItemInfo_Unlocked_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x76d05255);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
