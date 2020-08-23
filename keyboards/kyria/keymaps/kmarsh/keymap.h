#include QMK_KEYBOARD_H
#include "encoders.h"
#include "leader.h"

enum layers {
    _QWERTY, // Base layer; qwerty layout
    _LOWER,  // ??
    _RAISE,  // ??
    _ADJUST, // Keyboard adjustments (RGB, etc)
    _EXTEND, // Navigation
    _FUNPAD, // Function pad
    _NUMPAD, // Numpad
    _GAMING, // wasd layout for gaming
    _GAME_OVERLAY  // gaming layer overlay
};

// Layer keys
#define DEL_FN              LT(_EXTEND, KC_DEL)
#define ENTER_FN            LT(_EXTEND, KC_ENTER)
#define LWR_BSP             LT(_LOWER, KC_BSPC)
#define RSE_SPC             LT(_RAISE, KC_SPACE)
#define NUM_Z               LT(_NUMPAD, KC_Z)
#define FUN_SLSH            LT(_FUNPAD, KC_SLSH)
#define GAM_SPC             LT(_GAME_OVERLAY, KC_SPACE)
#define LOWER               MO(_LOWER)
#define RAISE               MO(_RAISE)
#define TO_GAME             TO(_GAMING)
#define TO_BASE             TO(_QWERTY)

// Handy Mod-Taps
#define CTL_LBRC            LCTL_T(KC_LBRC)
#define GUI_RBRC            LGUI_T(KC_RBRC)
#define GUI_LPRN            RGUI_T(KC_LPRN)
#define CTL_RPRN            RCTL_T(KC_RPRN)
#define LDR_ALT             LALT_T(KC_LEAD)
#define DM_ALT              RALT_T(DM_PLY1)
#define MREC_ALT            RALT_T(DM_REC1)

// Hold W for modifier combo for hammerspoon window positioning commands
#define W_WIN               MT(MOD_LGUI | MOD_LSFT, KC_W)
// TODO: Define spaces movement (mod-tap with layer toggle? Can I do that?) for S

// Encoder keys defined in encoders.h
