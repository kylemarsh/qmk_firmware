# KMarsh's Kyria Layout

## Special Thanks

[Metheon](https://github.com/metheon/qmk_firmware/blob/metheon/users/metheon/readme.md)'s
layout was an enormous source of inspiration and example code

## Notes

* Use Mod-Tap on letter keys to hold my window manager modifier sequences?
  * `w` for `CMD+CTL` (then `hjklyon.u` moves the active window to stations)
  * `s` for holding `CTL` and moving to a layer with arrow keys under `hjkl`
  * Modifier sequences can be adjusted (hammerspoon) if desired/needed
  * Look into better dual-monitor support for hammerspoon at some point and add this
* Combo thoughts
  * move backspace and space to "fs" and "jl" combos?
* Encoder thoughts:
  * BASE:
    * L: Vol | Mute
    * R: Scroll wheel | ???
  * LOWER:
    * L: --
    * R: Alt-Tab | ???
  * RAISE:
    * L: Cycle Spaces | ??? (pick up / drop window?)
    * R: --
  * ADJUST:
    * L: HSV adjustments | Change target adjustment
      * Look into code for making "tap" change the rotary behavior (update stateful variable?)
    * R: Cycle RGB mode | RGB On/Off
  * EXTEND:
    * L: Media Next/Prev | Play/Pause
    * R: ??? | ???
  * NUMPAD:
    * L: --
    * R: Zoom | ???
  * FUNPAD:
    * L: Screen Brightness | ???
    * R: --
  * GAMEPAD:
    * L: ??? | ???
    * R: --

Notes on understanding Metheon's layout
* Layers:
  * Dedicated Layer Toggle keys on BASE to get to
    * RAISE (bksp -- accessed from right hand)
    * LOWER (del -- accessed from left hand)
    * EXTEND (spc | enter -- accessed from either hand)
    * FUNPAD (slsh)
    * NUMPAD (z)
  * Tri-layer-toggle from base to get to ADJUST
  * ADJUST layer has key to make GAME layer sticky
  * GAME layer has key to return to BASE
  * Modifiers are transparent on raise/lower/adj to base
  * Modifiers are not present on extend and above
* Modifiers:
  * Dedicated Mod Toggle key for CTL on both sides
  * Tap Dance keys for GUI and ALT on each side -- left side is ALT first, then GUI; right side is opposite
  * Has unused tapdance to make CTL -> CTL+SFT; may want that with cmd?


