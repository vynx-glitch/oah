#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPCInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPCInterface.NPCInterface_C
// 0x0000 (0x0028 - 0x0028)
class INPCInterface_C final : public IInterface
{
public:
	void CantOpenDoor();
	void RagdollPickedUp(bool Picked_up_);
	void PoliceAlerted();
	void SpawnAmmo(const struct FVector& Location, int32 Amount);
	void DestroyOldestPoliceBody();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPCInterface_C">();
	}
	static class INPCInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<INPCInterface_C>();
	}
};
static_assert(alignof(INPCInterface_C) == 0x000008, "Wrong alignment on INPCInterface_C");
static_assert(sizeof(INPCInterface_C) == 0x000028, "Wrong size on INPCInterface_C");

}

