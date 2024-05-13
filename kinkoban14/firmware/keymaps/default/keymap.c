// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 
    [0] = LAYOUT(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5, 
        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_0,    KC_LSFT,   MO(1),    KC_0
        ),

    [1] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, 
        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_0,    KC_ENT,   MO(1),    KC_0
        ),

     [2] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, 
        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_0,    KC_LSFT,   MO(1),    KC_0
        ),

    [3] = LAYOUT(
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E, 
        KC_D,    KC_E,    KC_F,    KC_G,    KC_H,
        KC_G,    KC_H,    KC_I,    KC_0
        )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  }, 
    [1] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  }, 
    [2] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  }, 
    [3] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)  }
    //                  Encoder 1                                     Encoder 2
};
#endif
