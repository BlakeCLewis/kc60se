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

#ifndef KC60SE_H
#define KC60SE_H

#include "quantum.h"

inline void kc60se_caps_led_on(void)  { DDRB |=  (1<<2); PORTB &= ~(1<<2); }
inline void kc60se_caps_led_off(void) { DDRB &= ~(1<<2); PORTB &= ~(1<<2); }

/* kc60se keymap definition macro
 * K2C, K31 and  K3C are keys for ISO
 * This is the row/column wiring, which different from the physical layout.
 */
// All pads defined in logical layout. The KC_NO in this section are padless. 
#define KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, \
    K40, K41, K42,           K45,                K49, K4A, K4B, K4C, K4D  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D }, \
    { K40, K41, K42, KC_NO,KC_NO,K45,KC_NO,KC_NO,KC_NO,K49,K4A,K4B,K4C,K4D }  \
}

/* ANSI
 * pads not used are KC_NO, (K49, K31, K2C, K3C)
*/
#define KEYMAP_ANSI( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, \
    K40, K41, K42,           K45,                     K4A, K4B, K4C, K4D  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,KC_NO,K2D }, \
    { K30,KC_NO,K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,KC_NO,K3D }, \
    { K40, K41, K42, KC_NO,KC_NO,K45, KC_NO,KC_NO,KC_NO,K4A, K4B,K4C,  K4D }  \
}

/* HHKB
 *  K2C & K31 are represented as KC_NO, otherwise this is
 *  the best representation of the physical layout, (K49 on top right).
 *  The KC_NOs on the space row do not have pads
 */
#define KEYMAP_HHKB( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K49,\
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3D, K3C, \
    K40, K41, K42,           K45,                     K4A, K4B, K4C, K4D  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,KC_NO,K2D }, \
    { K30,KC_NO,K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D }, \
    { K40, K41,K42,KC_NO,KC_NO,K45,KC_NO,KC_NO,KC_NO,K49,K4A,K4B, K4C, K4D }  \
}

#endif
