# KC60 SE
========================

  * Hardware Supported:  KC60 SE by NPKC
  * Keyboard Maintainer: Blake Lewis

  * [KC60 SE PCB is available on Aliexpress](https://www.aliexpress.com/store/product/Free-shipping-GH60-PCB-KC60-SE-Fully-Programmable-For-DIY-Mechanical-Keyboard-Poker-Faceu-HHKB-Support/429151_32799437588.html?spm=2114.12010608.0.0.2995e5c0hNRgMH)
  * [Back](http://i.imgur.com/yrtG6N0.png)
  * [Front](https://i.imgur.com/jw5prK8.jpg)

 See [build environment setup](https://docs.qmk.fm/build_environment_setup.html) and [make instructions](https://docs.qmk.fm/make_instructions.html) for more information.

 After setting up the QMK build environment, assuming qmk is in qmk_firmware:
  * ```cd qmk_firmware/keyboards```
  * ```mkdir kc60se```
  * ```cd kc60se```
  * ```git clone git@github.com:BlakeCLewis/kc60se.git .```
  * or ```git clone https://github.com/BlakeCLewis/kc60se.git .```
  * ```cd ../../```
  * ```make kc60se:default```
  * or ```make kc60se:hhkb_qwerty_fbr```

## Description:
  * 60% keyboard PCB;
  * clone of GH60 with minor differences;
  * supports ANSI, ISO, HHKB, and/or WKL  layouts.

## Technical specifications
 ### Column pin configuration:
  * col 0-13
  * pin: F0 F1 E6 C7 C6 B6 D4 B1 B7 B5 B4 D7 D6 B3
   
 ### Row pin configuration:
  * row 0-4
  * pin: D0 D1 D2 D3 D5

 ### LED pins (found these with Ohm meter):
  * B2 Capslock LED
  * F5 Backlight LEDs

 ### Unused pins (I can't find anthing connected to these pins):
  * B0 F4 F6 F7 E2

 ### DIP switches enable/disable keys K41 and K4C the second keys from the ends on the bottom row:
  * When there are three keys on each side of the space bar, the middle of each 3 (K41,K4C) are WIN/GUI keys that will pause games, these switches allows you to disable WIN/GUI during games;
  * default layout is "Win Key Less" (WKL), K41/K4C are LALT/RALT, so I have both dip switches in the ON position;
 ```
  dip      keys
 #1 #2   K41   K4C
  1  1    1     1    both keys enabled
  1  0    0     1   
  0  1    1     0
  0  0    0     0    both keys disabled

 ```

 ### 6 pin header next to the Atmega32u4:

  ![:::](https://i.imgur.com/SGmCW3h.jpg)
  ```
  2 4 6
  : : :
  1 3 5
  ```
  ```
  1 - B3    (square pad, column 13)
  2 - VCC
  3 - B1    (column 7)
  4 - B2    (backlight)
  5 - Reset
  6 - Ground
  ```

 ### Enter the Bootloader:
  * unplug keyboard
  * while holding down 'Space' &amp; 'B', plug in USB cable and continue to hold for 8 seconds;
  * 'lsusb' should report something like '03eb:2ff4 Atmel Corp. atmega32u4 DFU bootloader' instead of 'feed 6060';
  * LEDs should be off, and keyboard does not work;
  * if for some reason that doesn't work, (CAREFUL) while keyboard is plugged in, momentary jump pads 5 &amp; 6 to enter bootloader;
  * I found that flashing the firmware through a USB hub did not work consistantly. Most of the time it would finish with errors, but keyboard may partially work. If plugged into the computer it flashes with no errors.
