/* Copyright 2023 ArthurCyy <https://github.com/ArthurCyy>
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

#include "quantum.h"

<<<<<<<< HEAD:keyboards/fingerpunch/personal/handwired/pteron38/pteron38.h
#define LAYOUT_pteron38( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
         K32, K33, K34, K35, K36, K37, K38, K39  \
) { \
    { K01,   K02, K03, K04, K05, K06, K07, K08, K09, K0A }, \
    { K11,   K12, K13, K14, K15, K16, K17, K18, K19, K1A }, \
    { K21,   K22, K23, K24, K25, K26, K27, K28, K29, K2A }, \
    { KC_NO, K32, K33, K34, K35, K36, K37, K38, K39, KC_NO }  \
}
========
#define XXX KC_NO

enum custom_keycodes {
    DEV_BT1 = QK_KB,
    DEV_BT2,
    DEV_BT3,
    DEV_RF24,
    ALT_TAB,
    RGB_RST,
};
>>>>>>>> 4e04da397ef643f8fcf4afbe1d19f63aee1fc561:keyboards/miiiw/blackio83/blackio83.h
