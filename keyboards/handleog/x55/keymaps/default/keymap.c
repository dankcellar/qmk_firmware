#include QMK_KEYBOARD_H

enum custom_keycodes {
    CMDCLEAR = SAFE_RANGE,
    PING,
    TURNOFF,
    TURNON,
    H_11,
    H_12,
    H_13,
    H_14,
    H_15,
    H_21,
    H_22,
    H_23,
    H_24,
    H_25,
    H_31,
    H_32,
    H_33,
    H_34,
    H_35,
    H_41,
    H_42,
    H_43,
    H_44,
    H_45,
    H_51,
    H_52,
    H_53,
    H_54,
    H_55

};

// enum custom_keycodes { PING = SAFE_RANGE, TURNOFF, TURNON, H_11, H_12, H_13, H_14, H_15, H_21, H_22, H_23, H_24, H_25, H_31, H_32, H_33, H_34, H_35, H_41, H_42, H_43, H_44, H_45, H_51, H_52, H_53, H_54, H_55 };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_X55(/* Base */
        KC_GESC,    KC_1,       KC_2,       KC_3,   KC_4,
        KC_TAB,     KC_Q,       KC_W,       KC_E,   KC_R,
        KC_CAPS,    KC_A,       KC_S,       KC_D,   KC_F,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,   KC_V,
        KC_LCTL,    KC_LGUI,    KC_LALT,    KC_SPC, MO(1)),

    [1] = LAYOUT_X55(/* Function */
        CMDCLEAR,   KC_NO,  RGB_TOG,    KC_NO,  RESET,
        KC_NO,      KC_NO,  KC_NO,      KC_NO,  KC_NO,
        KC_NO,      KC_NO,  PING,      KC_NO,  KC_NO,
        KC_NO,      KC_NO,  KC_NO,      KC_NO,  KC_NO,
        KC_NO,      KC_NO,  KC_NO,      KC_NO,  KC_TRANSPARENT),

    [2] = LAYOUT_X55(/* Custom */
        H_11, H_12, H_13, H_14, H_15,
        H_21, H_22, H_23, H_24, H_25,
        H_31, H_32, H_33, H_34, H_35,
        H_41, H_42, H_43, H_44, H_45,
        H_51, H_52, H_53, H_54, H_55)
};

bool process_record_user(uint16_t keycode, keyrecord_t * record) {
  switch (keycode) {
  case CMDCLEAR:
    if (record -> event.pressed) {
      register_code(KC_LGUI);
      tap_code(KC_A);
      unregister_code(KC_LGUI);
      tap_code(KC_DEL);
    }
    break;
  case PING:
    if (record -> event.pressed) {
      SEND_STRING("ping");
    } else {
      SEND_STRING("pong");
    }
    break;
    /** Custom keycode macros */
    // case H_11:
    //   if (record -> event.pressed) {
    //     if (lastPressed == KC_E) {
    //       // SEND_STRING(SS_TAP(TO(_FL)));
    //     } else {
    //       // MEH_T(KC_A);
    //       lastPressed = KC_A;
    //     }
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_12:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_B);
    //     lastPressed = KC_B;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_13:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_C);
    //     lastPressed = KC_C;
    //   } else {}
    //   break;
    // case H_14:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_D);
    //     lastPressed = KC_D;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_15:
    //   if (record -> event.pressed) {
    //     if (lastPressed == KC_E) {
    //       // SEND_STRING(SS_TAP(TO(_FL)));
    //     }
    //     // MEH_T(KC_E);
    //     lastPressed = KC_E;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_21:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_F);
    //     lastPressed = KC_F;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_22:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_G);
    //     lastPressed = KC_G;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_23:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_H);
    //     lastPressed = KC_H;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_24:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_I);
    //     lastPressed = KC_I;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_25:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_J);
    //     lastPressed = KC_J;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_31:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_K);
    //     lastPressed = KC_K;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_32:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_L);
    //     lastPressed = KC_L;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_33:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_M);
    //     lastPressed = KC_M;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_34:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_N);
    //     lastPressed = KC_N;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_35:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_O);
    //     lastPressed = KC_O;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_41:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_P);
    //     lastPressed = KC_P;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_42:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_Q);
    //     lastPressed = KC_Q;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_43:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_R);
    //     lastPressed = KC_R;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_44:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_S);
    //     lastPressed = KC_S;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_45:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_T);
    //     lastPressed = KC_T;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_51:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_U);
    //     lastPressed = KC_U;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_52:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_V);
    //     lastPressed = KC_V;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_53:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_W);
    //     lastPressed = KC_W;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_54:
    //   if (record -> event.pressed) {
    //     // MEH_T(KC_X);
    //     lastPressed = KC_X;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
    // case H_55:
    //   if (record -> event.pressed) {
    //     if (lastPressed) // MEH_T(KC_Y);
    //       lastPressed = KC_Y;
    //   } else {
    //     lastPressed = KC_Z;
    //   }
    //   break;
  }
  return true;
}

void matrix_init_user(void) {
    rgb_matrix_enable()
    rgb_matrix_set_color_all(127, 127, 127)
}

void matrix_scan_user(void) {}
