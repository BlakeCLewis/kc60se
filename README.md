# kc60se json files that can be uploaded to https://config.qmk.fm/
========================

Author: [Blake C. Lewis](https://github.com/BlakeCLewis)

Hardware Supported: KC60SE

Hardware Availability: PCB is nolonger available

## Description:
  * kc60se_all.json (every possible key on the board, not really something you would use. Maybe use it for testing);
  * kc60se_ansi.json (the standard USA layout);
  * kc60se_hhkb.json (Happy Hacker KeyBoard layout, the ultimate layout for 60% keyboards, I have been using an HHKB since 1999);
  * kc60se_iso.json (the rest of the world standard).  ### not done yet

## https://config.qmk.fm/
  * Go to https://config.qmk.fm/;
  * press the [up arrow] next to [keyboard.json] and select one of these json files;
  * upload one of these json files ansi, hhkb, or iso;
  * look over the base layer (0),  pretty much a standard;
  * look over the function layer (1) and make some changes;
  * press [Compile];
  * if success, then press [Firmware] to download;
  * if you made changes, press the [down arrow] next to [keyboard.json], saving your updated configuration/json file;
  * https://beta.docs.qmk.fm/newbs/newbs_flashing use QMK Toolbox or dfu-programmer to flash the firmware.

## Technical specifications

 ### Enter the Bootloader:
  * unplug keyboard
  * while holding down 'Space' 'B', plug in USB cable and continue to hold for a few seconds or until leds go off;
  * Linux 'lsusb' should report '03eb:2ff4 Atmel Corp. atmega32u4 DFU bootloader' instead of 'feed 6060';
  * in bootloader mode, LEDs are off, and keyboard does not work;
  * if for some reason that doesn't work, (CAREFUL) while keyboard is plugged in, momentary jump pad 5 to 6 to enter bootloader;
  * flashing the firmware through a USB HUB produced errors. 

 ### DIP switches enable/disable keys K41 and K4C the second keys from the ends on the bottom row:
  * K41/K4C are usually WIN/GUI and will disrupt your gaming zen;

 ```
  dip      keys
 #1  #2  K41 K4C
  1   1   1   1    both keys enabled
  1   0   0   1
  0   1   1   0
  0   0   0   0    both keys disabled
  ```

 ### 6 pin SPI header next to the Atmega32u4 can be used to enter the bootloader(momentary short 5 to 6):

  ```
  2 4 6
  : : :
  1 3 5
  ```
  ```
  1 - B3      MISO (SQUARE PAD, column 13)
  2 - VCC
  3 - B1      SCLK (column 7)
  4 - B2      MOSI (caplock led)
  5 - Reset - momentary jump pin 5 to 6 to enter Bootloader
  6 - Ground
  ```
I think the SPI functionallity can be used to load a bootloader.
