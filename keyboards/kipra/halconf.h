// Copyright 2023 Danny Nguyen (danny@keeb.io)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Choose the PIO (PI as in Raspberry Pi) serial subsystem
// which is most appropriate for the MCU I used
#define HAL_USE_PIO TRUE

#include_next <halconf.h>
