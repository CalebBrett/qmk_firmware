#include QMK_KEYBOARD_H


#define _MAIN 0
#define _ALTERNATE 1
#define _APPS 2
#define _STENO 3

// changed #define TAPPING_TOGGLE 2 from 5 in action_tapping.h to toggle with TT() in only 2 presses

enum custom_keycodes {
    MAIN = SAFE_RANGE,
    ALTERNATE,
    APPS,
    STENO,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAIN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
<<<<<<< HEAD
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   TT(_ALTERNATE),   OSL(_APPS),KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_MINS,
=======
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   MO(_ALTERNATE),   OSL(_APPS),KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_MINS,
>>>>>>> master
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_LALT,   KC_SPC,                   KC_ENT,  KC_LBRC, KC_RBRC
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ALTERNATE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_F12,  KC_F1,   KC_F2,   KC_F3,  KC_F4,   KC_F5,                                KC_F6,   KC_F7,   KC_F8,  KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
<<<<<<< HEAD
<<<<<<<< HEAD:keyboards/keebio/iris/keymaps/Calebs/keymap.c
      KC_P7,   KC_P8,   KC_P9,  KC_MPRV,  KC_UP,  KC_MNXT,                            _______, _______, _______, KC_BRIU, RGB_HUI, RGB_VAI,
========
     QK_BOOT, _______,   KC_UP, _______, _______, _______,                            _______,   KC_P4,   KC_P5,   KC_P6, _______, _______,
>>>>>>>> master:keyboards/keebio/iris/keymaps/bmoorey/keymap.c
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_P4,   KC_P5,   KC_P6,  KC_LEFT, KC_DOWN, KC_RIGHT,                           _______, _______, _______, KC_BRID, RGB_HUD, RGB_VAD,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_P1,   KC_P2,   KC_P3,   KC_P0,  KC_PAST, KC_PSLS,  TO(_MAIN),           _______, _______, _______, _______, _______, _______, RGB_TOG,
=======
      KC_P7,   KC_P8,   KC_P9,  KC_MPRV,  KC_UP,  KC_MNXT,                            _______, _______, _______, KC_BRIU, RGB_HUI, RGB_VAI,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_P4,   KC_P5,   KC_P6,  KC_LEFT, KC_DOWN, KC_RIGHT,                           _______, _______, _______, KC_BRID, RGB_HUD, RGB_VAD,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_P1,   KC_P2,   KC_P3,   KC_P0,  KC_PAST, KC_PSLS,  TO(_MAIN),        _______, _______, _______, _______, _______, _______, RGB_TOG,
>>>>>>> master
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_MUTE, KC_MPLY, KC_LCTL,                   MACRO00,   KC_BSLS,  KC_GRV
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_APPS] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      MACRO01,  _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            KC_PPLS, KC_PMNS, KC_PAST, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
<<<<<<< HEAD
     _______, _______, _______, _______, _______, _______, LCA(KC_DEL),      TO(_MAIN), _______, _______, _______, _______, _______, _______,
=======
     _______, _______, _______, _______, _______, _______, LCA(KC_DEL),     TO(_MAIN), _______, _______, _______, _______, _______, _______,
>>>>>>> master
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_CALC, KC_MAIL, KC_MSEL,                   KC_SLEP, KC_PSCR, MAGIC_HOST_NKRO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_STENO] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     MACRO02  ,_______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_LBRC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______,   KC_C,    KC_V,                      KC_N,    KC_M,  _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MAIN:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_MAIN);
            }
            return false;
            break;
        case ALTERNATE:
            if (record->event.pressed) {
                layer_on(_ALTERNATE);
                update_tri_layer(_ALTERNATE, _APPS, _STENO);
            } else {
                layer_off(_ALTERNATE);
                update_tri_layer(_ALTERNATE, _APPS, _STENO);
            }
            return false;
            break;
        case MACRO00:
            if (record->event.pressed) {
                SEND_STRING("\n/all Good Game! :)\n");
            }
            return false;
            break;
        case MACRO01:
            if (record->event.pressed) {
                tap_code16(LAG(KC_ESC));
                layer_move(_STENO);
            }
            return false;
            break;
        case MACRO02:
            if (record->event.pressed) {
                tap_code16(LSG(KC_ESC));
                layer_move(_MAIN);
            }
            return false;
            break;
    }
    return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 1) {
        if (clockwise) {
            if(IS_LAYER_ON(1)){
                tap_code(KC_VOLD);
            } else {
                tap_code(KC_LEFT);
            }
        } else {
            if(IS_LAYER_ON(1)){
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_RIGHT);
            }
        }
    }
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _STENO:
            rgblight_mode(12);
            break;
        case _APPS:
            if (rgblight_get_mode() != 2) { rgblight_mode(2); }
            rgblight_sethsv(0x1E,  0xFF, 0xFF);
            break;
        case _ALTERNATE:
            if (rgblight_get_mode() != 2) { rgblight_mode(2); }
            rgblight_sethsv(0x75,  0xFF, 0xFF);
            break;
        case _MAIN:
            if (rgblight_get_mode() != 2) { rgblight_mode(2); }
            rgblight_sethsv(0x40,  0xFF, 0xFF);
            break;
    }
  return state;
<<<<<<< HEAD
}
=======
}
>>>>>>> master
