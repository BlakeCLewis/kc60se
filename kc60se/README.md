KC60 SE keyboard firmware
========================

KC60 SE is a common 60% PCB. Clone of GH60 with some minor differences.
 it can be set up as ANSI, ISO and HHKB wiring

Hardware Supported: KC60 SE pcb
[Available:](https://www.aliexpress.com/store/product/Free-shipping-GH60-PCB-KC60-SE-Fully-Programmable-For-DIY-Mechanical-Keyboard-Poker-Faceu-HHKB-Support/429151_32799437588.html?spm=2114.12010608.0.0.2995e5c0hNRgMH)
Keyboard Maintainer: Blake Lewis

See [build environment setup](https://docs.qmk.fm/build_environment_setup.html) then the [make instructions](https://docs.qmk.fm/make_instructions.html) for more information.
 [KC60 SE backside](http://imgur.com/a/tBV1g) showing the pads to jump if magicboot is borked.

## KC60 SE Hardware Information

  /* Column pin configuration
  * col: 0   1   2   3   4   5   6   7   8   9   10  11  12  13
  * pin: F0  F1  E6  C7  C6  B6  D4  B1  B7  B5  B4  D7  D6  B3  (Rev.C)
  */
   
  /* Row pin configuration
  * row: 0   1   2   3   4
  * pin: D0  D1  D2  D3  D5
  */

  /* 
  * B2 Capslock LED
  * F5 Backlight LEDs (all but Capslock)

  * To enter into the bootloader:
  *   While hold down 'Space' and 'B', plug in USB cable and continue to hold for 8 seconds.
  *   'lsusb' should report 'ATMEL Inc.' instead of 'feed 6060'
  *   If for some reason that doesn't work(you messed up the keymap bad enough) there are pads you can short out on the pcb:
  *   [here:](http://i.imgur.com/i1SU8Fn.jpg)

 ## HHKB/Querty - default layer
   alt/fn0/space/gui/alt
 ,--------------------------------------------------------------------------.
 | Esc|  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = |  \ |  ` |
 |----=---------------------------------------------------------------------+
 | Tab   |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] | Bksp |
 |--------------------------------------------------------------------------+
 | Ctrl   |  A |  S |  D |  F |  G |  H |  J |  K |  L |  ; |  ' |  Enter   |
 |--------------------------------------------------------------------------+
 | Shift    |  Z |  X |  C |  V |  B |  N |  M |  , |  . |  / | RShift | Fn0|
 |--------------------------------------------------------------------------+
         |LAlt| Fn0  |               Space              | RGui  |RAlt|
         `-----------------------------------------------------------'

 ## HHKB/Querty - layer 1
  Q/W are BL_ON(max, previous toggle) and BL_STEP(increment and loops back)
 ,--------------------------------------------------------------------------.
 |    | F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| F11| F12|    | Ins|
 |--------------------------------------------------------------------------+
 | CAPS |BlOn|BlUp|    |    |    |    |    | Psc|Slck|Paus| Up |    |  Del  |
 |--------------------------------------------------------------------------+
 |       |Vol-|Vol+|Mute|    |    | *  | /  |Home|PgUp|Left|Rite|           |
 |--------------------------------------------------------------------------+
 |         |Prev|Play|Next|    |    | +  | -  |End |PgDn|Down|         |    |
 |--------------------------------------------------------------------------+
         |    |      |                                 | Stop |    |
         `---------------------------------------------------------'
 
  Features to add:
  *   DISABLE/ENABLE RGUI key for gaming. Use MAGIC_NO_GU/MAGIC_UNNO_GUII in toggle function?
  *   Alternately override BOOTMAGIC to use SPACE + RGUI instead of SPACE + LGUI
  *   Backlight patterns?
  *   Backlight indicates layer? not much to do with one pin to rule them all.
   
   
  [default layout](http://i.imgur.com/Y2xLF59.png)
  
  
 
 
 

 
 
 

 
 
 
 
 

