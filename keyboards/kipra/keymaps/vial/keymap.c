// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │
      * ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │
      * ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │
      * ├───┼───┼───┼───┤───┘
      * │GUI│ALT│CTL│SFT│
      * └───┴───┴───┴───┘
      *               ┌───┐
      *               │BSP├───┐
      *               └───┤GUI├───┐
      *                   └───┤SFT│
      *                       └───┘
      * ┌───┬───┬───┬───┬───┐
      * │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤
      * │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤
      * │ N │ M │ , │ . │ / │
      * └───┼───┼───┼───┼───┤
      *     │SFT│CTL│ALT│GUI│
      *     └───┴───┴───┴───┘
      *           ┌───┐
      *       ┌───┤CTL│
      *   ┌───┤SPC├───┘
      *   │ENT├───┘
      *   └───┘
      */
    [0] = LAYOUT_split_l55543r(
KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,
KC_BSPC, KC_LGUI, OSM(MOD_LSFT),

KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
         KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI,
                    KC_ENT, KC_SPC, KC_LCTL
    )
};
