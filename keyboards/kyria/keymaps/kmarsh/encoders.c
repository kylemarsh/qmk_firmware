#include "keymap.h"

// For the alt/cmd tab encoder actions
bool     is_alt_tab_active = false;
bool     is_cmd_tab_active = false;
uint16_t alt_tab_timer     = 0;
uint16_t cmd_tab_timer     = 0;

void matrix_scan_encoders(void) {
    if (is_alt_tab_active) {
        if (timer_elapsed(alt_tab_timer) > 750) {
            unregister_code(KC_LALT);
            is_alt_tab_active = false;
        }
    }
    if (is_cmd_tab_active) {
        if (timer_elapsed(cmd_tab_timer) > 750) {
            unregister_code(KC_LCMD);
            is_cmd_tab_active = false;
        }
    }
}

void volume_control(bool clockwise) {
    if (clockwise) {
        tap_code16(KC_VOLU);
    } else {
        tap_code16(KC_VOLD);
    }
}

void media_control(bool clockwise) {
    if (clockwise) {
        tap_code16(KC_MNXT);
    } else {
        tap_code16(KC_MPRV);
    }
}

void text_jog(bool clockwise) {
    if (clockwise) {
        tap_code16(KC_RIGHT);
    } else {
        tap_code16(KC_LEFT);
    }
}

void scrolling(bool clockwise) {
    if (clockwise) {
        tap_code16(KC_WH_D);
    } else {
        tap_code16(KC_WH_U);
    }
}

void zoom(bool clockwise) {
    if (clockwise) {
        tap_code16(C(KC_MINS));
    } else {
        tap_code16(C(KC_PLUS));
    }
}

void alt_tab(bool clockwise) {
    if (!is_alt_tab_active) {
        is_alt_tab_active = true;
        register_code(KC_LALT);
    }
    alt_tab_timer = timer_read();
    if (clockwise) {
        tap_code16(KC_TAB);
    } else {
        tap_code16(S(KC_TAB));
    }
}

void ctrl_tab(bool clockwise) {
    if (clockwise) {
        tap_code16(C(KC_TAB));
    } else {
        tap_code16(S(C(KC_TAB)));
    }
}

void cmd_tab(bool clockwise) {
    if (!is_cmd_tab_active) {
        is_cmd_tab_active = true;
        register_code(KC_LCMD);
    }
    cmd_tab_timer = timer_read();
    if (clockwise) {
        tap_code16(KC_TAB);
    } else {
        tap_code16(S(KC_TAB));
    }
}

void cycle_app_windows(bool clockwise) {
    if (clockwise) {
        tap_code16(G(KC_GRAVE));
    } else {
        tap_code16(S(G(KC_GRAVE)));
    }
}

void rgb_enc(bool clockwise) {
    uint8_t mod = get_mods();
    void (*cw_f)(void);
    void (*ccw_f)(void);

    switch (mod) {
        case MOD_BIT(KC_RGUI):
        case MOD_BIT(KC_LGUI):
            cw_f = rgblight_increase_hue;
            ccw_f = rgblight_decrease_hue;
            break;
        case MOD_BIT(KC_RCTL):
        case MOD_BIT(KC_LCTL):
            cw_f = rgblight_increase_sat;
            ccw_f = rgblight_decrease_sat;
            break;
        case MOD_BIT(KC_RALT):
        case MOD_BIT(KC_LALT):
            cw_f = rgblight_increase_val;
            ccw_f = rgblight_decrease_val;
            break;
        case MOD_BIT(KC_RSFT):
        case MOD_BIT(KC_LSFT):
            cw_f = rgblight_increase_speed;
            ccw_f = rgblight_decrease_speed;
            break;
        default:
            cw_f = rgblight_step;
            ccw_f = rgblight_step_reverse;
            break;
    }

    if(clockwise) {
        cw_f();
    } else {
        ccw_f();
    }
} 

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {  // Left encoder
        switch (biton32(layer_state)) {
            case _QWERTY:
                volume_control(clockwise);
                break;
            case _SYMB:
                break;
            case _NAV:
                cmd_tab(clockwise);
                break;
            case _GAMING:
                rgb_enc(clockwise);
                break;
            default:
                // Do nothing
                break;
        }
    } else if (index == 1) {  // Right encoder
        switch (biton32(layer_state)) {
            case _QWERTY:
                text_jog(clockwise);
                break;
            case _SYMB:
                break;
            case _NAV:
                cycle_app_windows(clockwise);
                break;
            case _GAMING:
                volume_control(clockwise);
                break;
            default:
                // Do nothing
                break;
        }
    }
}
