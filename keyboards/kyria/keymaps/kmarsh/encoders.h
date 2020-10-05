// Encoder tap functions
#define KC_BSE_E1             KC_MUTE
#define KC_BSE_E2             KC_MPLY

#define KC_SYM_E1             KC_MPRV
#define KC_SYM_E2             KC_MNXT

#define KC_PAD_E1             KC_NO
#define KC_PAD_E2             KC_NO

#define KC_NAV_E1             KC_MPLY
#define KC_NAV_E2             KC_NO

#define KC_GAM_E1             RGB_TOG
#define KC_GAM_E2             KC_MUTE

// Required for alt-tab function
void matrix_scan_encoders(void);
