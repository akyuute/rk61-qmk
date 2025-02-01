/*
Copyright 2019 euwbah <euwbah@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _BASE,
    _CLMK,
    _FN,
    _MEDIA,
    _SPEC,
};

// _______ == KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*  Column:    0           1           2           3           4           5           6           7           8           9           10          11          12          13          */

    // TODO: Double-check correct KC_NO locations!!!

    [_BASE] = {
        {   KC_LGUI,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,    },
        {   KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS},
        {   KC_ESC,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_ENT},
        {   KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    MO(_MEDIA), KC_NO,      KC_NO},
        {   KC_LCTL,    MO(_FN),    KC_LALT,    KC_SPC,     KC_BSPC,    KC_RGUI,    KC_CAPS,    MO(_FN)}
    },

//    [_OLD_BASE] = LAYOUT_all(
//        KC_LGUI,     KC_1,     KC_2,     KC_3,      KC_4,     KC_5,     KC_6,     KC_7,       KC_8,      KC_9,        KC_0,    KC_MINUS,    KC_EQUAL,    KC_BSPC,
//            KC_NO, KC_TAB,     KC_Q,     KC_W,     KC_E,      KC_R,     KC_T,     KC_Y,     KC_U,       KC_I,      KC_O,        KC_P,     KC_LBRC,     KC_RBRC,    KC_BSLS,
//           KC_CAPS,     KC_A,     KC_S,     KC_D,      KC_F,     KC_G,     KC_H,     KC_J,       KC_K,      KC_L,     KC_SCLN,     KC_QUOT,                  KC_ENT,
//           KC_LSFT,     KC_Z,     KC_X,     KC_C,      KC_V,     KC_B,     KC_N,     KC_M,   KC_COMM ,    KC_DOT,    KC_SLASH,                  MO(_MEDIA),
//           KC_NO, KC_NO, KC_LCTL,  MO(_FN),    KC_LALT,              KC_SPC,   	              KC_BSPC,      KC_APP,     KC_RCTL,                   MO(_FN)),


    [_CLMK] = {
        {   KC_LGUI,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,    },
        {   KC_TAB,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_G,       KC_J,       KC_L,       KC_U,       KC_Y,       KC_QUOT,    KC_LBRC,    KC_RBRC,    KC_BSLS},
        {   KC_ESC,     KC_A,       KC_R,       KC_S,       KC_T,       KC_D,       KC_H,       KC_N,       KC_E,       KC_I,       KC_O,       KC_SCLN,    KC_ENT},
        {   KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_K,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    MO(_MEDIA), KC_NO,      KC_NO},
        {   KC_LCTL,    MO(_FN),    KC_LALT,    KC_SPC,     KC_BSPC,    KC_RGUI,    KC_CAPS,    MO(_FN)}
    },

    [_FN] = {
        // TODO: Reassign RAlt, KC_APP, RCtrl, Fn

        {   KC_GRV,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_DEL,     },
        {   _______,    KC_F13,     KC_F14,     KC_F15,     KC_F16,     KC_F17,     KC_PSCR,    KC_SCRL,    KC_PAUS,    _______,    RGB_HUI,    RGB_SAI,    RGB_VAI,    RGB_MOD},
        {   RESET,      KC_VOLU,    KC_BRIU,    _______,    _______,    _______,    KC_LEFT,    KC_DOWN,    KC_UP,     KC_RIGHT,    RGB_SPD,    RGB_SPI,    _______},
        {   _______,    _______,    KC_VOLD,    KC_BRID,    _______,    _______,    _______,    KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     KC_BSLS,    MO(_SPEC),  _______},
        {   _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______}
    },

    [_MEDIA] = {
        // TODO: Get creative

        {   KC_GRV,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_DEL,     },
        {   _______,    KC_F13,     KC_F14,     KC_F15,     KC_F16,     KC_F17,     KC_PSCR,    KC_SCRL,    KC_PAUS,    _______,    RGB_HUI,    RGB_SAI,    RGB_VAI,    RGB_MOD},
        {   RESET,      KC_VOLU,    KC_BRIU,    _______,    _______,    _______,    KC_LEFT,    KC_DOWN,    KC_UP,     KC_RIGHT,    RGB_SPD,    RGB_SPI,    _______},
        {   _______,    _______,    KC_VOLD,    KC_BRID,    _______,    _______,    _______,    KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     KC_BSLS,    _______,    _______},
        {   _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______}
    },

    [_SPEC] = {
        // TODO: Get creative

        {   KC_GRV,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_DEL,     },
        {   _______,    KC_F13,     KC_F14,     KC_F15,     KC_F16,     KC_F17,     KC_PSCR,    KC_SCRL,    KC_PAUS,    _______,    RGB_HUI,    RGB_SAI,    RGB_VAI,    RGB_MOD},
        {   RESET,      KC_VOLU,    KC_BRIU,    _______,    _______,    _______,    KC_LEFT,    KC_DOWN,    KC_UP,     KC_RIGHT,    RGB_SPD,    RGB_SPI,    _______},
        {   _______,    _______,    KC_VOLD,    KC_BRID,    _______,    _______,    _______,    KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     KC_BSLS,    _______,    _______},
        {   _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______}
    },

};
