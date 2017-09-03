QMK Firmware for KC60 SE keyboard pcb
========================

 KC60 SE is a common 60% PCB.
 A clone of GH60 with minor differences. 
 It can be set up as ANSI, ISO and HHKB

  * Hardware Supported:  KC60 SE pcb by NPKC
  * Keyboard Maintainer: Blake Lewis
  * [KC60 SE is available on Aliexpress](https://www.aliexpress.com/store/product/Free-shipping-GH60-PCB-KC60-SE-Fully-Programmable-For-DIY-Mechanical-Keyboard-Poker-Faceu-HHKB-Support/429151_32799437588.html?spm=2114.12010608.0.0.2995e5c0hNRgMH)

 See [build environment setup](https://docs.qmk.fm/build_environment_setup.html) and [make instructions](https://docs.qmk.fm/make_instructions.html) for more information.

 After setting up the QMK build environment, assuming qmk is in qmk_firmware:
 * ```cd qmk_firmware/keyboards```
 * ```mkdir kc60se```
 * ```cd kc60se```
 * ```git clone git@github.com:BlakeCLewis/kc60se.git .```

## KC60 SE Information
  Column pin configuration
  * col 0-13
  * pin: F0 F1 E6 C7 C6 B6 D4 B1 B7 B5 B4 D7 D6 B3
   
  Row pin configuration
  * row 0-4
  * pin: D0 D1 D2 D3 D5

  LED pins
  * B2 Capslock LED
  * F5 Backlight LEDs

  To enter into the bootloader:
  * While holding down 'Space' and 'B', plug in USB cable and continue to hold for 8 seconds;
  * 'lsusb' should report 'ATMEL Inc.' instead of 'feed 6060';
  * If for some reason that doesn't work momentary jump pads 5 &amp; 6 to enter bootloader;
  * 6 pin header next to Atmega32u4
    ![:::](https://i.imgur.com/SGmCW3h.jpg)
    ```
    2 4 6
    : : :
    1 3 5
    ```
    ```
    1 - B3 (square pad)
    2 - VCC
    3 - B1
    4 - B2
    5 - Reset
    6 - Ground
    ```

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
  ### HHKB/Querty - layer 1 - Q/W are backlight codes

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
  * Alternately override BOOTMAGIC to use space + rgui instead of space + lgui
  * Backlight patterns?
  * Backlight indicates layer? not much to do with one pin to rule them all.


  [default layout](http://i.imgur.com/Y2xLF59.png)
  
  [KC60 SE backside](http://i.imgur.com/yrtG6N0.png) showing the pads to jump if magicboot is borked.
