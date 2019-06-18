#pragma once

//#define MANUFACTURER    TheVan Keyboards
//#define PRODUCT         MiniVan
//#define DESCRIPTION     Hotswap MiniVan 40%

//#ifdef MOUSEKEY_ENABLE
  //#undef MOUSEKEY_INTERVAL
  //#define MOUSEKEY_INTERVAL 1

  //#undef MOUSEKEY_TIME_TO_MAX
  //#define MOUSEKEY_TIME_TO_MAX 150

  //#undef MOUSEKEY_MAX_SPEED
  //#define MOUSEKEY_MAX_SPEED 3

  //#undef MOUSEKEY_MOVE_DELTA
  //#define MOUSEKEY_MOVE_DELTA 4

  //#undef MOUSEKEY_DELAY
  //#define MOUSEKEY_DELAY 0
//#endif

// Selection of RGBLIGHT MODE to use.
#if defined(LED_ANIMATIONS)
   #define RGBLIGHT_EFFECT_BREATHING
   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
   //#define RGBLIGHT_EFFECT_SNAKE
   #define RGBLIGHT_EFFECT_KNIGHT
   //#define RGBLIGHT_EFFECT_CHRISTMAS
   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
   //#define RGBLIGHT_EFFECT_RGB_TEST
   //#define RGBLIGHT_EFFECT_ALTERNATING
#endif

//#define BACKLIGHT_LEVELS  1
//#define BACKLIGHT_PIN B7
//#define USB_MAX_POWER_CONSUMPTION 100
#define TAPPING_TERM      175
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#ifdef RGBLIGHT_ENABLE
    #define RGB_DI_PIN D0
    #define RGBLIGHT_TIMER
    #define RGBLED_NUM 3
    //#define RGBLIGHT_CUSTOM_LED_INIT
    //#define RGBLIGHT_SLEEP
#endif
