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

// WidgetBlueprintGeneratedClass ConversationUtil.ConversationUtil_C
// 0x0008 (0x0248 - 0x0240)
class UConversationUtil_C : public UFortJournalQuestDetails
{
public:
	class UFortConversation*                           Conversation;                                             // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb36c13df);
		return ptr;
	}


	void StartConversation(class UFortConversation* Conversation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
