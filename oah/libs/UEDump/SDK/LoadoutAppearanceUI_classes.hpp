#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadoutAppearanceUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"
#include "ShopItemCategory_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoadoutAppearanceUI.LoadoutAppearanceUI_C
// 0x0098 (0x02F8 - 0x0260)
class ULoadoutAppearanceUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEquippedInventorySlot_C*               EquippedInventorySlot;                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquippedInventorySlot_C*               EquippedInventorySlot_1;                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquippedInventorySlot_C*               EquippedInventorySlot_2;                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquippedInventorySlot_C*               EquippedInventorySlot_3;                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MinusSkin;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PlusSkin;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SkinColorDisplay;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class UMaterialInterface*, struct FSlateColor> SkinColors;                                        // 0x02A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ARobberController_C*                    As_Robber_Controller;                              // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LoadoutAppearanceUI(int32 EntryPoint);
	void BndEvt__LoadoutAppearanceUI_Button_148_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LoadoutAppearanceUI_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void RemoveloadoutCategory();
	void Remove();
	void Construct();
	void PreviewItem(class UClass* ItemInfo, int32 SalePrice);
	void CancelDrag();
	void DragItemFromCategory(EShopItemCategory Category);
	void ChangeCategory(EShopItemCategory Category);
	void RefreshInventory();
	void ChangeSkinColor(int32 Amount, class UMaterialInterface** SkinColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoadoutAppearanceUI_C">();
	}
	static class ULoadoutAppearanceUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadoutAppearanceUI_C>();
	}
};
static_assert(alignof(ULoadoutAppearanceUI_C) == 0x000008, "Wrong alignment on ULoadoutAppearanceUI_C");
static_assert(sizeof(ULoadoutAppearanceUI_C) == 0x0002F8, "Wrong size on ULoadoutAppearanceUI_C");
static_assert(offsetof(ULoadoutAppearanceUI_C, UberGraphFrame) == 0x000260, "Member 'ULoadoutAppearanceUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoadoutAppearanceUI_C, EquippedInventorySlot) == 0x000268, "Member 'ULoadoutAppearanceUI_C::EquippedInventorySlot' has a wrong offset!");
static_assert(offsetof(ULoadoutAppearanceUI_C, EquippedInventorySlot_1) == 0x000270, "Member 'ULoadoutAppearanceUI_C::EquippedInventorySlot_1' has a wrong offset!");
static_assert(offsetof(ULoadoutAppearanceUI_C, EquippedInventorySlot_2) == 0x000278, "Member 'ULoadoutAppearanceUI_C::EquippedInventorySlot_2' has a wrong offset!");
static_assert(offsetof(ULoadoutAppearanceUI_C, EquippedInventorySlot_3) == 0x000280, "Member 'ULoadoutAppearanceUI_C::EquippedInventorySlot_3' has a wrong offset!");
static_assert(offsetof(ULoadoutAppearanceUI_C, MinusSkin) == 0x000288, "Member 'ULoadoutAppearanceUI_C::MinusSkin' has a wrong offset!");
static_assert(offsetof(ULoadoutAppearanceUI_C, PlusSkin) == 0x000290, "Member 'ULoadoutAppearanceUI_C::PlusSkin' has a wrong offset!");
static_assert(offsetof(ULoadoutAppearanceUI_C, SkinColorDisplay) == 0x000298, "Member 'ULoadoutAppearanceUI_C::SkinColorDisplay' has a wrong offset!");
static_assert(offsetof(ULoadoutAppearanceUI_C, SkinColors) == 0x0002A0, "Member 'ULoadoutAppearanceUI_C::SkinColors' has a wrong offset!");
static_assert(offsetof(ULoadoutAppearanceUI_C, As_Robber_Controller) == 0x0002F0, "Member 'ULoadoutAppearanceUI_C::As_Robber_Controller' has a wrong offset!");

}

