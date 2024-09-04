// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,  KC_1,   KC_2,   KC_3,   KC_BSPC,
        KC_TAB,  KC_A,   KC_B,           KC_ENT,
        KC_Z,           KC_SPC,          MO(1) 
    ),

     [1] = LAYOUT(
        KC_ESC,  KC_1,   KC_2,   KC_3,   KC_BSPC,
        KC_TAB,  KC_A,   KC_B,           KC_ENT,
        KC_Z,           KC_SPC,          MO(1) 
    ),

     [2] = LAYOUT(
        KC_ESC,  KC_1,   KC_2,   KC_3,   KC_BSPC,
        KC_TAB,  KC_A,   KC_B,           KC_ENT,
        KC_Z,           KC_SPC,          MO(1) 
    ),

     [3] = LAYOUT(
        KC_ESC,  KC_1,   KC_2,   KC_3,   KC_BSPC,
        KC_TAB,  KC_A,   KC_B,           KC_ENT,
        KC_Z,           KC_SPC,          MO(1) 
    )

};
