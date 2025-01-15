// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


 [0] = LAYOUT(
                KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, 
                KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_BSPC, 
                KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_MINS,   KC_ENT,        
      KC_0,     KC_LSFT,   KC_LCTL,  KC_LALT,         KC_SPC,          KC_LEFT,   KC_RGHT,   MO(1)
    ), 

    [1] = LAYOUT(
               KC_ESC,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, 
               KC_TAB,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_DEL, 
               KC_LSFT,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_MINS,   KC_ENT,  
      KC_0,    KC_LSFT,   KC_LCTL,  KC_LALT,         KC_SPC,          KC_LEFT,   KC_RGHT,   MO(1)
    ), 

    [2] = LAYOUT(
              KC_ESC,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, 
              KC_TAB,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_DEL, 
              KC_LSFT,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_MINS,   KC_ENT,  
      KC_0,   KC_LSFT,   KC_LCTL,  KC_LALT,         KC_SPC,          KC_LEFT,   KC_RGHT,   MO(1)
    ), 

    [3] = LAYOUT(
              KC_ESC,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, 
              KC_TAB,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_DEL, 
              KC_LSFT,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_MINS,   KC_ENT,  
      KC_0,   KC_LSFT,   KC_LCTL,  KC_LALT,         KC_SPC,          KC_LEFT,   KC_RGHT,   MO(1)
    )
};


void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_MOOD);
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN) }, 
    [1] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN) }, 
    [2] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN) }, 
    [3] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN) }
    //                  Encoder 1                                     
};
#endif