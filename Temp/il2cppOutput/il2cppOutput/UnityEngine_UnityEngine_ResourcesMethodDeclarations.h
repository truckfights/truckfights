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

// UnityEngine.Object[]
struct ObjectU5BU5D_t243;
// System.Type
struct Type_t;
// UnityEngine.Object
struct Object_t238;
struct Object_t238_marshaled;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object[] UnityEngine.Resources::FindObjectsOfTypeAll(System.Type)
extern "C" ObjectU5BU5D_t243* Resources_FindObjectsOfTypeAll_m1252 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t238 * Resources_Load_m1000 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
