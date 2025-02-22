#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Jewelry_Rings

#include "Basic.hpp"

#include "Money_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Jewelry_Rings.Jewelry_Rings_C
// 0x0000 (0x0268 - 0x0268)
class AJewelry_Rings_C final : public AMoney_base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Jewelry_Rings_C">();
	}
	static class AJewelry_Rings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AJewelry_Rings_C>();
	}
};
static_assert(alignof(AJewelry_Rings_C) == 0x000008, "Wrong alignment on AJewelry_Rings_C");
static_assert(sizeof(AJewelry_Rings_C) == 0x000268, "Wrong size on AJewelry_Rings_C");

}

