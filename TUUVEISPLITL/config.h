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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    %MANUFACTURER%
#define PRODUCT         TuuVeiSplitleft

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 9

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { B6, B2, B3, B1, F7, F6 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, D2, C6, D4 }

#define DIODE_DIRECTION ROW2COL
#define USE_I2C
#define MATRIX_ROW_PINS_RIGHT { B6, B2, B3, B1, F7, F5 }
#define MATRIX_COL_PINS_RIGHT { B5, B4, F6, D7, C6, D4, D2, D3, F4, E6 }
// generated by KBFirmware JSON to QMK Parser
// https://noroadsleft.github.io/kbf_qmk_converter/
#define DEBOUNCE 5
#define F_SCL 100000L
#define DYNAMIC_KEYMAP_LAYER_COUNT 3