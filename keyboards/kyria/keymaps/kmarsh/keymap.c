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
    [_QWERTY] = LAYOUT_kc(
 //,--------------------,----------------------------------.                                   ,-----------------------------------------------------.
      TAB     ,Q       ,W_WIN   ,E       ,R       ,T                                           ,Y       ,U       ,I       ,O       ,P       ,BSLS    ,
 //|----------+--------+--------+--------+--------+--------|                                   |--------+--------+--------+--------+--------+--------|
      ESC_NAV ,A_SFT   ,S_OPT   ,D_CTL   ,F_CMD   ,G                                           ,H       ,J_CMD   ,K_CTL   ,L_OPT   ,SCLN_SFT,QUOT_NAV,
 //|----------+--------+--------+--------+--------+--------+--------+-------.,--------+--------+--------+--------+--------+--------+--------+--------|
      SFT_CPS ,PAD_Z   ,X       ,C       ,V       ,B       ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,N       ,M       ,COMM    ,DOT     ,PAD_SLSH,RSFT    ,
 //,----------+--------+--------+--------+--------+--------+--------+-------||--------+--------+--------+--------+--------+--------+--------+--------.
                                 BSE_E1  ,EQUAL   ,MINS    ,SYM_BKS ,DEL     ,ENTER   ,SYM_SPC ,UNDS    ,PLUS    ,BSE_E2
 //                             ,--------+--------+--------+--------+-------.,--------+--------+--------+--------+--------.
    ),
    [_SYMB] = LAYOUT_kc(
 //,--------------------,----------------------------------.                                   ,-----------------------------------------------------.
      XXXXXXX ,XXXXXXX ,LBRC    ,LCBR    ,RCBR    ,RBRC                                        ,XXXXXXX ,XXXXXXX ,LPRN    ,RPRN    ,XXXXXXX ,_______ ,
 //|----------+--------+--------+--------+--------+--------|                                   |--------+--------+--------+--------+--------+--------|
      GRV     ,1_SFT   ,2_OPT   ,3_CTL   ,4_CMD   ,5                                           ,6       ,7_CMD   ,8_CTL   ,9_OPT   ,0_SFT   ,_______ ,
 //|----------+--------+--------+--------+--------+--------+--------+-------.,--------+--------+--------+--------+--------+--------+--------+--------|
      _______ ,EXLM    ,AT      ,HASH    ,DLR     ,PERC    ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,CIRC    ,AMPR    ,ASTR    ,LPRN    ,RPRN    ,_______ ,
 //,----------+--------+--------+--------+--------+--------+--------+-------||--------+--------+--------+--------+--------+--------+--------+--------.
                                 SYM_E1  ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,SYM_E2
 //                             ,--------+--------+--------+--------+-------.,--------+--------+--------+--------+--------.
    ),
    [_PADS] = LAYOUT_kc(
 //,--------------------,----------------------------------.                                   ,-----------------------------------------------------.
      TO_GAME ,XXXXXXX ,F9      ,F10     ,F11     ,F12                                         ,PSLS    ,P7      ,P8      ,P9      ,PAST    ,_______ ,
 //|----------+--------+--------+--------+--------+--------|                                   |--------+--------+--------+--------+--------+--------|
      _______ ,XXXXXXX ,F5_OPT  ,F6_CTL  ,F7_GUI  ,F8                                          ,PEQL    ,P4_GUI  ,P5_CTL  ,P6_OPT  ,MINS    ,XXXXXXX ,
 //|----------+--------+--------+--------+--------+--------+--------+-------.,--------+--------+--------+--------+--------+--------+--------+--------|
      _______ ,XXXXXXX ,F1      ,F2      ,F3      ,F4      ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,COMM    ,P1      ,P2      ,P3      ,PPLS    ,_______ ,
 //,----------+--------+--------+--------+--------+--------+--------+-------||--------+--------+--------+--------+--------+--------+--------+--------.
                                 PAD_E1  ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,P0      ,PDOT    ,PAD_E2
 //                             ,--------+--------+--------+--------+-------.,--------+--------+--------+--------+--------.
    ),
    [_NAV] = LAYOUT_kc(
 //,--------------------,----------------------------------.                                   ,-----------------------------------------------------.
      _______ ,LSFT    ,BTN3    ,MS_U    ,BTN1    ,XXXXXXX                                     ,XXXXXXX ,HOME    ,END     ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
 //|----------+--------+--------+--------+--------+--------|                                   |--------+--------+--------+--------+--------+--------|
      _______ ,XXXXXXX ,MS_L    ,MS_D    ,MS_R    ,XXXXXXX                                     ,LEFT    ,DOWN    ,UP      ,RIGHT   ,XXXXXXX ,_______ ,
 //|----------+--------+--------+--------+--------+--------+--------+-------.,--------+--------+--------+--------+--------+--------+--------+--------|
      _______ ,XXXXXXX ,XXXXXXX ,WH_U    ,WH_D    ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,PGDN    ,PGUP    ,LPRN    ,RPRN    ,_______ ,
 //,----------+--------+--------+--------+--------+--------+--------+-------||--------+--------+--------+--------+--------+--------+--------+--------.
                                 NAV_E1  ,LGUI    ,LCTL    ,LALT    ,_______ ,_______ ,ACL0    ,ACL1    ,ACL2    ,NAV_E2
 //                             ,--------+--------+--------+--------+-------.,--------+--------+--------+--------+--------.
    ),
    [_GAMING] = LAYOUT_kc(
 //,-------------------,-----------------------------------.                                   ,-----------------------------------------------------.
      TO_BASE ,TAB     ,Q       ,W       ,E       ,R                                           ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,RESET   ,
 //|----------+--------+--------+--------+--------+--------|                                   |--------+--------+--------+--------+--------+--------|
      ESC     ,LSFT    ,A       ,S       ,D       ,F                                           ,XXXXXXX ,RGUI    ,RCTL    ,ROPT    ,RSFT    ,XXXXXXX ,
 //|----------+--------+--------+--------+--------+--------+--------+-------.,--------+--------+--------+--------+--------+--------+--------+--------|
      _______ ,LCTL    ,1       ,2       ,3       ,4       ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,
 //,----------+--------+--------+--------+--------+--------+--------+-------||--------+--------+--------+--------+--------+--------+--------+--------.
                                 GAM_E1  ,X       ,C       ,SPC     ,V       ,RGB_MOD ,RGB_RMOD,RGB_TOG ,XXXXXXX ,GAM_E2
 //                             ,--------+--------+--------+--------+-------.,--------+--------+--------+--------+--------.
    ),
};

void matrix_scan_user(void) {
    matrix_scan_encoders();
    /*matrix_scan_leader();*/
}


/* This may be useful if I end up with more layers. As it is, I don't need it
layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _RAISE, _LOWER, _ADJUST);
}
*/

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

//TODO: split layer hints by keyboard side?
static void render_status(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer:\n"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Qwerty\n"), false);
            break;
        case _SYMB:
            oled_write_P(PSTR("BRC\nSymbols\n"), false);
            break;
        case _NAV:
            oled_write_P(PSTR("NAV\n<-Mouse | Arrows->\n"), false);
            break;
        case _PADS:
            oled_write_P(PSTR("PADS\n<-F-Pad |Numpad->\n"), false);
            break;
        case _GAMING:
            oled_write_P(PSTR("Gaming\n<-WASD | RGB->\n"), false);
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

/*uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_W_WIN:
            return TAPPING_TERM + 200;
            break;
        default:
            return TAPPING_TERM;
    }
}*/

/* Combos */
const uint16_t PROGMEM hyphen_combo[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM plus_combo[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM underscore_combo[] = {KC_M, KC_DOT, COMBO_END};
const uint16_t PROGMEM caps_combo[] = {KC_SFT_CPS, KC_RSFT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(hyphen_combo, KC_MINS),
    COMBO(underscore_combo, KC_UNDS),
    COMBO(plus_combo, KC_PLUS),
    COMBO(caps_combo, KC_CAPSLOCK),
};
