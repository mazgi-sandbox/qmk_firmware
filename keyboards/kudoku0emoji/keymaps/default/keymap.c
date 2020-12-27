/* Copyright 2020 Hidenori Matsuki
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    EMOJI_PLUS1 = SAFE_RANGE,
    EMOJI_SIMPLE_SMILE,
    EMOJI_CLAP,
    EMOJI_PRAY,
    EMOJI_HEART,
    EMOJI_SPARKLES,
    EMOJI_SUGOI,
    EMOJI_WWWW,
    EMOJI_ANGER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        EMOJI_PLUS1, EMOJI_PRAY, EMOJI_SUGOI,
        EMOJI_SIMPLE_SMILE, EMOJI_HEART, EMOJI_WWWW,
        EMOJI_CLAP, EMOJI_SPARKLES, EMOJI_ANGER
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case EMOJI_PLUS1:
            if (record->event.pressed) {
                SEND_STRING(":+1:");
            } else {
                // do nothing
            }
            break;
        case EMOJI_SIMPLE_SMILE:
            if (record->event.pressed) {
                SEND_STRING(":simple_smile:");
            } else {
                // do nothing
            }
            break;
        case EMOJI_CLAP:
            if (record->event.pressed) {
                SEND_STRING(":clap:");
            } else {
                // do nothing
            }
            break;
        case EMOJI_PRAY:
            if (record->event.pressed) {
                SEND_STRING(":pray:");
            } else {
                // do nothing
            }
            break;
        case EMOJI_HEART:
            if (record->event.pressed) {
                SEND_STRING(":heart:");
            } else {
                // do nothing
            }
            break;
        case EMOJI_SPARKLES:
            if (record->event.pressed) {
                SEND_STRING(":sparkles:");
            } else {
                // do nothing
            }
            break;
        case EMOJI_SUGOI:
            if (record->event.pressed) {
                SEND_STRING(":sugoi:");
            } else {
                // do nothing
            }
            break;
        case EMOJI_WWWW:
            if (record->event.pressed) {
                SEND_STRING(":wwww:");
            } else {
                // do nothing
            }
            break;
        case EMOJI_ANGER:
            if (record->event.pressed) {
                SEND_STRING(":anger:");
            } else {
                // do nothing
            }
            break;
    }
    return true;
}
