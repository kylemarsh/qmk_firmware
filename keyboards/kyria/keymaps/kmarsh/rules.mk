
LINK_TIME_OPTIMIZATION_ENABLE = yes # Reduces compiled size of firmware

DYNAMIC_MACRO_ENABLE          = no # Enables dynamic macros
ENCODER_ENABLE                = yes # Enables the use of one or more encoders
LEADER_ENABLE                 = no # Enables leader key feature
MOUSEKEY_ENABLE               = yes # Enables features to use keyboard as mouse
OLED_DRIVER_ENABLE            = yes # Enables the use of OLED displays
RGBLIGHT_ENABLE               = yes # Enable keyboard RGB underglow

SRC += encoders.c
#SRC += leader.c

# Unused Software Features
AUTO_SHIFT_ENABLE               = no  # Shift by holding the key
BOOTMAGIC_ENABLE                = no  # Configure firmware settings on the fly (deprecated?)
COMBO_ENABLE                    = yes  # Define chords that trigger different keypresses
COMMAND_ENABLE                  = no  # Commands for debug and configuration
CONSOLE_ENABLE                  = no
GRAVE_ESC_ENABLE                = no  # Share grave and esc on same key
KEY_LOCK_ENABLE                 = no  # Ability to lock the next key pressed
SPACE_CADET_ENABLE              = no  # Allows some interesting mod-tap keys
STENO_ENABLE                    = no
SWAP_HANDS_ENABLE               = no  # Allow key to swap halves for one-handed typing
TAP_DANCE_ENABLE                = no  # multi-tapping a single key produces different effects
TERMINAL_ENABLE                 = no  # Terminal interface to keyboard firmware
UNICODE_ENABLE                  = no  # Allow keys to output unicode chars
VELOCIKEY_ENABLE                = no  # Typing speed controls speed of RGB Efects
WPM_ENABLE                      = no  # Calculate rolling average typing speed

# Unsupported Hardware Features
AUDIO_ENABLE                    = no  # Enables any onboard speakers
BLUETOOTH_ENABLE                = no  # can connect over bluetooth
DIP_SWITCH_ENABLE               = no  # Support DIP switches to fiddle with configuration
HAPTIC_ENABLE                   = no  # Support haptic feedback
PS2_MOUSE_ENABLE                = no  # Support a PS/2 mouse (like a trackpoint)?

