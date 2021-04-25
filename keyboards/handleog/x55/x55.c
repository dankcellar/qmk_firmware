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

    {0, C1_9,   C3_10,  C4_10},
    {0, C1_10,  C2_10,  C4_11},
    {0, C1_11,  C2_11,  C3_11},
    {0, C1_12,  C2_12,  C3_12},
    {0, C1_13,  C2_13,  C3_13},
    {0, C1_14,  C2_14,  C3_14},
    {0, C1_15,  C2_15,  C3_15},
    {0, C1_16,  C2_16,  C3_16},

    {0, C9_9,   C8_9,   C7_9},
    {0, C9_10,  C8_10,  C7_10},
    {0, C9_11,  C8_11,  C7_11},
    {0, C9_12,  C8_12,  C7_12},
    {0, C9_13,  C8_13,  C7_13},
    {0, C9_14,  C8_14,  C7_14},
    {0, C9_15,  C8_15,  C6_14},
    {0, C9_16,  C7_15,  C6_15},
};

led_config_t g_led_config = { {
    // Key Matrix to LED Index
    { NO_LED, 0,  1,  2,  3,  4,  NO_LED },
    { NO_LED, 5,  6,  7,  8,  9,  NO_LED },
    { NO_LED, 10, 11, 12, 13, 14, NO_LED },
    { NO_LED, 15, 16, 17, 18, 19, NO_LED },
    { NO_LED, 20, 21, 22, 23, 24, NO_LED },
    { 25,     26, 27, 28, 29, 30,     31 }
}, {
    // LED Index to Physical Position
    {38,0},  {76,0},  {114,0},  {152,0},  {190,0},
    {38,12}, {76,12}, {114,12}, {152,12}, {190,12},
    {38,24}, {76,24}, {114,24}, {152,24}, {190,24},
    {38,36}, {76,36}, {114,36}, {152,36}, {190,36},
    {38,48}, {76,48}, {114,48}, {152,48}, {190,48},
    {0,60},  {38,60}, {76,60},  {114,60}, {152,60}, {190,60}, {228,60}
}, {
    // LED Index to Flag
    4, 4, 4, 4, 4,
    4, 4, 4, 4, 4,
    4, 4, 4, 4, 4,
    4, 4, 4, 4, 4,
    4, 4, 4, 4, 4,
    2, 2, 2, 2, 2, 2, 2
} };

// led_config_t g_led_config = { {
//     // Key Matrix to LED Index
//     {  0,  1,  2,  3,  4,  },
//     {  5,  6,  7,  8,  9,  },
//     {  10, 11, 12, 13, 14, },
//     {  15, 16, 17, 18, 19, },
//     {  20, 21, 22, 23, 24, }
// }, {
//     // LED Index to Physical Position
//     {38,0},  {76,0},  {114,0},  {152,0},  {190,0},
//     {38,12}, {76,12}, {114,12}, {152,12}, {190,12},
//     {38,24}, {76,24}, {114,24}, {152,24}, {190,24},
//     {38,36}, {76,36}, {114,36}, {152,36}, {190,36},
//     {38,48}, {76,48}, {114,48}, {152,48}, {190,48}
// }, {
//     // LED Index to Flag
//     4, 4, 4, 4, 4,
//     4, 4, 4, 4, 4,
//     4, 4, 4, 4, 4,
//     4, 4, 4, 4, 4,
//     4, 4, 4, 4, 4
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

// joystick config
joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    [0] = JOYSTICK_AXIS_VIRTUAL
};
