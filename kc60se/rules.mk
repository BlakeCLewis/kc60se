# MCU name
#MCU = at90usb1287
MCU = atmega32u4

# Processor frequency.
#     This will define a symbol, F_CPU, in all source code files equal to the
#     processor frequency in Hz. You can then use this symbol in your source code to
#     calculate timings. Do NOT tack on a 'UL' at the end, this will be done
#     automatically to create a 32-bit value in your source code.
#
#     This will be an integer division of F_USB below, as it is sourced by
#     F_USB after it has run through any CPU prescalers. Note that this value
#     does not *change* the processor frequency - it should merely be updated to
#     reflect the processor speed set externally so that the code can use accurate
#     software delays.
F_CPU = 16000000


#
# LUFA specific
#
# Target architecture (see library "Board Types" documentation).
ARCH = AVR8

# Input clock frequency.
#     This will define a symbol, F_USB, in all source code files equal to the
#     input clock frequency (before any prescaling is performed) in Hz. This value may
#     differ from F_CPU if prescaling is used on the latter, and is required as the
#     raw input clock is fed directly to the PLL sections of the AVR for high speed
#     clock generation for the USB and other AVR subsections. Do NOT tack on a 'UL'
#     at the end, this will be done automatically to create a 32-bit value in your
#     source code.
#
#     If no clock division is performed on the input clock inside the AVR (via the
#     CPU clock adjust registers or the clock division fuses), this will be equal to F_CPU.
F_USB = $(F_CPU)

# Interrupt driven control endpoint task(+60)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT


# Boot Section Size in *bytes*
#   Teensy halfKay   512
#   Teensy++ halfKay 1024
#   Atmel DFU loader 4096
#   LUFA bootloader  4096
#   USBaspLoader     2048
OPT_DEFS += -DBOOTLOADER_SIZE=4096


# Build Options
#   yes/no to enable/disable
#   lowercase!

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

