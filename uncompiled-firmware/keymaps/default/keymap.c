// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint8_t led_sequence[6] = {0, 3, 4, 1, 2, 5};

uint16_t anim_timer = 0;
uint8_t current_step = 0;

void matrix_scan_user(void) {
    if 
    (timer_elapsed(anim_timer) > 300) {
        anim_timer = timer_read();
        rgblight_setrgb(0, 0, 0);
        uint8_t target_led = led_sequence[current_step];
        rgblight_setrgb_at(34, 139, 34, target_led);
        current_step = (current_step + 1) % 6;
    }
}

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();
    anim_timer = timer_read();
}

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  }
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_A, KC_B,
        KC_C, KC_D
    )
};
