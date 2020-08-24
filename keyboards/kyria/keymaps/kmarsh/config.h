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

#pragma once

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
#endif

#ifdef RGBLIGHT_ENABLE
  #define RGBLIGHT_ANIMATIONS
  // TODO -- disable unwanted animations
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8

  // Better LED order for swirl effects
  #define RGBLIGHT_LED_MAP {0,1,2,9,8,7,4,3,5,6,19,18,17,10,11,12,15,16,14,13}
  // Better LED order for gradiant effects
  //#define RGBLIGHT_LED_MAP {9,8,6,7,5,3,2,4,1,0,10,12,13,11,14,16,17,15,18,19}
#endif

//#define MASTER_RIGHT
// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
#define SPLIT_USB_DETECT
#define NO_USB_STARTUP_CHECK

#ifdef LEADER_TIMEOUT
  #undef LEADER_TIMEOUT
#endif
#define LEADER_TIMEOUT  750
#define LEADER_PER_KEY_TIMING

#define TAPPING_TERM_PER_KEY
// Configs from Metheon that I may want to try out
#define PERMISSIVE_HOLD

#ifdef TAPPING_TERM
  #undef TAPPING_TERM
#endif
#define TAPPING_TERM 200

//#define MOUSEKEY_WHEEL_MAX_SPEED 12   // default is 8; higher is faster
//#define MOUSEKEY_WHEEL_TIME_TO_MAX 0  // disable accel; scroll at const speed

// TODO -- fiddle with mousekeys options
