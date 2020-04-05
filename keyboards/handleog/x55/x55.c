/* Copyright 2019 %YOUR_NAME%
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
#include "x55.h"

const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, C1_1,   C3_2,   C4_2},
    {0, C1_2,   C2_2,   C4_3},
    {0, C1_3,   C2_3,   C3_3},
    {0, C1_4,   C2_4,   C3_4},
    {0, C1_5,   C2_5,   C3_5},
    {0, C1_6,   C2_6,   C3_6},
    {0, C1_7,   C2_7,   C3_7},
    {0, C1_8,   C2_8,   C3_8},

    {0, C9_1,   C8_1,   C7_1},
    {0, C9_2,   C8_2,   C7_2},
    {0, C9_3,   C8_3,   C7_3},
    {0, C9_4,   C8_4,   C7_4},
    {0, C9_5,   C8_5,   C7_5},
    {0, C9_6,   C8_6,   C7_6},
    {0, C9_7,   C8_7,   C6_6},
    {0, C9_8,   C7_7,   C6_7},

    {0, C1_9,   C3_10,   C4_10},
    {0, C1_10,   C2_10,   C4_11},
    {0, C1_11,   C2_11,   C3_11},
    {0, C1_12,   C2_12,   C3_12},
    {0, C1_13,   C2_13,   C3_13},
    {0, C1_14,   C2_14,   C3_14},
    {0, C1_15,   C2_15,   C3_15},
    {0, C1_16,   C2_16,   C3_16},

    {0, C9_9,   C8_9,   C7_9},
    {0, C9_10,  C8_10,  C7_10},
    {0, C9_11,  C8_11,  C7_11},
    {0, C9_12,  C8_12,  C7_12},
    {0, C9_13,  C8_13,  C7_13},
    {0, C9_14,  C8_14,  C7_14},
    {0, C9_15,  C8_15,  C6_14},
    {0, C9_16,  C7_15,  C6_15},
};

// led_config_t g_led_config = { {
//     {   0,   1,   4,   5,  12,  13,  36,  20,  21,  24,  25,  16,  17,  28 },
//     {   2,   6,   7,  14,  15,  37,  38,  22,  23,  26,  27,  18,  19,  30 },
//     {   3,   8,   9,  32,  33,  39,  40,  44,  45,  48,  49,  52,  31, NO_LED },
//     {  59,  10,  11,  34,  35,  41,  42,  46,  47,  50,  53,  54,  56, NO_LED },
//     {  60,  61,  62, NO_LED, NO_LED,  43,  51,  55,  58,  57, NO_LED, NO_LED, NO_LED, NO_LED }
// }, {
// //cs1
//     {   0,   0 }, {  17,   0 }, {   0,  16 }, {   0,  32 },
// //cs2
//     {  34,   0 }, {  51,   0 }, {  17,  16 }, {  34,  16 },
// //cs3
//     {  17,  32 }, {  34,  32 }, {  17,  48 }, {  34,  48 },
// //cs4
//     {  68,   0 }, {  85,   0 }, {  51,  16 }, {  68,  16 },
// //cs5
//     { 187,   0 }, { 204,   0 }, { 187,  16 }, { 204,  16 },
// //cs6
//     { 119,   0 }, { 136,   0 }, { 119,  16 }, { 136,  16 },
// //cs7
//     { 153,   0 }, { 170,   0 }, { 153,  16 }, { 170,  16 },
// //cs8
//     { 221,   0 }, { 221,   0 }, { 221,  32 }, { 221,  16 },
// //cs9
//     {  51,  32 }, {  68,  32 }, {  51,  48 }, {  68,  48 },
// //cs10
//     { 102,   0 }, {  85,  16 }, { 102,  16 }, {  85,  32 },
// //cs11
//     { 102,  32 }, {  85,  48 }, { 102,  48 }, { 102,  64 },
// //cs12
//     { 119,  32 }, { 136,  32 }, { 119,  48 }, { 136,  48 },
// //cs13
//     { 153,  32 }, { 170,  32 }, { 153,  48 }, { 136,  48 },
// //cs14
//     { 187,  32 }, { 170,  48 }, { 187,  48 }, { 153,  48 },
// //cs15
//     { 221,  48 }, { 221,  64 }, { 204,  64 },
// //cs16
//     {   0,  48 }, {   0,  64 }, {  17,  64 }, {  34,  64 }
// }, {
// //cs1
//     1, 4, 1, 1,
// //cs2
//     4, 4, 4, 4,
// //cs3
//     4, 4, 4, 4,
// //cs4
//     4, 4, 4, 4,
// //cs5
//     4, 4, 4, 4,
// //cs6
//     4, 4, 4, 4,
// //cs7
//     4, 4, 4, 4,
// //cs8
//     4, 4, 1, 1,
// //cs9
//     4, 4, 4, 4,
// //cs10
//     4, 4, 4, 4,
// //cs11
//     4, 4, 4, 4,
// //cs12
//     4, 4, 4, 4,
// //cs13
//     4, 4, 4, 1,
// //cs14
//     4, 4, 1, 1,
// //cs15
//     1, 1, 1,
// //cs16
//     1, 1, 1, 1
// } };

void matrix_init_kb(void) {
  // put your keyboard start-up code here
  // runs once when the firmware starts up

  matrix_init_user();
}

void matrix_scan_kb(void) {
  // put your looping keyboard code here
  // runs every cycle (a lot)

  matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
  // put your per-action keyboard code here
  // runs for every action, just before processing by the firmware

  return process_record_user(keycode, record);
}

// void led_matrix_indicators_kb(void) {
//     led_matrix_set_index_value(index, value);
// }

// void suspend_power_down_kb(void)
// {
//     led_matrix_set_suspend_state(true);
// }

// void suspend_wakeup_init_kb(void)
// {
//     led_matrix_set_suspend_state(false);
// }
