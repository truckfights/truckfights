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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t103;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t3028;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3003;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3029;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2296;
// System.Int32[]
struct Int32U5BU5D_t56;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2299;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2303;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m954_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1__ctor_m954(__this, method) (( void (*) (List_1_t103 *, const MethodInfo*))List_1__ctor_m954_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15004_gshared (List_1_t103 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15004(__this, ___collection, method) (( void (*) (List_1_t103 *, Object_t*, const MethodInfo*))List_1__ctor_m15004_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m15005_gshared (List_1_t103 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m15005(__this, ___capacity, method) (( void (*) (List_1_t103 *, int32_t, const MethodInfo*))List_1__ctor_m15005_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m15006_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15006(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15006_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15007_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15007(__this, method) (( Object_t* (*) (List_1_t103 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15007_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15008_gshared (List_1_t103 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15008(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t103 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15008_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15009_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15009(__this, method) (( Object_t * (*) (List_1_t103 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15009_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15010_gshared (List_1_t103 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15010(__this, ___item, method) (( int32_t (*) (List_1_t103 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15010_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15011_gshared (List_1_t103 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15011(__this, ___item, method) (( bool (*) (List_1_t103 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15011_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15012_gshared (List_1_t103 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15012(__this, ___item, method) (( int32_t (*) (List_1_t103 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15012_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15013_gshared (List_1_t103 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15013(__this, ___index, ___item, method) (( void (*) (List_1_t103 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15013_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15014_gshared (List_1_t103 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15014(__this, ___item, method) (( void (*) (List_1_t103 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15014_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15015_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15015(__this, method) (( bool (*) (List_1_t103 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15015_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15016_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15016(__this, method) (( bool (*) (List_1_t103 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15016_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15017_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15017(__this, method) (( Object_t * (*) (List_1_t103 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15017_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15018_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15018(__this, method) (( bool (*) (List_1_t103 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15018_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15019_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15019(__this, method) (( bool (*) (List_1_t103 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15019_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15020_gshared (List_1_t103 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15020(__this, ___index, method) (( Object_t * (*) (List_1_t103 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15020_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15021_gshared (List_1_t103 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15021(__this, ___index, ___value, method) (( void (*) (List_1_t103 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15021_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m15022_gshared (List_1_t103 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m15022(__this, ___item, method) (( void (*) (List_1_t103 *, int32_t, const MethodInfo*))List_1_Add_m15022_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15023_gshared (List_1_t103 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15023(__this, ___newCount, method) (( void (*) (List_1_t103 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15023_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15024_gshared (List_1_t103 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15024(__this, ___collection, method) (( void (*) (List_1_t103 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15024_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15025_gshared (List_1_t103 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15025(__this, ___enumerable, method) (( void (*) (List_1_t103 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15025_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3354_gshared (List_1_t103 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3354(__this, ___collection, method) (( void (*) (List_1_t103 *, Object_t*, const MethodInfo*))List_1_AddRange_m3354_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2296 * List_1_AsReadOnly_m15026_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15026(__this, method) (( ReadOnlyCollection_1_t2296 * (*) (List_1_t103 *, const MethodInfo*))List_1_AsReadOnly_m15026_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m15027_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_Clear_m15027(__this, method) (( void (*) (List_1_t103 *, const MethodInfo*))List_1_Clear_m15027_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m15028_gshared (List_1_t103 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m15028(__this, ___item, method) (( bool (*) (List_1_t103 *, int32_t, const MethodInfo*))List_1_Contains_m15028_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15029_gshared (List_1_t103 * __this, Int32U5BU5D_t56* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15029(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t103 *, Int32U5BU5D_t56*, int32_t, const MethodInfo*))List_1_CopyTo_m15029_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m15030_gshared (List_1_t103 * __this, Predicate_1_t2299 * ___match, const MethodInfo* method);
#define List_1_Find_m15030(__this, ___match, method) (( int32_t (*) (List_1_t103 *, Predicate_1_t2299 *, const MethodInfo*))List_1_Find_m15030_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15031_gshared (Object_t * __this /* static, unused */, Predicate_1_t2299 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15031(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2299 *, const MethodInfo*))List_1_CheckMatch_m15031_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m15032_gshared (List_1_t103 * __this, Predicate_1_t2299 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m15032(__this, ___match, method) (( int32_t (*) (List_1_t103 *, Predicate_1_t2299 *, const MethodInfo*))List_1_FindIndex_m15032_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15033_gshared (List_1_t103 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2299 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15033(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t103 *, int32_t, int32_t, Predicate_1_t2299 *, const MethodInfo*))List_1_GetIndex_m15033_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2295  List_1_GetEnumerator_m15034_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15034(__this, method) (( Enumerator_t2295  (*) (List_1_t103 *, const MethodInfo*))List_1_GetEnumerator_m15034_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15035_gshared (List_1_t103 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m15035(__this, ___item, method) (( int32_t (*) (List_1_t103 *, int32_t, const MethodInfo*))List_1_IndexOf_m15035_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15036_gshared (List_1_t103 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15036(__this, ___start, ___delta, method) (( void (*) (List_1_t103 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15036_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15037_gshared (List_1_t103 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15037(__this, ___index, method) (( void (*) (List_1_t103 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15037_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15038_gshared (List_1_t103 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m15038(__this, ___index, ___item, method) (( void (*) (List_1_t103 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m15038_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15039_gshared (List_1_t103 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15039(__this, ___collection, method) (( void (*) (List_1_t103 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15039_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m15040_gshared (List_1_t103 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m15040(__this, ___item, method) (( bool (*) (List_1_t103 *, int32_t, const MethodInfo*))List_1_Remove_m15040_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15041_gshared (List_1_t103 * __this, Predicate_1_t2299 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15041(__this, ___match, method) (( int32_t (*) (List_1_t103 *, Predicate_1_t2299 *, const MethodInfo*))List_1_RemoveAll_m15041_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15042_gshared (List_1_t103 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15042(__this, ___index, method) (( void (*) (List_1_t103 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15042_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m15043_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_Reverse_m15043(__this, method) (( void (*) (List_1_t103 *, const MethodInfo*))List_1_Reverse_m15043_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m15044_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_Sort_m15044(__this, method) (( void (*) (List_1_t103 *, const MethodInfo*))List_1_Sort_m15044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15045_gshared (List_1_t103 * __this, Comparison_1_t2303 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15045(__this, ___comparison, method) (( void (*) (List_1_t103 *, Comparison_1_t2303 *, const MethodInfo*))List_1_Sort_m15045_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t56* List_1_ToArray_m987_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_ToArray_m987(__this, method) (( Int32U5BU5D_t56* (*) (List_1_t103 *, const MethodInfo*))List_1_ToArray_m987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m15046_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15046(__this, method) (( void (*) (List_1_t103 *, const MethodInfo*))List_1_TrimExcess_m15046_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15047_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15047(__this, method) (( int32_t (*) (List_1_t103 *, const MethodInfo*))List_1_get_Capacity_m15047_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15048_gshared (List_1_t103 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15048(__this, ___value, method) (( void (*) (List_1_t103 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15048_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m15049_gshared (List_1_t103 * __this, const MethodInfo* method);
#define List_1_get_Count_m15049(__this, method) (( int32_t (*) (List_1_t103 *, const MethodInfo*))List_1_get_Count_m15049_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m15050_gshared (List_1_t103 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15050(__this, ___index, method) (( int32_t (*) (List_1_t103 *, int32_t, const MethodInfo*))List_1_get_Item_m15050_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15051_gshared (List_1_t103 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m15051(__this, ___index, ___value, method) (( void (*) (List_1_t103 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m15051_gshared)(__this, ___index, ___value, method)
