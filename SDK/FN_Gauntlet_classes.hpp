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

// Class Gauntlet.GauntletTestController
// 0x0008 (0x0030 - 0x0028)
class UGauntletTestController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x750fa7b);
		return ptr;
	}

};


// Class Gauntlet.GauntletTestControllerBootTest
// 0x0000 (0x0030 - 0x0030)
class UGauntletTestControllerBootTest : public UGauntletTestController
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xcedd5dab);
		return ptr;
	}

};


// Class Gauntlet.GauntletTestControllerErrorTest
// 0x0020 (0x0050 - 0x0030)
class UGauntletTestControllerErrorTest : public UGauntletTestController
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x171d2e7);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
