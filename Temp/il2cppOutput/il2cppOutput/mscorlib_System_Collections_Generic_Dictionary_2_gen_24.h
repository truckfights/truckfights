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
// ExitGames.Client.Photon.NCommand[]
struct NCommandU5BU5D_t2815;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2211;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,ExitGames.Client.Photon.NCommand,System.Collections.DictionaryEntry>
struct Transform_1_t2816;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>
struct  Dictionary_2_t905  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::table
	Int32U5BU5D_t56* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::linkSlots
	LinkU5BU5D_t2154* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::keySlots
	Int32U5BU5D_t56* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::valueSlots
	NCommandU5BU5D_t2815* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::serialization_info
	SerializationInfo_t862 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t905_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>::<>f__am$cacheB
	Transform_1_t2816 * ___U3CU3Ef__amU24cacheB_15;
};
