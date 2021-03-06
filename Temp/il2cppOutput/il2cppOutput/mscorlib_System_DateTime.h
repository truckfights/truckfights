﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t65;
// System.Int32[]
struct Int32U5BU5D_t56;
// System.Object
struct Object_t;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_TimeSpan.h"
#include "mscorlib_System_DateTimeKind.h"
#include "mscorlib_System_DateTime.h"

// System.DateTime
struct  DateTime_t748 
{
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t1116  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;
};
struct DateTime_t748_StaticFields{
	// System.DateTime System.DateTime::MaxValue
	DateTime_t748  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t748  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t65* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t65* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t65* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t65* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t65* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t65* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t65* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t56* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t56* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	Object_t * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;
};
