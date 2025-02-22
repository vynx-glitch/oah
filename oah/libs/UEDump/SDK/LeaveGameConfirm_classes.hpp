#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeaveGameConfirm

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LeaveGameConfirm.LeaveGameConfirm_C
// 0x0028 (0x0288 - 0x0260)
class ULeaveGameConfirm_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_100;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Message;                                           // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LeaveGameConfirm(int32 EntryPoint);
	void BndEvt__LeaveGameConfirm_Button_100_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LeaveGameConfirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LeaveGameConfirm_C">();
	}
	static class ULeaveGameConfirm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeaveGameConfirm_C>();
	}
};
static_assert(alignof(ULeaveGameConfirm_C) == 0x000008, "Wrong alignment on ULeaveGameConfirm_C");
static_assert(sizeof(ULeaveGameConfirm_C) == 0x000288, "Wrong size on ULeaveGameConfirm_C");
static_assert(offsetof(ULeaveGameConfirm_C, UberGraphFrame) == 0x000260, "Member 'ULeaveGameConfirm_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULeaveGameConfirm_C, Button) == 0x000268, "Member 'ULeaveGameConfirm_C::Button' has a wrong offset!");
static_assert(offsetof(ULeaveGameConfirm_C, Button_100) == 0x000270, "Member 'ULeaveGameConfirm_C::Button_100' has a wrong offset!");
static_assert(offsetof(ULeaveGameConfirm_C, Message) == 0x000278, "Member 'ULeaveGameConfirm_C::Message' has a wrong offset!");

}

