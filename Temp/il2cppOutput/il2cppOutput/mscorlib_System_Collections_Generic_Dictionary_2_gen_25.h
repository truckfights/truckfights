﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t56;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2154;
// System.Byte[]
struct ByteU5BU5D_t21;
// ExitGames.Client.Photon.EnetChannel[]
struct EnetChannelU5BU5D_t925;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t2175;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,System.Collections.DictionaryEntry>
struct Transform_1_t2830;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>
struct  Dictionary_2_t923  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>::table
	Int32U5BU5D_t56* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>::linkSlots
	LinkU5BU5D_t2154* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>::keySlots
	ByteU5BU5D_t21* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>::valueSlots
	EnetChannelU5BU5D_t925* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>::serialization_info
	SerializationInfo_t862 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t923_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>::<>f__am$cacheB
	Transform_1_t2830 * ___U3CU3Ef__amU24cacheB_15;
};
