MCU = atmega32u4
F_CPU = 16000000
ARCH = AVR8
F_USB = $(F_CPU)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT
OPT_DEFS += -DBOOTLOADER_SIZE=4096

# Build Options
#  lowercase yes/no to enable/disable
NKRO_ENABLE          = yes  # USB Nkey Rollover - https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BOOTMAGIC_ENABLE     = yes  # Virtual DIP switch configuration(+1000) needed for SPACE+B to enter bootloader, else required to jump pads on pcb
EXTRAKEY_ENABLE      = yes  # Enable for MS Windows Audio (and other) control, Windows does not use KC_VOL* KC_MUTE(+450)
KEYBOARD_LOCK_ENABLE = yes  # Allow locking of keyboard via magic key
BACKLIGHT_ENABLE     = yes  # Enable keyboard backlight functionality
# Do not enable both BACKLIGHT_ENABLE and SLEEP_LED_ENABLE, they use the same timer
SLEEP_LED_ENABLE     = no   # Breathing sleep LED during USB suspend
BLUETOOTH_ENABLE     = no   # Bluetooth with the Adafruit EZ-Key HID
CONSOLE_ENABLE       = no   # Console for debug(+400)
FAUXCLICKY_ENABLE    = no   # Use buzzer to emulate clicky switches
COMMAND_ENABLE       = no   # Commands for debug and configuration
KEYLOCK_ENABLE       = no   # KC_LOCK will hold down next key pressed - https://github.com/qmk/qmk_firmware/blob/master/docs/key_lock.md
MIDI_ENABLE          = no   # MIDI controls
MOUSEKEY_ENABLE      = no   # Mouse keys(+4700)
UNICODE_ENABLE       = no   # Unicode
