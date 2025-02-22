#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Aps_SignProp_bar

#include "Basic.hpp"

#include "Aps_SignProp_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Aps_SignProp_bar.Aps_SignProp_bar_C
// 0x0018 (0x0250 - 0x0238)
class AAps_SignProp_bar_C final : public AAps_SignProp_base_C
{
public:
	class UStaticMeshComponent*                   StaticMesh3;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Aps_SignProp_bar_C">();
	}
	static class AAps_SignProp_bar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAps_SignProp_bar_C>();
	}
};
static_assert(alignof(AAps_SignProp_bar_C) == 0x000008, "Wrong alignment on AAps_SignProp_bar_C");
static_assert(sizeof(AAps_SignProp_bar_C) == 0x000250, "Wrong size on AAps_SignProp_bar_C");
static_assert(offsetof(AAps_SignProp_bar_C, StaticMesh3) == 0x000238, "Member 'AAps_SignProp_bar_C::StaticMesh3' has a wrong offset!");
static_assert(offsetof(AAps_SignProp_bar_C, StaticMesh2) == 0x000240, "Member 'AAps_SignProp_bar_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(AAps_SignProp_bar_C, StaticMesh1) == 0x000248, "Member 'AAps_SignProp_bar_C::StaticMesh1' has a wrong offset!");

}

