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
// UnityEngine.Component[]
struct ComponentU5BU5D_t262;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t993;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>
struct IEqualityComparer_1_t2347;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Component,System.Reflection.MethodInfo,System.Collections.DictionaryEntry>
struct Transform_1_t2346;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>
struct  Dictionary_2_t114  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::table
	Int32U5BU5D_t56* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::linkSlots
	LinkU5BU5D_t2154* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::keySlots
	ComponentU5BU5D_t262* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::valueSlots
	MethodInfoU5BU5D_t993* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::serialization_info
	SerializationInfo_t862 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t114_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::<>f__am$cacheB
	Transform_1_t2346 * ___U3CU3Ef__amU24cacheB_15;
};
