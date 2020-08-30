enum tap_dance_functions {
    //TD_CONTROL_CTRLSHIFT = 0,   // Once: Ctrl. Twice: ctrl+shift
    //TD_ALT_GUI,                 // Once: Alt. Twice: Toggle numpad layer
    //TD_GUI_ALT,                 // Once: Gui. Twice: Toggle funpad layer
    TD_SFT_CAPS,                // Once: Shift. Twice: Capslock
};

/*#define TD_CTRL      TD(TD_CONTROL_CTRLSHIFT)
#define ALT_GUI      TD(TD_ALT_GUI)
#define GUI_ALT      TD(TD_GUI_ALT)*/
#define KC_SFT_CPS   TD(TD_SFT_CAPS)

typedef enum {
    SINGLE_TAP,
    SINGLE_HOLD,
    DOUBLE_SINGLE_TAP,
} td_state_t;
