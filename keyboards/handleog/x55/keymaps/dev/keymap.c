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
#include QMK_KEYBOARD_H

enum keyboard_layers { _BL = 0, _FL, _CL };

// enum custom_keycodes { PING = SAFE_RANGE, TURNOFF, TURNON, H_11, H_12, H_13, H_14, H_15, H_21, H_22, H_23, H_24, H_25, H_31, H_32, H_33, H_34, H_35, H_41, H_42, H_43, H_44, H_45, H_51, H_52, H_53, H_54, H_55 };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_x55(/* Base */
                       KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(_FL)),
    [_FL] = LAYOUT_x55(/* Function */
                       KC_GRAVE, XXXXXXX, XXXXXXX, XXXXXXX, RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case PING:
      if (record->event.pressed) {
        SEND_STRING("ping");
      } else {
        SEND_STRING("pong");
      }
      break;
    case TURNOFF:
      if (record->event.pressed) {
      } else {
      }
      break;
    case TURNON:
      if (record->event.pressed) {
      } else {
      }
      break;
  return true;
}

void matrix_init_user(void) {
  setPinOutput(D5);
  writePinHigh(D5);
}

void matrix_scan_user(void) {}

