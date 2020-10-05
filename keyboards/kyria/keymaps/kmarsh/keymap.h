#include QMK_KEYBOARD_H
#include "tap_dance.h"
#include "encoders.h"
//#include "leader.h"

enum layers {
    _QWERTY, // Base layer; qwerty layout
    _SYMB,  // ??
    _NAV, // Navigation
    _PADS,  // Numpad on right, funciton pad on left
    _GAMING, // wasd layout for gaming
};

// Layers
#define KC_SYMB         MO(_SYMB)
#define KC_NAV          MO(_NAV)
#define KC_TO_GAME      TO(_GAMING)
#define KC_TO_BASE      TO(_QWERTY)

// Home Row Modifiers
#define KC_TAB_SFT      LSFT_T(KC_TAB)
#define KC_A_SFT        LSFT_T(KC_A)
#define KC_S_OPT        LALT_T(KC_S)
#define KC_D_CTL        LCTL_T(KC_D)
#define KC_F_CMD        LGUI_T(KC_F)
#define KC_J_CMD        RGUI_T(KC_J)
#define KC_K_CTL        RCTL_T(KC_K)
#define KC_L_OPT        RALT_T(KC_L)
#define KC_SCLN_SFT     RSFT_T(KC_SCLN)
#define KC_BSLS_SFT     RSFT_T(KC_BSLS)

#define KC_1_SFT        LSFT_T(KC_1)
#define KC_2_OPT        LALT_T(KC_2)
#define KC_3_CTL        LCTL_T(KC_3)
#define KC_4_CMD        LGUI_T(KC_4)
#define KC_7_CMD        RGUI_T(KC_7)
#define KC_8_CTL        RCTL_T(KC_8)
#define KC_9_OPT        RALT_T(KC_9)
#define KC_0_SFT        RSFT_T(KC_0)

#define KC_F5_OPT       LALT_T(KC_F5)
#define KC_F6_CTL       LCTL_T(KC_F6)
#define KC_F7_GUI       LGUI_T(KC_F7)
#define KC_P4_GUI       RGUI_T(KC_4)
#define KC_P5_CTL       RCTL_T(KC_5)
#define KC_P6_OPT       RALT_T(KC_6)

// Thumb keys
#define KC_SYM_BKS         LT(_SYMB, KC_BSPC)
#define KC_SYM_SPC         LT(_SYMB, KC_SPC)

#define KC_RGB_TOG      RGB_TOG
#define KC_RGB_MOD      RGB_MOD
#define KC_RGB_RMOD     RGB_RMOD
#define KC_RGB_HUI      RGB_HUI
#define KC_RGB_HUD      RGB_HUD
#define KC_RGB_VAI      RGB_VAI
#define KC_RGB_VAD      RGB_VAD
#define KC_RGB_SAI      RGB_SAI
#define KC_RGB_SAD      RGB_SAD

#define KC_RESET        RESET

// Other special keys
#define KC_ESC_NAV      LT(_NAV, KC_ESC) // Instead maybe tapdance the SYMB key?
#define KC_QUOT_NAV     LT(_NAV, KC_QUOT)
#define KC_PAD_Z        LT(_PADS, KC_Z)
#define KC_PAD_SLSH     LT(_PADS, KC_SLSH)

#define KC_W_WIN        MT(MOD_LGUI | MOD_LCTL, KC_W)
// TODO: Define spaces movement (mod-tap with layer toggle? Can I do that?) for S

//KC_MACROS
#define KC________      KC_TRNS
#define KC_XXXXXXX      KC_NO

// Encoder keys defined in encoders.h


#define LAYOUT_kc( \
    L00, L01, L02, L03, L04, L05,                     R06, R07, R08, R09, R10, R11, \
    L12, L13, L14, L15, L16, L17,                     R18, R19, R20, R21, R22, R23, \
    L24, L25, L26, L27, L28, L29, L30, L31, R32, R33, R34, R35, R36, R37, R38, R39, \
                   L40, L41, L42, L43, L44, R45, R46, R47, R48, R49 \
) \
{ \
    { KC_NO,    KC_NO,    KC_##L05, KC_##L04, KC_##L03, KC_##L02, KC_##L01, KC_##L00 }, \
    { KC_NO,    KC_NO,    KC_##L17, KC_##L16, KC_##L15, KC_##L14, KC_##L13, KC_##L12 }, \
    { KC_##L31, KC_##L30, KC_##L29, KC_##L28, KC_##L27, KC_##L26, KC_##L25, KC_##L24 }, \
    { KC_##L44, KC_##L43, KC_##L42, KC_##L41, KC_##L40, KC_NO,    KC_NO,    KC_NO }, \
    { KC_NO,    KC_NO,    KC_##R06, KC_##R07, KC_##R08, KC_##R09, KC_##R10, KC_##R11 }, \
    { KC_NO,    KC_NO,    KC_##R18, KC_##R19, KC_##R20, KC_##R21, KC_##R22, KC_##R23 }, \
    { KC_##R32, KC_##R33, KC_##R34, KC_##R35, KC_##R36, KC_##R37, KC_##R38, KC_##R39 }, \
    { KC_##R45, KC_##R46, KC_##R47, KC_##R48, KC_##R49, KC_NO,     KC_NO,   KC_NO }, \
}

