﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>
struct Dictionary_2_t905;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t906;

#include "mscorlib_System_Object.h"

// ExitGames.Client.Photon.EnetChannel
struct  EnetChannel_t904  : public Object_t
{
	// System.Byte ExitGames.Client.Photon.EnetChannel::ChannelNumber
	uint8_t ___ChannelNumber_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetChannel::incomingReliableCommandsList
	Dictionary_2_t905 * ___incomingReliableCommandsList_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetChannel::incomingUnreliableCommandsList
	Dictionary_2_t905 * ___incomingUnreliableCommandsList_2;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetChannel::outgoingReliableCommandsList
	Queue_1_t906 * ___outgoingReliableCommandsList_3;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetChannel::outgoingUnreliableCommandsList
	Queue_1_t906 * ___outgoingUnreliableCommandsList_4;
	// System.Int32 ExitGames.Client.Photon.EnetChannel::incomingReliableSequenceNumber
	int32_t ___incomingReliableSequenceNumber_5;
	// System.Int32 ExitGames.Client.Photon.EnetChannel::incomingUnreliableSequenceNumber
	int32_t ___incomingUnreliableSequenceNumber_6;
	// System.Int32 ExitGames.Client.Photon.EnetChannel::outgoingReliableSequenceNumber
	int32_t ___outgoingReliableSequenceNumber_7;
	// System.Int32 ExitGames.Client.Photon.EnetChannel::outgoingUnreliableSequenceNumber
	int32_t ___outgoingUnreliableSequenceNumber_8;
};