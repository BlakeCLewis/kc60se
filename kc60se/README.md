KC60 SE keyboard firmware
========================

 KC60 SE is a common 60% PCB.
 A clone of GH60 with minor differences. 
 It can be set up as ANSI, ISO and HHKB

 ##Hardware Supported:  KC60 SE pcb
 ##Keyboard Maintainer: Blake Lewis
 ##[KC60 SE is available on Aliexpress](https://www.aliexpress.com/store/product/Free-shipping-GH60-PCB-KC60-SE-Fully-Programmable-For-DIY-Mechanical-Keyboard-Poker-Faceu-HHKB-Support/429151_32799437588.html?spm=2114.12010608.0.0.2995e5c0hNRgMH)

 See [build environment setup](https://docs.qmk.fm/build_environment_setup.html) then [make instructions](https://docs.qmk.fm/make_instructions.html) for more information.

## KC60 SE Information

  Column pin configuration
  * col: 0   1   2   3   4   5   6   7   8   9   10  11  12  13
  * pin: F0  F1  E6  C7  C6  B6  D4  B1  B7  B5  B4  D7  D6  B3  (Rev.C)
   
  Row pin configuration
  * row: 0   1   2   3   4
  * pin: D0  D1  D2  D3  D5

  LED pins
  * B2 Capslock LED
  * F5 Backlight LEDs (all but Capslock)

  To enter into the bootloader:
  *   While hold down 'Space' and 'B', plug in USB cable and continue to hold for 8 seconds.
  *   'lsusb' should report 'ATMEL Inc.' instead of 'feed 6060'
  *   If for some reason that doesn't work(you messed up the keymap bad enough) there are [pads](http://i.imgur.com/i1SU8Fn.jpg) you can short out on the pcb:

  ### HHKB/Querty - default layer - alt/fn0/space/gui/alt
```
     ,--------------------------------------------------------------------------.
     | esc|  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = |  \ |  ` |
     |----=---------------------------------------------------------------------+
     | tab   |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] | bksp |
     |--------------------------------------------------------------------------+
     | ctrl   |  A |  S |  D |  F |  G |  H |  J |  K |  L |  ; |  ' |  enter   |
     |--------------------------------------------------------------------------+
     | lshift   |  Z |  X |  C |  V |  B |  N |  M |  , |  . |  / | rshift | fn0|
     |--------------------------------------------------------------------------+
             |lalt| fn0  |               space              | rgui  |ralt|
             `-----------------------------------------------------------'
```
  ### HHKB/Querty - layer 1 - Q/W are backlight switches

```
     ,--------------------------------------------------------------------------.
     |    | f1 | f2 | f3 | f4 | f5 | f6 | f7 | f8 | f9 | f10| f11| f12|    | ins|
     |--------------------------------------------------------------------------+
     | caps |blon|blup|    |    |    |    |    | psc|slck|paus| up |    |  del  |
     |--------------------------------------------------------------------------+
     |       |vol-|vol+|mute|    |    | *  | /  |home|pgup|left|rite| penter    |
     |--------------------------------------------------------------------------+
     |         |mprv|mply|mnxt|    |    | +  | -  |end |pgdn|down|         |    |
     |--------------------------------------------------------------------------+
             |    |      |                                 | mstop|    |
             `---------------------------------------------------------'
``` 
  Features to add:
  *   Disable/Enable rgui key for gaming. Use MAGIC_NO_GU/MAGIC_UNNO_GUII in toggle function?
  *   Alternately override BOOTMAGIC to use space + rgui instead of space + lgui
  *   Backlight patterns?
  *   Backlight indicates layer? not much to do with one pin to rule them all.
   
   
  [default layout](http://i.imgur.com/Y2xLF59.png)
  
  [KC60 SE backside](http://i.imgur.com/yrtG6N0.png) showing the pads to jump if magicboot is borked.
  
 
 
 

 
 
 

 
 
 
 
 

