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

// BlueprintGeneratedClass SkillTreeGroupBG-H-Wide.SkillTreeGroupBG-H-Wide_C
// 0x0000 (0x0530 - 0x0530)
class USkillTreeGroupBG_H_Wide_C : public USkillTreeGroupBG_H_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf50f6445);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
