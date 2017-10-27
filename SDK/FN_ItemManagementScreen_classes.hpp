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

// WidgetBlueprintGeneratedClass ItemManagementScreen.ItemManagementScreen_C
// 0x0028 (0x0738 - 0x0710)
class UItemManagementScreen_C : public UFortItemManagementScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0710(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USizeBox*                                    SizeBox_Inventory;                                        // 0x0718(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	bool                                               ItemDragEnabled;                                          // 0x0720(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0721(0x0007) MISSED OFFSET
	class UFortItemManagementItemTileButton*           SelectedTileButton;                                       // 0x0728(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UQuantitySelector_C*                         QuantitySelectorWidget;                                   // 0x0730(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xdef18bd5);
		return ptr;
	}


	void HandleMulchItemsCallback(int Quantity, class UFortItem* Item);
	void GetMaxTransferCount(class UFortItem* Item, int* Count);
	void CompleteItemDrop(class UFortItem* Item, int Quantity);
	void HandleDropItemsCallback(int Quantity, class UFortItem* Item);
	void HandleDrop(class UFortItem* Item);
	void CompleteItemTransfer(class UFortItem* Item, int Quantity);
	void HandleTransferItemsCallback(int Quantity, class UFortItem* Item);
	void DestroyQuantitySelector();
	void CreateQuantitySelector(class UFortItem* Item, const struct FText& Title, const struct FText& ConfirmText, int InitialQuantity, int MaxQuantity);
	void HandleTransfer(class UFortItem* ItemToTransfer);
	void ShowCraftError(EFortCraftFailCause FailCause);
	void CraftAndSlot(class UFortSchematicItem* SchematicItem);
	void HandleEquip(class UFortItem* Item);
	void SizeInventoryPanel();
	bool OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void GetDescriptionText(struct FText* ItemDescription);
	void HandleInspect(class UFortItem* ItemToInspect);
	void HandleClose();
	void DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40(EFortDialogResult Result, const struct FName& ResultName);
	void OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA();
	void HandleDifferentItemManagementModeSetBP();
	void HandleEquipItemBP(class UFortItem** Item);
	void HandleCraftItemBP(class UFortSchematicItem** SchematicItem);
	void DefaultActionRefresh();
	void OnActivated();
	void HandleConsumeItemBP(class UFortConsumableAccountItem** ConsumableItem);
	void HandleInspectItemBP(class UFortItem** Item);
	void HandleTransferItemBP(class UFortItem** Item);
	void HandleDropItemBP(class UFortItem** Item);
	void HandleMulchQuantitySelection(class UFortItem** Item);
	void ExecuteUbergraph_ItemManagementScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
