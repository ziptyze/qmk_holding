#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_TRNS, KC_P7  , KC_TRNS,     KC_TRNS, KC_P8  , KC_TRNS,     KC_TRNS, KC_P9  , KC_TRNS,     KC_TRNS, KC_PSLS, KC_TRNS,
        KC_TRNS, KC_P4  , KC_TRNS,     KC_TRNS, KC_P5  , KC_TRNS,     KC_TRNS, KC_P6  , KC_TRNS,     KC_TRNS, KC_PAST, KC_TRNS,
        KC_TRNS, KC_P1  , KC_TRNS,     KC_TRNS, KC_P2  , KC_TRNS,     KC_TRNS, KC_P3  , KC_TRNS,     KC_TRNS, KC_PMNS, KC_TRNS,
        KC_TRNS, KC_P0  , KC_TRNS,     KC_TRNS, KC_PDOT, KC_TRNS,     KC_TRNS, KC_PENT, KC_TRNS,     KC_TRNS, KC_PPLS, KC_TRNS
    ),

    [1] = LAYOUT_ortho_4x4(
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [2] = LAYOUT_ortho_4x4(
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT_ortho_4x4(
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),4,0));
        } else {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),4,1));
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),4,2));
        } else {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),4,3));
        }
    }
    } else if (index == 2 { /* Third encoder */
        if (clockwise) {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),5,0));
        } else {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),5,1));
        }
    }
    } else if (index == 3) { /* Fourth encoder */
        if (clockwise) {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),5,2));
        } else {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),5,3));
        }
    }
    return false;
} 