#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _LOWER,
    _UPPER
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
    [_BASE] = LAYOUt(
        KC_ESC, KC_Q,    KC_W,    KC_E,      KC_R,      KC_T,     KC_Y,     KC_U,     KC_I,      KC_O,     KC_P,      KC_BSPC,                   KC_7,   KC_8,   KC_9,
        KC_TAB,  KC_A,    KC_S,    KC_D,      KC_F,      KC_G,     KC_H,     KC_J,     KC_K,      KC_L,     KC_ENTER,                            KC_4,   KC_5,   KC_6,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,      KC_V,      KC_B,     KC_N,     KC_M,     KC_COMMA,  KC_DOT,   KC_RSFT,              KC_UP,        KC_1,   KC_2,   KC_3,
        KC_LCTL, KC_LGUI,         LT(_FN,KC_SPACE),      KC_SPC,    LT(_LOWER,KC_SPC), KC_LALT, LT(_UPPER,KC_MINS),     KC_LEFT,    KC_DOWN,    KC_RIGHT, KC_0,  KC_DOT
    ),
 
    [_FN] = LAYOUt(
        KC_ESC, KC_1,   KC_2,    KC_3,      KC_4,      KC_5,     KC_6,     KC_7,     KC_8,      KC_9,     KC_0,      KC_BSPC,     KC_7,   KC_8,   KC_9,
        KC_TAB,  KC_A,   KC_S,    KC_D,      KC_F,      KC_G,     KC_H,     KC_MINUS, KC_K,      KC_L,     KC_ENTER,      KC_4,   KC_5,   KC_6,
        KC_LSFT, KC_Z,   KC_X,    KC_C,      KC_V,      KC_B,     KC_NO,    KC_M,     KC_COMMA,  KC_DOT,   KC_RSFT,           KC_UP,       KC_1,   KC_2,   KC_3,
        KC_LCTL, KC_LGUI,         KC_NO, KC_SPC, KC_MINS,                KC_LALT,  KC_1,                KC_LEFT,   KC_DOWN,     KC_RIGHT, KC_0,  KC_DOT
    ),
 
    [_LOWER] = LAYOUt(
        KC_ESC,  KC_F1,  KC_F2,   KC_F3,     KC_F4,     KC_F5,    KC_F6,    KC_F7,    KC_F8,     KC_F9,    KC_F10,    KC_BSPC,      KC_7,   KC_8,   KC_9,
        KC_TAB,  KC_A,   KC_S,    KC_D,      KC_F,      KC_G,     KC_H,     KC_J,     KC_K,      KC_L,     KC_ENTER,      KC_4,   KC_5,   KC_6,
        KC_LSFT, RGB_TOG, RGB_SPD, RGB_HUD,   RGB_SAD,   RGB_VAD,  RGB_MOD,  KC_M,     KC_COMMA, KC_DOT, KC_RSFT,             KC_UP,        KC_1,   KC_2,   KC_3,
        KC_LCTL, KC_LGUI,         KC_SPACE,  KC_SPC,  KC_NO,                             KC_LALT,  KC_NO,               KC_LEFT,   KC_DOWN,      KC_RIGHT, KC_0,  KC_DOT
    ),

    [_UPPER] = LAYOUt(
        KC_ESC,  KC_F11, KC_F12,  KC_F13,    KC_F14,    KC_F15,   KC_F16,   KC_F17,   KC_F18,    KC_F19,   KC_0,    KC_BSPC,      KC_7,   KC_8,   KC_9,
        KC_TAB,  KC_A,   KC_S,    KC_D,      KC_F,      KC_G,     KC_H,     KC_J,     KC_K,      KC_L,     KC_ENTER,         KC_4,   KC_5,   KC_6,
        KC_LSFT, RGB_TOG, RGB_SPD, RGB_HUD,   RGB_SAD,   RGB_VAD,  RGB_MOD,  KC_M,     KC_COMMA,  KC_DOT, KC_RSFT,            KC_UP,        KC_1,   KC_2,   KC_3,
        KC_LCTL, KC_LGUI,         KC_SPACE,  KC_SPC,KC_SPC,                               KC_LALT,  KC_NO,               KC_LEFT,   KC_DOWN,      KC_RIGHT, KC_0,  KC_DOT
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}

