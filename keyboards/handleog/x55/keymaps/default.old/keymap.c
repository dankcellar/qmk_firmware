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

#include "rgb_custom.h"

enum keyboard_layers { _BL = 0, _FL, _CL };

enum custom_keycodes { PING = SAFE_RANGE, TURNOFF, TURNON, H_11, H_12, H_13, H_14, H_15, H_21, H_22, H_23, H_24, H_25, H_31, H_32, H_33, H_34, H_35, H_41, H_42, H_43, H_44, H_45, H_51, H_52, H_53, H_54, H_55 };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_x55(/* Base */
                       KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(_FL)),
    [_FL] = LAYOUT_x55(/* Function */
                       KC_GRAVE, XXXXXXX, XXXXXXX, XXXXXXX, RESET, XXXXXXX, XXXXXXX, PING, XXXXXXX, XXXXXXX, XXXXXXX, TURNON, XXXXXXX, TURNOFF, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(_FL), XXXXXXX, TG(_FL), XXXXXXX, _______),
    [_CL] = LAYOUT_x55(/* Function */
                       H_11, H_12, H_13, H_14, H_15, H_21, H_22, H_23, H_24, H_25, H_31, H_32, H_33, H_34, H_35, H_41, H_42, H_43, H_44, H_45, H_51, H_52, H_53, H_54, H_55),
};

uint16_t lastPressed;

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
        rgbled_turnoff();
      } else {
        rgbled_send();
      }
      break;
    case TURNON:
      if (record->event.pressed) {
        rgbled_setall(255, 255, 255);
      } else {
        rgbled_send();
      }
      break;
    /** Custom keycode macros */
    case H_11:
      if (record->event.pressed) {
        if (lastPressed == KC_E) {
          // SEND_STRING(SS_TAP(TO(_FL)));
        } else {
          // MEH_T(KC_A);
          lastPressed = KC_A;
        }
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_12:
      if (record->event.pressed) {
        // MEH_T(KC_B);
        lastPressed = KC_B;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_13:
      if (record->event.pressed) {
        // MEH_T(KC_C);
        lastPressed = KC_C;
      } else {
      }
      break;
    case H_14:
      if (record->event.pressed) {
        // MEH_T(KC_D);
        lastPressed = KC_D;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_15:
      if (record->event.pressed) {
        if (lastPressed == KC_E) {
          // SEND_STRING(SS_TAP(TO(_FL)));
        }
        // MEH_T(KC_E);
        lastPressed = KC_E;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_21:
      if (record->event.pressed) {
        // MEH_T(KC_F);
        lastPressed = KC_F;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_22:
      if (record->event.pressed) {
        // MEH_T(KC_G);
        lastPressed = KC_G;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_23:
      if (record->event.pressed) {
        // MEH_T(KC_H);
        lastPressed = KC_H;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_24:
      if (record->event.pressed) {
        // MEH_T(KC_I);
        lastPressed = KC_I;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_25:
      if (record->event.pressed) {
        // MEH_T(KC_J);
        lastPressed = KC_J;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_31:
      if (record->event.pressed) {
        // MEH_T(KC_K);
        lastPressed = KC_K;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_32:
      if (record->event.pressed) {
        // MEH_T(KC_L);
        lastPressed = KC_L;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_33:
      if (record->event.pressed) {
        // MEH_T(KC_M);
        lastPressed = KC_M;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_34:
      if (record->event.pressed) {
        // MEH_T(KC_N);
        lastPressed = KC_N;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_35:
      if (record->event.pressed) {
        // MEH_T(KC_O);
        lastPressed = KC_O;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_41:
      if (record->event.pressed) {
        // MEH_T(KC_P);
        lastPressed = KC_P;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_42:
      if (record->event.pressed) {
        // MEH_T(KC_Q);
        lastPressed = KC_Q;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_43:
      if (record->event.pressed) {
        // MEH_T(KC_R);
        lastPressed = KC_R;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_44:
      if (record->event.pressed) {
        // MEH_T(KC_S);
        lastPressed = KC_S;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_45:
      if (record->event.pressed) {
        // MEH_T(KC_T);
        lastPressed = KC_T;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_51:
      if (record->event.pressed) {
        // MEH_T(KC_U);
        lastPressed = KC_U;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_52:
      if (record->event.pressed) {
        // MEH_T(KC_V);
        lastPressed = KC_V;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_53:
      if (record->event.pressed) {
        // MEH_T(KC_W);
        lastPressed = KC_W;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_54:
      if (record->event.pressed) {
        // MEH_T(KC_X);
        lastPressed = KC_X;
      } else {
        lastPressed = KC_Z;
      }
      break;
    case H_55:
      if (record->event.pressed) {
        if (lastPressed)  // MEH_T(KC_Y);
          lastPressed = KC_Y;
      } else {
        lastPressed = KC_Z;
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {
  rgbled_init();
  rgbled_setall(255, 255, 255);
  rgbled_send();
}

void matrix_scan_user(void) {}

void led_set_user(uint8_t usb_led) {}
