#include QMK_KEYBOARD_H

enum custom_keycodes { PING = SAFE_RANGE, TURNOFF, TURNON, H_11, H_12, H_13, H_14, H_15, H_21, H_22, H_23, H_24, H_25, H_31, H_32, H_33, H_34, H_35, H_41, H_42, H_43, H_44, H_45, H_51, H_52, H_53, H_54, H_55 };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_X55(H_11, H_12, H_13, H_14, H_15, H_21, H_22, H_23, H_24, H_25, H_31, H_32, H_33, H_34, H_35, H_41, H_42, H_43, H_44, H_45, H_51, H_52, H_53, H_54, H_55),

    [2] = LAYOUT_X55(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(1)),

    [1] = LAYOUT_X55(RGB_MOD, RGB_M_P, RGB_TOG, XXXXXXX, XXXXXXX, RGB_HUD, RGB_HUI, XXXXXXX, XXXXXXX, XXXXXXX, RGB_SAD, RGB_SAI, XXXXXXX, XXXXXXX, XXXXXXX, RGB_VAD, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, RESET, PING, XXXXXXX, XXXXXXX, _______)};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
#ifdef CONSOLE_ENABLE
    //uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);

    int16_t f0 = analogReadPin(F0);
    int16_t f1 = analogReadPin(F1);
    int16_t f4 = analogReadPin(F4);
    int16_t f5 = analogReadPin(F5);

    char buffer[50];
    sprintf(buffer, "ADC:%u\n", f0);
    sprintf(buffer, "ADC:%u\n", f1);
    sprintf(buffer, "ADC:%u\n", f4);
    sprintf(buffer, "ADC:%u\n", f5);
#endif

    switch (keycode) {
        case PING:
            if (record->event.pressed) {
                print("ping");
            } else {
                print("pong");
            }
            return false;
        case H_11:
            if (record->event.pressed) {
                print("H_11");
            }
            return false;
        case H_12:
            if (record->event.pressed) {
                print("H_12");
            }
            return false;
        case H_13:
            if (record->event.pressed) {
                print("H_13");
            }
            return false;
        case H_14:
            if (record->event.pressed) {
                print("H_14");
            }
            return false;
        case H_15:
            if (record->event.pressed) {
                print("H_15");
            }
            return false;
        case H_21:
            if (record->event.pressed) {
                print("H_21");
            }
            return false;
        case H_22:
            if (record->event.pressed) {
                print("H_22");
            }
            return false;
        case H_23:
            if (record->event.pressed) {
                print("H_23");
            }
            return false;
        case H_24:
            if (record->event.pressed) {
                print("H_24");
            }
            return false;
        case H_25:
            if (record->event.pressed) {
                print("H_25");
            }
            return false;
        case H_31:
            if (record->event.pressed) {
                print("H_31");
            }
            return false;
        case H_32:
            if (record->event.pressed) {
                print("H_32");
            }
            return false;
        case H_33:
            if (record->event.pressed) {
                print("H_33");
            }
            return false;
        case H_34:
            if (record->event.pressed) {
                print("H_34");
            }
            return false;
        case H_35:
            if (record->event.pressed) {
                print("H_35");
            }
            return false;
        case H_41:
            if (record->event.pressed) {
                print("H_41");
            }
            return false;
        case H_42:
            if (record->event.pressed) {
                print("H_42");
            }
            return false;
        case H_43:
            if (record->event.pressed) {
                print("H_43");
            }
            return false;
        case H_44:
            if (record->event.pressed) {
                print("H_44");
            }
            return false;
        case H_45:
            if (record->event.pressed) {
                print("H_45");
            }
            return false;
        case H_51:
            if (record->event.pressed) {
                print("H_51");
            }
            return false;
        case H_52:
            if (record->event.pressed) {
                print("H_52");
            }
            return false;
        case H_53:
            if (record->event.pressed) {
                print("H_53");
            }
            return false;
        case H_54:
            if (record->event.pressed) {
                print("H_54");
            }
            return false;
        case H_55:
            if (record->event.pressed) {
                print("H_55");
            }
            return false;
        default:
            return true;
    }
}

void matrix_init_user(void) {}

void matrix_scan_user(void) {}
