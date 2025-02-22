#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShopItemPreview

#include "Basic.hpp"

#include "ShopItemPreview_classes.hpp"
#include "ShopItemPreview_parameters.hpp"


namespace SDK
{

// Function ShopItemPreview.ShopItemPreview_C.ExecuteUbergraph_ShopItemPreview
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShopItemPreview_C::ExecuteUbergraph_ShopItemPreview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopItemPreview_C", "ExecuteUbergraph_ShopItemPreview");

	Params::ShopItemPreview_C_ExecuteUbergraph_ShopItemPreview Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopItemPreview.ShopItemPreview_C.LoadController
// (BlueprintCallable, BlueprintEvent)

void AShopItemPreview_C::LoadController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopItemPreview_C", "LoadController");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopItemPreview.ShopItemPreview_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShopItemPreview_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopItemPreview_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopItemPreview.ShopItemPreview_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)

void AShopItemPreview_C::Remove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopItemPreview_C", "Remove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopItemPreview.ShopItemPreview_C.UpdateItemScale
// (BlueprintCallable, BlueprintEvent)

void AShopItemPreview_C::UpdateItemScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopItemPreview_C", "UpdateItemScale");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopItemPreview.ShopItemPreview_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShopItemPreview_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopItemPreview_C", "ReceiveTick");

	Params::ShopItemPreview_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopItemPreview.ShopItemPreview_C.PreviewItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SalePrice                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShopItemPreview_C::PreviewItem(class UClass* ItemInfo, int32 SalePrice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopItemPreview_C", "PreviewItem");

	Params::ShopItemPreview_C_PreviewItem Parms{};

	Parms.ItemInfo = ItemInfo;
	Parms.SalePrice = SalePrice;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopItemPreview.ShopItemPreview_C.CancelDrag
// (Public, BlueprintCallable, BlueprintEvent)

void AShopItemPreview_C::CancelDrag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopItemPreview_C", "CancelDrag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopItemPreview.ShopItemPreview_C.DragItemFromCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EShopItemCategory                       Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShopItemPreview_C::DragItemFromCategory(EShopItemCategory Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopItemPreview_C", "DragItemFromCategory");

	Params::ShopItemPreview_C_DragItemFromCategory Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopItemPreview.ShopItemPreview_C.ChangeCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EShopItemCategory                       Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShopItemPreview_C::ChangeCategory(EShopItemCategory Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopItemPreview_C", "ChangeCategory");

	Params::ShopItemPreview_C_ChangeCategory Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopItemPreview.ShopItemPreview_C.RemoveloadoutCategory
// (Public, BlueprintCallable, BlueprintEvent)

void AShopItemPreview_C::RemoveloadoutCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopItemPreview_C", "RemoveloadoutCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopItemPreview.ShopItemPreview_C.RefreshInventory
// (Public, BlueprintCallable, BlueprintEvent)

void AShopItemPreview_C::RefreshInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopItemPreview_C", "RefreshInventory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopItemPreview.ShopItemPreview_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShopItemPreview_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopItemPreview_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

