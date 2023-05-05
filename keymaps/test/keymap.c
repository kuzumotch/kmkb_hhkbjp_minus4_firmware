/* Copyright 2023 kuzumotch
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
#include "keymap_japanese.h"


// Defines names for use in layer keycodes and the keymap
// enum layer_names {
//     _BASE,
//     _FN
// };



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐───┐───┐
     * │   │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ M │ N │
     * ├─a──┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤───┤───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ M │ N │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤───┤───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ M │ N │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤───┤───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ M │ N │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤───┤───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ M │ N │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘───┘───┘
     */
    /* Base */
    [0] = LAYOUT(
        KC_GRAVE,JP_1,    JP_2,    JP_3,    JP_4,    JP_5,    JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    KC_BSPC, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS,
        KC_TAB,  JP_Q,    JP_W,    JP_E,    JP_R,    JP_T,    JP_Y,    JP_U,    JP_I,    JP_O,    JP_P,    KC_KP_7, KC_KP_8,     KC_KP_9,                 
        KC_CAPS, JP_A,    JP_S,    JP_D,    JP_F,    JP_G,    JP_H,    JP_J,    JP_K,    JP_L,    KC_KP_4, KC_KP_5, KC_KP_6, 
        KC_LSFT, JP_Z,    JP_X,    JP_C,    JP_V,    JP_B,    JP_N,    JP_M,    JP_COMM, JP_DOT,  JP_SLSH, KC_KP_1, KC_KP_2,  KC_KP_3,            
        MO(1),            KC_LWIN, KC_LALT, KC_SPC,  KC_SPC,  KC_RALT,  KC_RWIN,                            KC_LEFT, KC_DOWN,KC_RGHT
    ),
    [1] = LAYOUT(
        QK_BOOT,  KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_F13, KC_DEL,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BSPC, KC_DEL, _______, 
        _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______, _______, QK_BOOT,
        _______,          _______, _______, _______, _______, _______, _______,                            _______, _______, _______
    ),
    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______,                            _______, _______, _______
    )
};
