/* Copyright 2021 REPLACE_WITH_YOUR_NAME
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

#define LAYOUT( \
    K00,      K01, K02, K03, K04,                   l00, l01, l02, l03,   l04, l05, l06, l07,  l08, l09,                \
    K10, K11, K12, K13, K14, K05, K06,                l10, l11, l12, l13, l14, l15, l16,       l18, l19,                \
    K20,   K21, K22, K23, K24, K15, K16,             l20, l21, l22, l23, l24, l25, l26,  l17,   l27, l28,               \
    K30,    K31, K32, K33, K34, K25, K26,             l30, l31, l32, l33, l34, l35, l36,                                \
    K40,  K41, K42, K43, K44, K35, K36,                l40, l41, l42, l43, l44, l45,           l46,                     \
    K50,  K51,  K52,  K53  ,                              l50,          l51,  l52,   l53,    l54, l55, l56                \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16   }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26   }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   K36   }, \
    { K40,   K41,   K42,   K43,   K44,   KC_NO, KC_NO }, \
    { K50,   K51,   K52,   K53,   KC_NO, KC_NO, KC_NO }, \
 { l00,   l01,   l02,   l03,   l04,   l05,   l06,   l07,   l08,   l09   }, \
    { l10,   l11,   l12,   l13,   l14,   l15,   l16,   l17,   l18,   l19   }, \
    { l20,   l21,   l22,   l23,   l24,   l25,   l26,   l27,   l28,   KC_NO }, \
    { l30,   l31,   l32,   l33,   l34,   l35,   l36,   KC_NO, KC_NO, KC_NO }, \
    { l40,   l41,   l42,   l43,   l44,   l45,   l46,   KC_NO, KC_NO, KC_NO }, \
    { l50,   l51,   l52,   l53,   l54,   l55,   l56,   KC_NO, KC_NO, KC_NO } \
}

// generated by KBFirmware JSON to QMK Parser
// https://noroadsleft.github.io/kbf_qmk_converter/
