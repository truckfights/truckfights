﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2426;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2428;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m16743_gshared (ObjectPool_1_t2426 * __this, UnityAction_1_t2428 * ___actionOnGet, UnityAction_1_t2428 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m16743(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2426 *, UnityAction_1_t2428 *, UnityAction_1_t2428 *, const MethodInfo*))ObjectPool_1__ctor_m16743_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m16745_gshared (ObjectPool_1_t2426 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m16745(__this, method) (( int32_t (*) (ObjectPool_1_t2426 *, const MethodInfo*))ObjectPool_1_get_countAll_m16745_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m16747_gshared (ObjectPool_1_t2426 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m16747(__this, ___value, method) (( void (*) (ObjectPool_1_t2426 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m16747_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m16749_gshared (ObjectPool_1_t2426 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m16749(__this, method) (( int32_t (*) (ObjectPool_1_t2426 *, const MethodInfo*))ObjectPool_1_get_countActive_m16749_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m16751_gshared (ObjectPool_1_t2426 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m16751(__this, method) (( int32_t (*) (ObjectPool_1_t2426 *, const MethodInfo*))ObjectPool_1_get_countInactive_m16751_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m16753_gshared (ObjectPool_1_t2426 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m16753(__this, method) (( Object_t * (*) (ObjectPool_1_t2426 *, const MethodInfo*))ObjectPool_1_Get_m16753_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m16755_gshared (ObjectPool_1_t2426 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m16755(__this, ___element, method) (( void (*) (ObjectPool_1_t2426 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m16755_gshared)(__this, ___element, method)
