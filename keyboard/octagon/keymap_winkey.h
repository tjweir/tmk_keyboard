#include "backlight.h"

//LALT,LALT,LALT,                  SPC,                FN9,FN0,LEFT,DOWN,RGHT),

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(\
        ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, PGUP,PAUS, \
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,DEL,  \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,HOME,  \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,PGDN,ENT, PGUP, \
        LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,UP,  PGDN,  \
        LALT, LGUI, 3,             SPC,                FN9,FN0,LEFT,DOWN,RGHT),
    KEYMAP(\
           SLEP,MYCM,WSCH,WHOM,MAIL,MUTE,VOLD,VOLU,MSEL,MSTP,MPLY,MPRV,MNXT,TRNS,TRNS, \
           FN1, FN2, FN3, FN4, FN5, FN6, FN7, FN8, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,SLCK,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPLY, \
           TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,VOLU,MSTP, \
           TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,MPRV,VOLD,MNXT),
    KEYMAP(\
           SLEP,MYCM,WSCH,WHOM,MAIL,MUTE,VOLD,VOLU,MSEL,MSTP,MPLY,MPRV,MNXT,TRNS,TRNS, \
           FN1, FN2, FN3, FN4, FN5, FN6, FN7, FN8, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,SLCK,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPLY, \
           TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,VOLU,MSTP, \
           TRNS,TRNS,TRNS,               MUTE,               TRNS,TRNS,MPRV,VOLD,MNXT)
};

static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_BACKLIGHT_TOGGLE(),
    [2] = ACTION_BACKLIGHT_LEVEL(BACKLIGHT_ALPHA),
    [3] = ACTION_BACKLIGHT_LEVEL(BACKLIGHT_MODNUM),
    [4] = ACTION_BACKLIGHT_LEVEL(BACKLIGHT_EXTRA),
    [5] = ACTION_BACKLIGHT_LEVEL(BACKLIGHT_FROW),
    [6] = ACTION_BACKLIGHT_LEVEL(BACKLIGHT_RGBRED),
    [7] = ACTION_BACKLIGHT_LEVEL(BACKLIGHT_RGBGREEN),
    [8] = ACTION_BACKLIGHT_LEVEL(BACKLIGHT_RGBBLUE),
    [9] = ACTION_LAYER_MOMENTARY(2)
};
