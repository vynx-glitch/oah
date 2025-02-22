#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SteamFriend_parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AdvancedSessions_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SteamFriend_parent.SteamFriend_parent_C
// 0x0020 (0x0280 - 0x0260)
class USteamFriend_parent_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             FriendsScoll;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FBPFriendInfo>                  FriendInvites;                                     // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_SteamFriend_parent(int32 EntryPoint);
	void NewInvite(const struct FBPFriendInfo& Friend);
	void UpdateFriends();
	void Construct();
	void OnSuccess_1633A15441575CAAA115EEA570C4599B(const TArray<struct FBPFriendInfo>& Results);
	void OnFailure_1633A15441575CAAA115EEA570C4599B(const TArray<struct FBPFriendInfo>& Results);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SteamFriend_parent_C">();
	}
	static class USteamFriend_parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamFriend_parent_C>();
	}
};
static_assert(alignof(USteamFriend_parent_C) == 0x000008, "Wrong alignment on USteamFriend_parent_C");
static_assert(sizeof(USteamFriend_parent_C) == 0x000280, "Wrong size on USteamFriend_parent_C");
static_assert(offsetof(USteamFriend_parent_C, UberGraphFrame) == 0x000260, "Member 'USteamFriend_parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USteamFriend_parent_C, FriendsScoll) == 0x000268, "Member 'USteamFriend_parent_C::FriendsScoll' has a wrong offset!");
static_assert(offsetof(USteamFriend_parent_C, FriendInvites) == 0x000270, "Member 'USteamFriend_parent_C::FriendInvites' has a wrong offset!");

}

