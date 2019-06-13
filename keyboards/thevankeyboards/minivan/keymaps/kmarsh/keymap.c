#include "MiniVan20190613045410.h"
enum custom_keycodes {
M_IME = SAFE_RANGE
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
if (record->event.pressed) {
switch(keycode) {
case M_IME:
SEND_STRING(SS_DOWN(X_LSHIFT)SS_DOWN(X_LALT));
return false;
}
}
else {
switch(keycode) {
case M_IME:
SEND_STRING(SS_UP(X_LSHIFT)SS_UP(X_LALT));
return false;
}
}
return true;
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_SCLN, LT(2, KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, LT(2, KC_ENT), LSFT_T(KC_LBRC), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_RBRC), KC_LCTL, KC_LALT, KC_LGUI, KC_NO, LT(1, KC_BSPC), LT(1, KC_SPC), KC_RGUI, KC_RALT, KC_RCTL, TG(3)),
[1] = KEYMAP(KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_COLN, KC_TRNS, KC_BTN3, KC_BTN2, KC_MS_U, KC_BTN1, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_EQL, KC_TRNS, KC_TRNS, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, LT(1, KC_DEL), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
[2] = KEYMAP(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, KC_NO, KC_MINS, KC_LCBR, KC_RCBR, KC_NO, KC_MINS, KC_4, KC_5, KC_6, KC_PLUS, KC_TRNS, KC_TRNS, KC_NO, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_BSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, LT(1, KC_BSPC), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
[3] = KEYMAP(TO(1), KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO, TO(2), KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, TO(4), KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
[4] = KEYMAP(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0)),
};
void matrix_init_user(void) {
rgblight_init();
};
void rgblight_init_leds(void) {
process_indicator_update(layer_state, host_keyboard_leds());
};
void led_set_user(uint8_t usb_led) {
process_indicator_update(layer_state, usb_led);
};
uint32_t layer_state_set_user(uint32_t state) {
process_indicator_update(state, host_keyboard_leds());
return state;
};
void process_indicator_update(uint32_t state, uint8_t usb_led) {
LED_TYPE indicators[3] = {
{.r = 0, .g = 0, .b = 0},
{.r = 0, .g = 0, .b = 0},
{.r = 0, .g = 0, .b = 0}
};
uint8_t indexes[3] = {
0,
1,
2
};
indicators[0].r = 99;
indicators[0].g = 0;
indicators[0].b = 0;
if (state & (1<<1)){
indicators[1].r = 255;
indicators[1].g = 255;
indicators[1].b = 0;
}
if (state & (1<<2)){
indicators[1].r = 0;
indicators[1].g = 255;
indicators[1].b = 255;
}
if (state & (1<<3)){
indicators[1].r = 255;
indicators[1].g = 0;
indicators[1].b = 255;
}
if (state & (1<<4)){
indicators[1].r = 0;
indicators[1].g = 255;
indicators[1].b = 0;
}
rgblight_setrgb_many(indicators, indexes, 3);
};