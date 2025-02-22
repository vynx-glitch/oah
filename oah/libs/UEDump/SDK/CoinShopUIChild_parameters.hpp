#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CoinShopUIChild

#include "Basic.hpp"

#include "SteamCoreWeb_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SteamCore_structs.hpp"


namespace SDK::Params
{

// Function CoinShopUIChild.CoinShopUIChild_C.ExecuteUbergraph_CoinShopUIChild
// 0x0160 (0x0160 - 0x0000)
struct CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSteamItemDef                          K2Node_MakeStruct_SteamItemDef;                    // 0x0004(0x0004)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemPrice_Price;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemPrice_BasePrice;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemPrice_ReturnValue;                 // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamInventoryStartPurchaseResult     Temp_struct_Variable;                              // 0x0018(0x0028)()
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0044(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamInventoryStartPurchaseResult     K2Node_CustomEvent_Data;                           // 0x0088(0x0028)(ConstParm)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARobberController_C*                    K2Node_DynamicCast_AsRobber_Controller;            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful)> K2Node_CreateDelegate_OutputDelegate;              // 0x00D8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BLoggedOn_ReturnValue;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0100(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A[0x6];                                      // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0120(0x0010)(ConstParm, ReferenceParm)
	struct FSteamItemDef                          K2Node_MakeStruct_SteamItemDef_1;                  // 0x0130(0x0004)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSteamItemDef>                  K2Node_MakeArray_Array_1;                          // 0x0138(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_BLoggedOn_ReturnValue_1;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USteamCoreInventoryAsyncActionStartPurchaseResult* CallFunc_StartPurchaseAsync_ReturnValue;           // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalController_ReturnValue;            // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild) == 0x000008, "Wrong alignment on CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild");
static_assert(sizeof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild) == 0x000160, "Wrong size on CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, EntryPoint) == 0x000000, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::EntryPoint' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, K2Node_MakeStruct_SteamItemDef) == 0x000004, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::K2Node_MakeStruct_SteamItemDef' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, Temp_bool_Variable) == 0x000008, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_GetItemPrice_Price) == 0x00000C, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_GetItemPrice_Price' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_GetItemPrice_BasePrice) == 0x000010, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_GetItemPrice_BasePrice' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_GetItemPrice_ReturnValue) == 0x000014, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_GetItemPrice_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, Temp_struct_Variable) == 0x000018, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, Temp_bool_Has_Been_Initd_Variable) == 0x000040, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, K2Node_Event_MyGeometry) == 0x000044, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, K2Node_Event_InDeltaTime) == 0x00007C, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, Temp_bool_IsClosed_Variable) == 0x000080, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, K2Node_CustomEvent_Data) == 0x000088, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, K2Node_CustomEvent_bWasSuccessful) == 0x0000B0, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_GetPlayerController_ReturnValue) == 0x0000B8, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, K2Node_DynamicCast_AsRobber_Controller) == 0x0000C0, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::K2Node_DynamicCast_AsRobber_Controller' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_PlayAnimation_ReturnValue) == 0x0000D0, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, K2Node_CreateDelegate_OutputDelegate) == 0x0000D8, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_BLoggedOn_ReturnValue) == 0x0000E8, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_BLoggedOn_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x0000EC, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000F0, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000F8, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_Conv_IntToText_ReturnValue) == 0x000100, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_IsValid_ReturnValue) == 0x000118, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, K2Node_Event_IsDesignTime) == 0x000119, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, K2Node_MakeArray_Array) == 0x000120, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, K2Node_MakeStruct_SteamItemDef_1) == 0x000130, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::K2Node_MakeStruct_SteamItemDef_1' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, K2Node_MakeArray_Array_1) == 0x000138, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_BLoggedOn_ReturnValue_1) == 0x000148, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_BLoggedOn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_StartPurchaseAsync_ReturnValue) == 0x000150, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_StartPurchaseAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_IsValid_ReturnValue_1) == 0x000158, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild, CallFunc_IsLocalController_ReturnValue) == 0x000159, "Member 'CoinShopUIChild_C_ExecuteUbergraph_CoinShopUIChild::CallFunc_IsLocalController_ReturnValue' has a wrong offset!");

// Function CoinShopUIChild.CoinShopUIChild_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CoinShopUIChild_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CoinShopUIChild_C_PreConstruct) == 0x000001, "Wrong alignment on CoinShopUIChild_C_PreConstruct");
static_assert(sizeof(CoinShopUIChild_C_PreConstruct) == 0x000001, "Wrong size on CoinShopUIChild_C_PreConstruct");
static_assert(offsetof(CoinShopUIChild_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CoinShopUIChild_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CoinShopUIChild.CoinShopUIChild_C.Tick
// 0x003C (0x003C - 0x0000)
struct CoinShopUIChild_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CoinShopUIChild_C_Tick) == 0x000004, "Wrong alignment on CoinShopUIChild_C_Tick");
static_assert(sizeof(CoinShopUIChild_C_Tick) == 0x00003C, "Wrong size on CoinShopUIChild_C_Tick");
static_assert(offsetof(CoinShopUIChild_C_Tick, MyGeometry) == 0x000000, "Member 'CoinShopUIChild_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_Tick, InDeltaTime) == 0x000038, "Member 'CoinShopUIChild_C_Tick::InDeltaTime' has a wrong offset!");

// Function CoinShopUIChild.CoinShopUIChild_C.OnCallback_71615A47482C10CA30D0A8830244AEBB
// 0x0030 (0x0030 - 0x0000)
struct CoinShopUIChild_C_OnCallback_71615A47482C10CA30D0A8830244AEBB final
{
public:
	struct FSteamInventoryStartPurchaseResult     Data;                                              // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bWasSuccessful;                                    // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CoinShopUIChild_C_OnCallback_71615A47482C10CA30D0A8830244AEBB) == 0x000008, "Wrong alignment on CoinShopUIChild_C_OnCallback_71615A47482C10CA30D0A8830244AEBB");
static_assert(sizeof(CoinShopUIChild_C_OnCallback_71615A47482C10CA30D0A8830244AEBB) == 0x000030, "Wrong size on CoinShopUIChild_C_OnCallback_71615A47482C10CA30D0A8830244AEBB");
static_assert(offsetof(CoinShopUIChild_C_OnCallback_71615A47482C10CA30D0A8830244AEBB, Data) == 0x000000, "Member 'CoinShopUIChild_C_OnCallback_71615A47482C10CA30D0A8830244AEBB::Data' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_OnCallback_71615A47482C10CA30D0A8830244AEBB, bWasSuccessful) == 0x000028, "Member 'CoinShopUIChild_C_OnCallback_71615A47482C10CA30D0A8830244AEBB::bWasSuccessful' has a wrong offset!");

// Function CoinShopUIChild.CoinShopUIChild_C.SetPrice
// 0x0078 (0x0078 - 0x0000)
struct CoinShopUIChild_C_SetPrice final
{
public:
	int32                                         ItemDef;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             Text_object;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0018(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
};
static_assert(alignof(CoinShopUIChild_C_SetPrice) == 0x000008, "Wrong alignment on CoinShopUIChild_C_SetPrice");
static_assert(sizeof(CoinShopUIChild_C_SetPrice) == 0x000078, "Wrong size on CoinShopUIChild_C_SetPrice");
static_assert(offsetof(CoinShopUIChild_C_SetPrice, ItemDef) == 0x000000, "Member 'CoinShopUIChild_C_SetPrice::ItemDef' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_SetPrice, Text_object) == 0x000008, "Member 'CoinShopUIChild_C_SetPrice::Text_object' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_SetPrice, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000010, "Member 'CoinShopUIChild_C_SetPrice::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_SetPrice, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000014, "Member 'CoinShopUIChild_C_SetPrice::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_SetPrice, CallFunc_Conv_FloatToText_ReturnValue) == 0x000018, "Member 'CoinShopUIChild_C_SetPrice::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_SetPrice, CallFunc_Conv_TextToString_ReturnValue) == 0x000030, "Member 'CoinShopUIChild_C_SetPrice::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_SetPrice, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'CoinShopUIChild_C_SetPrice::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_SetPrice, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000050, "Member 'CoinShopUIChild_C_SetPrice::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_SetPrice, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'CoinShopUIChild_C_SetPrice::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CoinShopUIChild.CoinShopUIChild_C.GetBrush_0
// 0x0110 (0x0110 - 0x0000)
struct CoinShopUIChild_C_GetBrush_0 final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0088)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0088(0x0088)()
};
static_assert(alignof(CoinShopUIChild_C_GetBrush_0) == 0x000008, "Wrong alignment on CoinShopUIChild_C_GetBrush_0");
static_assert(sizeof(CoinShopUIChild_C_GetBrush_0) == 0x000110, "Wrong size on CoinShopUIChild_C_GetBrush_0");
static_assert(offsetof(CoinShopUIChild_C_GetBrush_0, ReturnValue) == 0x000000, "Member 'CoinShopUIChild_C_GetBrush_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_GetBrush_0, K2Node_MakeStruct_SlateBrush) == 0x000088, "Member 'CoinShopUIChild_C_GetBrush_0::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function CoinShopUIChild.CoinShopUIChild_C.FindItemprices
// 0x0078 (0x0078 - 0x0000)
struct CoinShopUIChild_C_FindItemprices final
{
public:
	class FString                                 Data;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Key;                                               // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<int32>                                 Price_array_0;                                     // 0x0020(0x0010)(Parm, OutParm)
	TArray<int32>                                 Items;                                             // 0x0030(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 CallFunc_FindJsonNumbers_Values;                   // 0x0040(0x0010)(ReferenceParm)
	ESteamJsonResult                              CallFunc_FindJsonNumbers_Result;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CoinShopUIChild_C_FindItemprices) == 0x000008, "Wrong alignment on CoinShopUIChild_C_FindItemprices");
static_assert(sizeof(CoinShopUIChild_C_FindItemprices) == 0x000078, "Wrong size on CoinShopUIChild_C_FindItemprices");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, Data) == 0x000000, "Member 'CoinShopUIChild_C_FindItemprices::Data' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, Key) == 0x000010, "Member 'CoinShopUIChild_C_FindItemprices::Key' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, Price_array_0) == 0x000020, "Member 'CoinShopUIChild_C_FindItemprices::Price_array_0' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, Items) == 0x000030, "Member 'CoinShopUIChild_C_FindItemprices::Items' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, CallFunc_FindJsonNumbers_Values) == 0x000040, "Member 'CoinShopUIChild_C_FindItemprices::CallFunc_FindJsonNumbers_Values' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, CallFunc_FindJsonNumbers_Result) == 0x000050, "Member 'CoinShopUIChild_C_FindItemprices::CallFunc_FindJsonNumbers_Result' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, Temp_int_Array_Index_Variable) == 0x000054, "Member 'CoinShopUIChild_C_FindItemprices::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'CoinShopUIChild_C_FindItemprices::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, CallFunc_Array_Get_Item) == 0x00005C, "Member 'CoinShopUIChild_C_FindItemprices::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'CoinShopUIChild_C_FindItemprices::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'CoinShopUIChild_C_FindItemprices::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'CoinShopUIChild_C_FindItemprices::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'CoinShopUIChild_C_FindItemprices::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, CallFunc_Array_Add_ReturnValue) == 0x000070, "Member 'CoinShopUIChild_C_FindItemprices::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CoinShopUIChild_C_FindItemprices, CallFunc_Array_Contains_ReturnValue) == 0x000074, "Member 'CoinShopUIChild_C_FindItemprices::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

}

