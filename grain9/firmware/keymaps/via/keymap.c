// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include <stdio.h>
#include <string.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┤ + │
     * │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │   │
     * ├───┴───┼───┤Ent│
     * │   0   │ . │   │
     * └───────┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,            KC_W,   
        KC_TAB,    KC_A,   KC_S,   KC_D,
        KC_LSFT,   KC_SPC,         MO(1)   
    ),

    [1] = LAYOUT(
        RGB_TOG,            KC_1,   
        KC_TAB,    KC_A,   KC_S,   KC_D,
        KC_LSFT,   KC_SPC,         KC_F   
    ),

    [2] = LAYOUT(
        KC_ESC,            KC_W,   
        KC_TAB,    KC_A,   KC_S,   KC_D,
        KC_LSFT,   KC_SPC,         KC_F   
    ),

    [3] = LAYOUT(
        KC_ESC,            KC_W,   
        KC_TAB,    KC_A,   KC_S,   KC_D,
        KC_LSFT,   KC_SPC,         KC_F   
    )
};

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_MOOD);
}