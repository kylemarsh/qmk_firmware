#include "keymap.h"

static td_state_t td_state_sft;
static bool caps_lock = false;

int cur_dance(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) { return SINGLE_TAP; }
        else { return SINGLE_HOLD; }
    }
    if (state->count == 2) { return DOUBLE_SINGLE_TAP; }
    else { return 3; }
}

#define DEBOUNCE_CAPS_DELAY 100

void sft_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state_sft = cur_dance(state);
    if (td_state_sft == DOUBLE_SINGLE_TAP) {
        if (!caps_lock) {
            register_code(KC_CAPSLOCK);
            return;
         }
    }
    if (caps_lock) {
        register_code(KC_CAPSLOCK);
    } else {
        register_code(KC_LSFT);
    }
}

void sft_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (td_state_sft == DOUBLE_SINGLE_TAP) {
        if (!caps_lock) {
            caps_lock = true;
            wait_ms(DEBOUNCE_CAPS_DELAY);
            unregister_code(KC_CAPSLOCK);
            return;
        }
    }
    if (caps_lock) {
        caps_lock = false;
        wait_ms(DEBOUNCE_CAPS_DELAY);
        unregister_code(KC_CAPSLOCK);
    } else {
        unregister_code(KC_LSFT);
    }
}

// Add tap dance functions to tap dance array
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_SFT_CAPS]           =  ACTION_TAP_DANCE_FN_ADVANCED   (NULL, sft_finished, sft_reset),
};
