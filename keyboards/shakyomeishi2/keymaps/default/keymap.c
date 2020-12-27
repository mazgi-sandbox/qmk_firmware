/* Copyright 2019 Biacco42
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// ref. https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_macros
enum custom_keycodes {
  EMOJI_1 = SAFE_RANGE,
  EMOJI_2
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    case EMOJI_1:
      if (record->event.pressed) {
        // when pressed
        SEND_STRING(":simple_smile:");
      }
      break;
    case EMOJI_2:
  }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Base */
    COMNUM, COMPASS, KC_C, KC_D \
  )
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}

