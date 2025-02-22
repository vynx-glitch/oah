#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_GuardDodger_Tier1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Skill_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_GuardDodger_Tier1.Skill_GuardDodger_Tier1_C
// 0x0010 (0x00E0 - 0x00D0)
class USkill_GuardDodger_Tier1_C : public USkill_base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Skill_GuardDodger_Tier1_C;          // 0x00D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Added_Guard_Spot_Time_;                            // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Skill_GuardDodger_Tier1(int32 EntryPoint);
	void SetupSkill();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_GuardDodger_Tier1_C">();
	}
	static class USkill_GuardDodger_Tier1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_GuardDodger_Tier1_C>();
	}
};
static_assert(alignof(USkill_GuardDodger_Tier1_C) == 0x000008, "Wrong alignment on USkill_GuardDodger_Tier1_C");
static_assert(sizeof(USkill_GuardDodger_Tier1_C) == 0x0000E0, "Wrong size on USkill_GuardDodger_Tier1_C");
static_assert(offsetof(USkill_GuardDodger_Tier1_C, UberGraphFrame_Skill_GuardDodger_Tier1_C) == 0x0000D0, "Member 'USkill_GuardDodger_Tier1_C::UberGraphFrame_Skill_GuardDodger_Tier1_C' has a wrong offset!");
static_assert(offsetof(USkill_GuardDodger_Tier1_C, Added_Guard_Spot_Time_) == 0x0000D8, "Member 'USkill_GuardDodger_Tier1_C::Added_Guard_Spot_Time_' has a wrong offset!");

}

