/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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
#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* 
 * Base Layer: QWERTY
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * | ENC    |   Q  |W(win)|   E  |   R  |   T  |                              |   Y  |   U  |   I  |   O  |   P  |  \ |   |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * | ESC    |   A  |S(dsk)|  D   |   F  |   G  |                              |   H  |   J  |   K  |   L  | ;  : |  ' "   |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * | LSHFT  |Z(num)|   X  |   C  |   V  |   B  |OPTLDR|      |  |      |OPTMAC|   N  |   M  | ,  < | . >  |/?(fn)| RSHFT  |
 * `----------------------+------+------+------+------+ DELE |  |ENTER +------+------+------+------+----------------------'
 *                        | TAB  | CTRL | CMD  | BKSP |      |  |      |SPACE | CMD  | CTRL | ENC  |
 *                        |      |  [   |  ]   | LOWR |(ext) |  |(ext) |RAISE |  (   |  )   |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_QWERTY] = LAYOUT(
      BSE_E1   ,KC_Q   ,W_WIN  ,KC_E   ,KC_R   ,KC_T                                       ,KC_Y   ,KC_U    ,KC_I    ,KC_O    ,KC_P     ,KC_BSLS,
      KC_ESC   ,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G                                       ,KC_H   ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN  ,KC_QUOT,
      KC_LSFT  ,NUM_Z  ,KC_X   ,KC_C   ,KC_V   ,KC_B ,LDR_ALT ,XXXXXXX  ,XXXXXXX  ,DM_ALT  ,KC_N   ,KC_M    ,KC_COMM ,KC_DOT  ,FUN_SLSH ,KC_RSFT,
                         KC_TAB ,CTL_LBRC ,GUI_RBRC  ,LWR_BSP ,DEL_FN   ,ENTER_FN ,RSE_SPC   ,GUI_LPRN ,CTL_RPRN ,BSE_E2
    ),
/*
 * Lower Layer: Symbols
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |  ENC   |      |      |      |      |      |                              |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |    ~   |  !   |  @   |  #   |  $   |  %   |                              |   ^  |  &   |  *   |  (   |  )   |   _    |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |  TRNS  |      |      |      |      |      | TRNS |      |  |      | TRNS |      |      |      |      |      |  TRNS  |
 * `----------------------+------+------+------+------+ TRNS |  | TRNS +------+------+------+------+----------------------'
 *                        |      | TRNS | TRNS | TRNS |      |  |      | TRNS | TRNS | TRNS |  ENC |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_LOWER] = LAYOUT(
      LWR_E1  ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX                                     ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
      KC_TILD ,KC_EXLM ,KC_AT   ,KC_HASH ,KC_DLR  ,KC_PERC                                     ,KC_CIRC ,KC_AMPR ,KC_ASTR ,KC_LPRN ,KC_RPRN ,KC_UNDS ,
      _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,XXXXXXX ,XXXXXXX ,_______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,
                           XXXXXXX ,_______ ,_______      ,_______ ,_______ ,_______ ,_______      ,_______ ,_______ ,LWR_E2
    ),
/*
 * Raise Layer: Number keys, media, navigation
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |  ENC   |      |  =   | /(np)| *(np)|      |                              |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |  ` ~   |   1  |  2   |  3   |  4   |  5   |                              |  6   |  7   |  8   |  9   |  0   |  - _   |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * | TRNS   |      | SPC  | -(np)| +(np)|      | TRNS |      |  |      | TRNS |      |      |      |      |      |  TRNS  |
 * `----------------------+------+------+------+------+ TRNS |  | TRNS +------+------+------+------+----------------------'
 *                        |      | TRNS | TRNS | TRNS |      |  |      | TRNS | TRNS | TRNS | ENC  |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_RAISE] = LAYOUT(
      RSE_E1  ,XXXXXXX ,KC_EQL  ,KC_PSLS ,KC_PAST ,XXXXXXX                                     ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
      KC_GRV  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5                                        ,KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,
      _______ ,XXXXXXX ,KC_SPC  ,KC_PMNS ,KC_PPLS ,XXXXXXX ,_______ ,XXXXXXX ,XXXXXXX ,_______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,
                           XXXXXXX ,_______ ,_______      ,_______ ,_______ ,_______ ,_______ ,     _______, _______, RSE_E2
    ),
/*
 * Adjust Layer: RGB
 * TODO: OLED? Macros? Sleep/Lock? Other?
 
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |  ENC   |      |      |      |      |      |                              |      |      |      |      |      | RESET  |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |        | TOG  | SAI  | HUI  | VAI  | MOD  |                              |      |      |      |      |      |        |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |        |      | SAD  | HUD  | VAD  | RMOD | TRNS |      |  |      | TRNS |      |      |      |      |      |        |
 * `----------------------+------+------+------+------+ TRNS |  | TRNS +------+------+------+------+----------------------'
 *                        | GAME | TRNS | TRNS | TRNS |      |  |      | TRNS | TRNS | TRNS | ENC  |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_ADJUST] = LAYOUT(
      ADJ_E1  ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX                                     ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,RESET   ,
      XXXXXXX ,RGB_TOG ,RGB_SAI ,RGB_HUI ,RGB_VAI ,RGB_MOD                                     ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
      XXXXXXX ,XXXXXXX ,RGB_SAD ,RGB_HUD ,RGB_VAD ,RGB_RMOD,_______ ,XXXXXXX ,XXXXXXX ,_______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
                           TO_GAME ,_______ ,_______       ,_______ ,_______ ,_______ ,_______      ,_______ ,_______ ,ADJ_E2
    ),
 /*
  * EXTEND -- Navigation etc.
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |  ENC   | MB_3 | MB_2 | M_UP | MB_1 |      |                              |      | HOME |  UP  | END  |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |  TRNS  |      | M_L  | M_DN | M_R  |      |                              |      | LEFT | DOWN |RIGHT |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        |      |      |SCL_U |SCL_D |      | TRNS |      |  |      |DM_REC|DMSTOP| PGDN | PGUP |      |      |        |
  * `----------------------+------+------+------+------+ TRNS |  | TRNS +------+------+------+------+----------------------'
  *                        |      |      | ACL1 | ACL2 |      |  |      | CMD  | OPT  | CTL  | ENC  |
  *                        `----------------------------------'  `----------------------------------'
  */
     [_EXTEND] = LAYOUT(
       EXT_E1  ,KC_BTN3 ,KC_BTN2 ,KC_MS_U ,KC_BTN1 ,XXXXXXX                                     ,XXXXXXX ,KC_HOME ,KC_UP   ,KC_END  ,XXXXXXX ,XXXXXXX,
       KC_ESC  ,XXXXXXX ,KC_MS_L ,KC_MS_D ,KC_MS_R ,XXXXXXX                                     ,XXXXXXX ,KC_LEFT ,KC_DOWN ,KC_RGHT ,XXXXXXX ,XXXXXXX,
       XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_WH_U ,KC_WH_D ,XXXXXXX ,_______ ,XXXXXXX ,XXXXXXX ,MREC_ALT,DM_RSTP ,KC_PGDN ,KC_PGUP ,XXXXXXX ,XXXXXXX ,XXXXXXX,
                            XXXXXXX ,XXXXXXX ,KC_ACL1       ,KC_ACL2 ,_______ ,_______ ,KC_LGUI    ,KC_LOPT ,KC_LCTL ,EXT_E2
     ),
 /*
  * FUNPAD
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |  ENC   |  F9  |  F10 |  F11 |  F12 |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |        |  F5  |  F6  |  F7  |  F8  |      |                              |      | CTL  | SFT  | ALT  |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        |  F1  |  F2  |  F3  |  F4  |      | TRNS |      |  |      | TRNS |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+ TRNS |  | TRNS +------+------+------+------+----------------------'
  *                        |      | TRNS | TRNS | TRNS |      |  |      | TRNS | TRNS | TRNS | ENC  |
  *                        `----------------------------------'  `----------------------------------'
  */
     [_FUNPAD] = LAYOUT(
       FUN_E1  ,KC_F9   ,KC_F10  ,KC_F11  ,KC_F12  ,XXXXXXX                                     ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX,
       XXXXXXX ,KC_F5   ,KC_F6   ,KC_F7   ,KC_F8   ,XXXXXXX                                     ,XXXXXXX ,KC_RCTRL,KC_RSFT ,KC_RALT ,XXXXXXX ,XXXXXXX,
       XXXXXXX ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,XXXXXXX ,_______ ,XXXXXXX ,XXXXXXX ,_______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,XXXXXXX,
                            XXXXXXX ,_______ ,_______       ,_______ ,_______ ,_______ ,_______       ,_______ ,_______ ,FUN_E2
     ),
 /*
  * NUMPAD
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |  ENC   |      |  F2  |      |      |      |                              |      |  7   |  8   |  9   |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |  TRNS  |      |  /   |  *   |  -   |      |                              |      |  4   |  5   |  6   |  -   |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |  TRNS  | TRNS |  +   |  =   |  F2  |      | TRNS |      |  |      |      |      |  1   |  2   |  3   |      |  TRNS  |
  * `----------------------+------+------+------+------+ TRNS |  | TRNS +------+------+------+------+----------------------'
  *                        |      | TRNS | TRNS | TRNS |      |  |      | TRNS |  0   |  ,   |  .   |
  *                        `----------------------------------'  `----------------------------------'
  */
     [_NUMPAD] = LAYOUT(
       NUM_E1  ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX                                     ,XXXXXXX ,KC_P7   ,KC_P8   ,KC_P9   ,XXXXXXX ,XXXXXXX,
       _______ ,XXXXXXX ,KC_PSLS ,KC_PAST ,KC_MINS ,XXXXXXX                                     ,XXXXXXX ,KC_P4   ,KC_P5   ,KC_P6   ,KC_PMNS ,XXXXXXX,
       _______ ,_______ ,KC_PPLS ,KC_PEQL ,KC_F2   ,KC_NLCK ,_______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_P0   ,KC_P1   ,KC_P2   ,KC_P3   ,XXXXXXX ,_______,
                            XXXXXXX ,_______ ,_______       ,_______ ,_______ ,_______ ,_______     ,KC_COMM ,KC_DOT  ,NUM_E2
     ),
 /*
  * GAMING
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |  ENC   | TAB  |  Q   |  W   |  E   |  R   |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |  ESC   | SFT  |  A   |  S   |  D   |  F   |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |  BASE  | CTL  |  1   |  2   |  3   |  4   |      |      |  |      |      |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+  V   |  |      +------+------+------+------+----------------------'
  *                        |      |  X   |  C   | GSPC |      |  |      |      |      |      | ENC  |
  *                        `----------------------------------'  `----------------------------------'
  */
     [_GAMING] = LAYOUT(
       GAM_E1  ,KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R                                        ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
       KC_ESC  ,KC_LSFT ,KC_A    ,KC_S    ,KC_D    ,KC_F                                        ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
       TO_BASE ,KC_LCTL ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
                            XXXXXXX ,KC_X    ,KC_C          ,GAM_SPC ,KC_V    ,XXXXXXX ,XXXXXXX       ,XXXXXXX ,XXXXXXX ,GAM_E2
     ),
 /*
  * GAMING OVERLAY
  *
  * ,-------------------------------------------.                              ,-------------------------------------------.
  * |  ENC   | TRNS | WH_D | TRNS | WH_U |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
  * |  TRNS  | TRNS | TRNS | TRNS | TRNS |      |                              |      |      |      |      |      |        |
  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
  * |        | TRNS |      |      |  M   |      |      |      |  |      |      |      |      |      |      |      |        |
  * `----------------------+------+------+------+------+      |  |      +------+------+------+------+----------------------'
  *                        |      |      |      | TRNS |      |  |      |      |      |      | ENC  |
  *                        `----------------------------------'  `----------------------------------'
  */
     [_GAME_OVERLAY] = LAYOUT(
       _______ ,_______ ,KC_WH_D ,_______ ,KC_WH_U ,_______                                     ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
       _______ ,_______ ,_______ ,_______ ,_______ ,_______                                     ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
       _______ ,_______ ,KC_P    ,KC_O    ,KC_M    ,_______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
                            XXXXXXX ,_______ ,_______       ,_______ ,_______ ,XXXXXXX ,XXXXXXX       ,XXXXXXX ,XXXXXXX ,XXXXXXX
     ),
// /*
//  * Layer template
//  *
//  * ,-------------------------------------------.                              ,-------------------------------------------.
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
//  * `----------------------+------+------+------+------+      |  |      +------+------+------+------+----------------------'
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        `----------------------------------'  `----------------------------------'
//  */
//     [_LAYERINDEX] = LAYOUT(
//       _______ ,_______ ,_______ ,_______ ,_______ ,_______                                     ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
//       _______ ,_______ ,_______ ,_______ ,_______ ,_______                                     ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
//       _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,XXXXXXX ,XXXXXXX ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
//                            _______ ,_______ ,_______       ,_______ ,_______ ,_______ ,_______       ,_______ ,_______ ,_______
//     ),
};

void matrix_scan_user(void) {
    matrix_scan_encoders();
    matrix_scan_leader();
}

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _RAISE, _LOWER, _ADJUST);
}

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	return OLED_ROTATION_180;
}

static void render_kyria_logo(void) {
    static const char PROGMEM kyria_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,192,224,240,112,120, 56, 60, 28, 30, 14, 14, 14,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 14, 14, 14, 30, 28, 60, 56,120,112,240,224,192,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,192,224,240,124, 62, 31, 15,  7,  3,  1,128,192,224,240,120, 56, 60, 28, 30, 14, 14,  7,  7,135,231,127, 31,255,255, 31,127,231,135,  7,  7, 14, 14, 30, 28, 60, 56,120,240,224,192,128,  1,  3,  7, 15, 31, 62,124,240,224,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,240,252,255, 31,  7,  1,  0,  0,192,240,252,254,255,247,243,177,176, 48, 48, 48, 48, 48, 48, 48,120,254,135,  1,  0,  0,255,255,  0,  0,  1,135,254,120, 48, 48, 48, 48, 48, 48, 48,176,177,243,247,255,254,252,240,192,  0,  0,  1,  7, 31,255,252,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,254,255,255,  1,  1,  7, 30,120,225,129,131,131,134,134,140,140,152,152,177,183,254,248,224,255,255,224,248,254,183,177,152,152,140,140,134,134,131,131,129,225,120, 30,  7,  1,  1,255,255,254,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0,255,255,  0,  0,192,192, 48, 48,  0,  0,240,240,  0,  0,  0,  0,  0,  0,240,240,  0,  0,240,240,192,192, 48, 48, 48, 48,192,192,  0,  0, 48, 48,243,243,  0,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48,192,192,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,127,255,255,128,128,224,120, 30,135,129,193,193, 97, 97, 49, 49, 25, 25,141,237,127, 31,  7,255,255,  7, 31,127,237,141, 25, 25, 49, 49, 97, 97,193,193,129,135, 30,120,224,128,128,255,255,127,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0, 63, 63,  3,  3, 12, 12, 48, 48,  0,  0,  0,  0, 51, 51, 51, 51, 51, 51, 15, 15,  0,  0, 63, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48, 63, 63, 48, 48,  0,  0, 12, 12, 51, 51, 51, 51, 51, 51, 63, 63,  0,  0,  0,  0,  0,
        0,  0,  0,  0, 15, 63,255,248,224,128,  0,  0,  3, 15, 63,127,255,239,207,141, 13, 12, 12, 12, 12, 12, 12, 12, 30,127,225,128,  0,  0,255,255,  0,  0,128,225,127, 30, 12, 12, 12, 12, 12, 12, 12, 13,141,207,239,255,127, 63, 15,  3,  0,  0,128,224,248,255, 63, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  3,  7, 15, 62,124,248,240,224,192,128,  1,  3,  7, 15, 30, 28, 60, 56,120,112,112,224,224,225,231,254,248,255,255,248,254,231,225,224,224,112,112,120, 56, 60, 28, 30, 15,  7,  3,  1,128,192,224,240,248,124, 62, 15,  7,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  3,  7, 15, 14, 30, 28, 60, 56,120,112,112,112,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,112,112,112,120, 56, 60, 28, 30, 14, 15,  7,  3,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    };
    oled_write_raw_P(kyria_logo, sizeof(kyria_logo));
}

static void render_qmk_logo(void) {
  static const char PROGMEM qmk_logo[] = {
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};

  oled_write_P(qmk_logo, false);
}

static void render_status(void) {
    // QMK Logo and version information
    render_qmk_logo();
    oled_write_P(PSTR("Kyria rev1.0\n\n"), false);

    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adjust\n"), false);
            break;
        case _EXTEND:
            oled_write_P(PSTR("Extend\n"), false);
            break;
        case _NUMPAD:
            oled_write_P(PSTR("Numpad\n"), false);
            break;
        case _FUNPAD:
            oled_write_P(PSTR("Function Pad\n"), false);
            break;
        case _GAMING:
            oled_write_P(PSTR("Gaming\n"), false);
            break;
        case _GAME_OVERLAY:
            oled_write_P(PSTR("Game (Raise)\n"), false);
            break;
        default:
            oled_write_P(PSTR("Undefined\n"), false);
    }

    // Host Keyboard LED Status
    uint8_t led_usb_state = host_keyboard_leds();
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_NUM_LOCK) ? PSTR("NUMLCK ") : PSTR("       "), false);
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_CAPS_LOCK) ? PSTR("CAPLCK ") : PSTR("       "), false);
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_SCROLL_LOCK) ? PSTR("SCRLCK ") : PSTR("       "), false);
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status(); // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_kyria_logo();
    }
}
#endif

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case W_WIN:
            return TAPPING_TERM + 200;
            break;
        default:
            return TAPPING_TERM;
    }
}
