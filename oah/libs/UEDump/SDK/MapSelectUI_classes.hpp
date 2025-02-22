#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapSelectUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ShopItemCategory_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapSelectUI.MapSelectUI_C
// 0x00E0 (0x0340 - 0x0260)
class UMapSelectUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PreviewMap;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OutAnim;                                           // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_69;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CoinBuyButton;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DifficultiText;                                    // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             EstimatedTake;                                     // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_124;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_579;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LockedBorder;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MapImage;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             MapScrollBox;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MapVignette;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PreviewMapButton;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SaleOverlay;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02D8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x02E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x02E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_4;                                       // 0x02F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_131;                                     // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_0;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 FocusedMapInfo;                                    // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UClass*>                         Maps;                                              // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ARobberController_C*                    As_Robber_Controller;                              // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         Multiplier;                                        // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         InitialMultipluerValue;                            // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Sale_Price;                                        // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MapSelectUI(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__MapSelectUI_PreviewMapButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void RefreshInventory();
	void BndEvt__MapSelectUI_CoinBuyButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void CloseMapSelect();
	void Construct();
	void UpdateMaps();
	void FocusOnMap(class UClass* Map, bool Unlocked_, int32 SalePrice);
	void BndEvt__MapSelectUI_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreviewItem(class UClass* ItemInfo, int32 SalePrice);
	void CancelDrag();
	void DragItemFromCategory(EShopItemCategory Category);
	void ChangeCategory(EShopItemCategory Category);
	void RemoveloadoutCategory();
	void Remove();
	class FText GetText_0();
	struct FSlateBrush GetBrush_0();
	class FText Get_EstimatedTake_Text_0();
	class FText Get_DifficultiText_Text_0();
	class FText GetText_1();
	struct FSlateBrush GetBrush_1();
	ESlateVisibility Get_CoinBuyButton_Visibility_0();
	class FText GetText_2();
	class FText GetText_3();
	struct FSlateColor GetColorAndOpacity_0();
	void SetRandomNumber();
	ESlateVisibility Get_SaleOverlay_Visibility_0();
	class FText GetText_4();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapSelectUI_C">();
	}
	static class UMapSelectUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapSelectUI_C>();
	}
};
static_assert(alignof(UMapSelectUI_C) == 0x000008, "Wrong alignment on UMapSelectUI_C");
static_assert(sizeof(UMapSelectUI_C) == 0x000340, "Wrong size on UMapSelectUI_C");
static_assert(offsetof(UMapSelectUI_C, UberGraphFrame) == 0x000260, "Member 'UMapSelectUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, PreviewMap) == 0x000268, "Member 'UMapSelectUI_C::PreviewMap' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, OutAnim) == 0x000270, "Member 'UMapSelectUI_C::OutAnim' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, Button_69) == 0x000278, "Member 'UMapSelectUI_C::Button_69' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, CoinBuyButton) == 0x000280, "Member 'UMapSelectUI_C::CoinBuyButton' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, DifficultiText) == 0x000288, "Member 'UMapSelectUI_C::DifficultiText' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, EstimatedTake) == 0x000290, "Member 'UMapSelectUI_C::EstimatedTake' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, Image_124) == 0x000298, "Member 'UMapSelectUI_C::Image_124' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, Image_579) == 0x0002A0, "Member 'UMapSelectUI_C::Image_579' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, LockedBorder) == 0x0002A8, "Member 'UMapSelectUI_C::LockedBorder' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, MapImage) == 0x0002B0, "Member 'UMapSelectUI_C::MapImage' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, MapScrollBox) == 0x0002B8, "Member 'UMapSelectUI_C::MapScrollBox' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, MapVignette) == 0x0002C0, "Member 'UMapSelectUI_C::MapVignette' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, PreviewMapButton) == 0x0002C8, "Member 'UMapSelectUI_C::PreviewMapButton' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, SaleOverlay) == 0x0002D0, "Member 'UMapSelectUI_C::SaleOverlay' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, TextBlock) == 0x0002D8, "Member 'UMapSelectUI_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, TextBlock_0) == 0x0002E0, "Member 'UMapSelectUI_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, TextBlock_1) == 0x0002E8, "Member 'UMapSelectUI_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, TextBlock_4) == 0x0002F0, "Member 'UMapSelectUI_C::TextBlock_4' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, TextBlock_131) == 0x0002F8, "Member 'UMapSelectUI_C::TextBlock_131' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, WrapBox_0) == 0x000300, "Member 'UMapSelectUI_C::WrapBox_0' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, FocusedMapInfo) == 0x000308, "Member 'UMapSelectUI_C::FocusedMapInfo' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, Maps) == 0x000310, "Member 'UMapSelectUI_C::Maps' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, As_Robber_Controller) == 0x000320, "Member 'UMapSelectUI_C::As_Robber_Controller' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, Multiplier) == 0x000328, "Member 'UMapSelectUI_C::Multiplier' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, InitialMultipluerValue) == 0x000330, "Member 'UMapSelectUI_C::InitialMultipluerValue' has a wrong offset!");
static_assert(offsetof(UMapSelectUI_C, Sale_Price) == 0x000338, "Member 'UMapSelectUI_C::Sale_Price' has a wrong offset!");

}

