#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PoliceHelmet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PoliceHelmet.PoliceHelmet_C
// 0x0038 (0x0258 - 0x0220)
class APoliceHelmet_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDamageComponent_C*                     DamageComponent;                                   // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Health;                                            // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARobberGameState_C*                     As_Robber_Game_State;                              // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             HelmetDestroyed;                                   // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void HelmetDestroyed__DelegateSignature();
	void ExecuteUbergraph_PoliceHelmet(int32 EntryPoint);
	void LooseHealth(int32 Amount, class AActor* Player);
	void BndEvt__PoliceHelmet_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature(int32 Amount, class FName Bone, const struct FVector& HitLocation, const struct FVector& StartLocation, class AActor* Instigator_0);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PoliceHelmet_C">();
	}
	static class APoliceHelmet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APoliceHelmet_C>();
	}
};
static_assert(alignof(APoliceHelmet_C) == 0x000008, "Wrong alignment on APoliceHelmet_C");
static_assert(sizeof(APoliceHelmet_C) == 0x000258, "Wrong size on APoliceHelmet_C");
static_assert(offsetof(APoliceHelmet_C, UberGraphFrame) == 0x000220, "Member 'APoliceHelmet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APoliceHelmet_C, DamageComponent) == 0x000228, "Member 'APoliceHelmet_C::DamageComponent' has a wrong offset!");
static_assert(offsetof(APoliceHelmet_C, Sphere) == 0x000230, "Member 'APoliceHelmet_C::Sphere' has a wrong offset!");
static_assert(offsetof(APoliceHelmet_C, Health) == 0x000238, "Member 'APoliceHelmet_C::Health' has a wrong offset!");
static_assert(offsetof(APoliceHelmet_C, As_Robber_Game_State) == 0x000240, "Member 'APoliceHelmet_C::As_Robber_Game_State' has a wrong offset!");
static_assert(offsetof(APoliceHelmet_C, HelmetDestroyed) == 0x000248, "Member 'APoliceHelmet_C::HelmetDestroyed' has a wrong offset!");

}

