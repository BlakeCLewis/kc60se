# Build Options
#   yes/no to enable/disable
#
NKRO_ENABLE          = yes   # USB Nkey Rollo - can be changed to 6KRO(to use kb in bios) with SPACE & N bootmagic
BOOTMAGIC_ENABLE     = yes   # Space & B to enter bootloader
KEYBOARD_LOCK_ENABLE = yes   # ? Allow locking of keyboard via magic key
EXTRAKEY_ENABLE      = yes   # Enable for MS Windows, Audio (and other) control, Windows does not use KC_VOL* KC_MUTE(+450)
BACKLIGHT_ENABLE     = yes   # BL_ON, BL_STEP
#Do not enable SLEEP_LED_ENABLE & BACKLIGHT_ENABLE, they use same timer.
SLEEP_LED_ENABLE     = no    # Breathing sleep LED during USB suspend
AUDIO_ENABLE         = no    # Audio output on port C6
BLUETOOTH_ENABLE     = no    # Enable Bluetooth with the Adafruit EZ-Key HID
CONSOLE_ENABLE       = no    # Console for debug(+400)
COMMAND_ENABLE       = no    # Commands for debug and configuration
FAUXCLICKY_ENABLE    = no    # Use buzzer to emulate clicky switches
MIDI_ENABLE          = no    # MIDI controls
MOUSEKEY_ENABLE      = no    # Mouse keys(+4700)
UNICODE_ENABLE       = no    # Unicode
