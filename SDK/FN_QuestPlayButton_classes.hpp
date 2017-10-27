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

// WidgetBlueprintGeneratedClass QuestPlayButton.QuestPlayButton_C
// 0x001C (0x0254 - 0x0238)
class UQuestPlayButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UIconTextButton_C*                           PlayButton;                                               // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UFortQuestItem*                              QuestItem;                                                // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                HACK_PlayerStateDirtyCounter;                             // 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2232de3d);
		return ptr;
	}


	void OnLobbyDisconnected();
	void UpdateQuestStatus(bool bInCanPlayQuest);
	void GetActiveTileType(EFortTheaterMapTileType* TileType);
	void CalculateCritMissionDifficulty(float OverrideMin, float OverrideMax, float* OutDifficultyMin, float* OutDifficultyMax);
	void SetPlayButtonEnable(bool Enable);
	void CanPlayQuest(bool* CanPlay);
	bool CanNavigateToQuestObjective();
	void AttemptPlayQuest();
	void AttemptNavigationToQuestObjective();
	void SetQuest(class UFortQuestItem* Quest);
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ForceClick();
	void OnMatchmakingStarted();
	void OnMatchmakingCompleted(EMatchmakingCompleteResult Result);
	void OnPlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo);
	void Destruct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_QuestPlayButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
