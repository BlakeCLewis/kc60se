/*
Copyright 2017 Blake C, Lewis

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "kc60se.h"
#include "action_layer.h"

#define _DEFAULT 0
#define _FN1 1
#define _FN2 2
#define _FN3 3

#define xxxxxx KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* layer 0 - default 
 *,--------------------------------------------------------------------------.
 *| Esc|  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = |  \ |  ` |
 *|----=---------------------------------------------------------------------+
 *| Tab   |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] | Bksp |
 *|--------------------------------------------------------------------------+
 *| Ctrl   |  A |  S |  D |  F |  G |  H |  J |  K |  L |  ; |  ' |  Enter   |
 *|--------------------------------------------------------------------------+
 *| Shift    |  Z |  X |  C |  V |  B |  N |  M |  , |  . |  / | RShift | Fn1|
 *|--------------------------------------------------------------------------+
 *|  Fn2  |LAlt| Fn1  |               Space              | RGui  |RAlt| Fn3  |
 *`--------------------------------------------------------------------------'
 */
/* Layer 1
 *,--------------------------------------------------------------------------.
 *|    | F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| F11| F12|    | Ins|
 *|--------------------------------------------------------------------------+
 *| CAPS |BlOn|BlUp|    |    |    |    |    | Psc|Slck|Paus| Up |    |  Del  |
 *|--------------------------------------------------------------------------+
 *|       |Vol-|Vol+|Mute|    |    | *  | /  |Home|PgUp|Left|Rite|           |
 *|--------------------------------------------------------------------------+
 *|         |Prev|Play|Next|    |    | +  | -  |End |PgDn|Down|         |    |
 *|--------------------------------------------------------------------------+
 *|       |    |      |                                 | Stop |    |        |
 *`--------------------------------------------------------------------------'
 */
  [_DEFAULT] = KEYMAP_HHKB( /* HHKB QWERTY w/full bottom row */
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV, \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC, \
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(_FN1), \
      MO(_FN2),KC_LALT, MO(_FN1),                 KC_SPC,                   xxxxxx,  KC_RGUI, KC_RALT, MO(_FN2) \
      ),
  [_FN1] = KEYMAP_HHKB( /* Layer 1 */
      xxxxxx,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, xxxxxx, KC_INS, \
      KC_CAPS, BL_ON,   BL_STEP, xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   xxxxxx, KC_DEL, \
      xxxxxx,  KC_VOLD, KC_VOLU, KC_MUTE, xxxxxx, xxxxxx, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, xxxxxx, \
      xxxxxx,  KC_MPRV, KC_MPLY, KC_MNXT, xxxxxx, xxxxxx, KC_PPLS, KC_PMNS, KC_END,  KC_PGDN, KC_DOWN, xxxxxx,  xxxxxx, \
      xxxxxx,  xxxxxx,  xxxxxx,                   xxxxxx,                   xxxxxx,  KC_MSTP, xxxxxx,  xxxxxx \
      ),
  [_FN2] = KEYMAP_HHKB( /* Layer 2 */
      xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx, \
      xxxxxx,  xxxxxx,  KC_UP,   xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, \
      xxxxxx,  KC_LEFT, KC_DOWN, KC_RGHT, xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, \
      xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, \
      xxxxxx,  xxxxxx,  xxxxxx,                   xxxxxx,                   xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx \
      ),
  [_FN3] = KEYMAP_HHKB( /* Layer 3 */
      xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx, \
      xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, \
      xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, \
      xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, \
      xxxxxx,  xxxxxx,  xxxxxx,                   xxxxxx,                   xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx \
      )
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
  return MACRO_NONE;
};
/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
 switch (keycode) {
    case FOO:
      if (record->event.pressed) {
        // Do something when pressed
      } else {
        // Do something else when release
      }
      return false; // Skip all further processing of this key
    case KC_PENTER:
      // Play a tone when penter is pressed
      if (record->event.pressed) {
        PLAY_NOTE_ARRAY(tone_qwerty);
      }
      return true; // Let QMK send the enter press/release events
  }
}

void led_set_user(uint8_t usb_led) {

}
*/
