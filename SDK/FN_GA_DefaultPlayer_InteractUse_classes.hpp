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

// BlueprintGeneratedClass GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C
// 0x0008 (0x0A48 - 0x0A40)
class UGA_DefaultPlayer_InteractUse_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb48f0bdf);
		return ptr;
	}


	void OnCancelled_A513E1E044E129CC612DF5A23589BC9C();
	void OnInterrupted_A513E1E044E129CC612DF5A23589BC9C();
	void OnBlendOut_A513E1E044E129CC612DF5A23589BC9C();
	void OnCompleted_A513E1E044E129CC612DF5A23589BC9C();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DefaultPlayer_InteractUse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
