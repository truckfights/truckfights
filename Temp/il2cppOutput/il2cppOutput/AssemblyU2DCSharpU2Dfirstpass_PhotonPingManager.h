﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object.h"

// PhotonPingManager
struct  PhotonPingManager_t89  : public Object_t
{
	// System.Boolean PhotonPingManager::UseNative
	bool ___UseNative_0;
	// System.Int32 PhotonPingManager::PingsRunning
	int32_t ___PingsRunning_4;
};
struct PhotonPingManager_t89_StaticFields{
	// System.Int32 PhotonPingManager::Attempts
	int32_t ___Attempts_1;
	// System.Boolean PhotonPingManager::IgnoreInitialAttempt
	bool ___IgnoreInitialAttempt_2;
	// System.Int32 PhotonPingManager::MaxMilliseconsPerPing
	int32_t ___MaxMilliseconsPerPing_3;
};
