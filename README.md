# kc60se json files that can be uploaded to https://config.qmk.fm/
========================

Author: [Blake C. Lewis](https://github.com/BlakeCLewis)
Hardware Supported: KC60SE
Hardware Availability: PCB is nolonger available

## Description:
  * kc60se_all.json
  * kc60se_ansi.json
  * kc60se_hhkb.json
  * kc60se_iso.json

Go to  [https://config.qmk.fm/] https://config.qmk.fm/
you can upload one of these json files

## Technical specifications

 ### Enter the Bootloader:
  * unplug keyboard
  * while holding down 'Space' &amp; 'B', plug in USB cable and continue to hold for 8 seconds or until leds go off;
  * 'lsusb' should report '03eb:2ff4 Atmel Corp. atmega32u4 DFU bootloader' instead of 'feed 6060';
  * in bootloader LEDs are off &amp; keyboard does not work;
  * if for some reason that doesn't work, (CAREFUL) while keyboard is plugged in, momentary jump pads 5 &amp; 6 to enter bootloader;
  * flashing the firmware through a USB HUB did not work consistantly. Most of the time it would finish with errors.

 ### DIP switches enable/disable keys K41 and K4C the second keys from the ends on the bottom row:
  * K41/K4C are WIN/GUI and will disrupt games;
  * Disabling these 2 gui keys can be done in Command mode without using the switches.

 ```
  dip      keys
 #1  #2  K41 K4C
  1   1   1   1    both keys enabled
  1   0   0   1
  0   1   1   0
  0   0   0   0    both keys disabled
  ```

 ### 6 pin header next to the Atmega32u4:

  ```
  2 4 6
  : : :
  1 3 5
  ```
  ```
  1 - B3    (square pad, column 13)
  2 - VCC
  3 - B1    (column 7)
  4 - B2    (capslock led)
  5 - Reset   | momentary jump 5 and 6
  6 - Ground  | to enter Bootloader
  ```
