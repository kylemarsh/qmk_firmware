#ifndef CONFIG_H
#define CONFIG_H
#include "config_common.h"
#define MANUFACTURER    TheVan Keyboards
#define PRODUCT         MiniVan
#define DESCRIPTION     Hotswap MiniVan 40%


#define BACKLIGHT_LEVELS  1
#define BACKLIGHT_PIN B7
#define USB_MAX_POWER_CONSUMPTION 100
#define TAPPING_TERM      175
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
#define RGB_DI_PIN D0
#define RGBLED_NUM 3
#define RGBLIGHT_CUSTOM_LED_INIT
#define RGBLIGHT_SLEEP
#endif
