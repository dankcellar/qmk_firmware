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

enum custom_keycodes {
    _BL = 0,
    _FL,
    SHRUG,
    DISFACE,
    FU,
    TFLIP,
    TFLIP2,
    SAD_EYES,
    TPUT,
    HAPPYFACE,
    HEARTFACE,
    CLOUD,
    CHANFACE,
    CMDCLEAR
};

// enum custom_keycodes { PING = SAFE_RANGE, TURNOFF, TURNON, H_11, H_12, H_13, H_14, H_15, H_21, H_22, H_23, H_24, H_25, H_31, H_32, H_33, H_34, H_35, H_41, H_42, H_43, H_44, H_45, H_51, H_52, H_53, H_54, H_55 };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_X55(/* Base */
                        KC_GESC, KC_1, KC_2, KC_3, KC_4,
                        KC_TAB,  KC_Q, KC_W, KC_E, KC_R,
                        KC_CAPS, KC_A, KC_S, KC_D, KC_F,
                        KC_LSFT, KC_Z, KC_X, KC_C, KC_V,
                        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(_FL)),
    [_FL] = LAYOUT_X55(/* Function */
                        CMDCLEAR, KC_NO,  KC_NO,     KC_NO,     RESET,
                        SHRUG,    CLOUD,  HAPPYFACE, HEARTFACE, DISFACE,
                        TFLIP,    TFLIP2, KC_NO,     KC_NO,     KC_NO,
                        KC_NO,    KC_NO,  KC_NO,     KC_NO,     KC_NO,
                        KC_NO,    KC_NO,  KC_NO,     KC_NO,     KC_TRNS)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // if (record->event.pressed) {
    //     switch(keycode) {
    //         case CLOUD:       // (っ◕‿◕)っ
    //             if(record->event.pressed){
    //                 send_unicode_hex_string("0028 3063 25D5 203F 25D5 0029 3063");
    //             }
    //             return false;
    //             break;
    //         case FU:       // t(-_-t)
    //             if(record->event.pressed){
    //                 SEND_STRING("t(-_-t)");
    //             }
    //             return false;
    //             break;
    //         case HAPPYFACE:       // ʘ‿ʘ
    //             if(record->event.pressed){
    //                  send_unicode_hex_string("0298 203F 0298");
    //             }
    //             return false;
    //             break;
    //         case CMDCLEAR:
    //             if (record->event.pressed) {
    //                 register_code(KC_LGUI);
    //                 tap_code(KC_A);
    //                 unregister_code(KC_LGUI);
    //                 tap_code(KC_DEL);
    //             }
    //             return false;
    //             break;
    //         case SHRUG: // ¯\_(ツ)_/¯
    //             if (record->event.pressed) {
    //                 send_unicode_hex_string("00AF 005C 005F 0028 30C4 0029 005F 002F 00AF");
    //             }
    //             return false;
    //             break;
    //         case HEARTFACE:       // ♥‿♥
    //             if(record->event.pressed){
    //                 send_unicode_hex_string("2665 203F 2665");
    //             }
    //             return false;
    //             break;
    //         case DISFACE:       // ಠ_ಠ
    //             if(record->event.pressed){
    //                 send_unicode_hex_string("0CA0 005F 0CA0");
    //             }
    //             return false;
    //             break;
    //         case TFLIP:         // (╯°□°)╯ ︵ ┻━┻
    //             if(record->event.pressed){
    //                 send_unicode_hex_string("0028 256F 00B0 25A1 00B0 0029 256F 0020 FE35 0020 253B 2501 253B");
    //             }
    //             return false;
    //             break;
    //         case TFLIP2:         // ┻━┻︵ \(°□°)/ ︵ ┻━┻
    //             if(record->event.pressed){
    //                 send_unicode_hex_string("253B 2501 253B FE35 0020 005C 0028 00B0 25A1 00B0 0029 002F 0020 FE35 0020 253B 2501 253B");
    //             }
    //             return false;
    //             break;
    //             }
    // }
    return true;
}

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

