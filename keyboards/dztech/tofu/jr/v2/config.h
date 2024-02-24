/* Copyright 2023 DZTECH <moyi4681@live.cn>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define RGBLIGHT_DEFAULT_MODE (RGBLIGHT_EFFECT_RAINBOW_MOOD + 8)

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

<<<<<<<< HEAD:keyboards/fingerpunch/personal/handwired/pteron38/config.h
/* key matrix pins */
#define MATRIX_ROW_PINS { D2, D1, D0, D4 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, C6, D7, E6, B4, B5 }
// #define UNUSED_PINS     { D7, F4, D3 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A {F6 , D3}
#define ENCODERS_PAD_B {F5 , F4}

#define ENCODER_RESOLUTION 2
// Per encoder settings
//#define ENCODER_RESOLUTIONS { 2, 2 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5  /* 5 is default */
========

>>>>>>>> 4e04da397ef643f8fcf4afbe1d19f63aee1fc561:keyboards/dztech/tofu/jr/v2/config.h
