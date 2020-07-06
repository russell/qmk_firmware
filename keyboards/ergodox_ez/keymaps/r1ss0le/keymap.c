#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"


#define BASE 0
#define ALT 1
#define PAD 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * Keymap: Default Layer in DVORAK
   *
   * ,--------------------------------------------------.       ,--------------------------------------------------.
   * |   `    |   1  |   2  |   3  |   4  |   5  | Esc  |       |   =  |   6  |   7  |   8  |   9  |   0  |   -    |
   * |--------+------+------+------+------+-------------|       |------+------+------+------+------+------+--------|
   * |   /    |   '  |   ,  |   .  |   P  |   Y  |   [  |       |   ]  |   F  |   G  |   C  |   R  |   L  |   \    |
   * |--------+------+------+------+------+------|      |       |      |------+------+------+------+------+--------|
   * | LCtrl  |   A  |   O  |   E  |   U  |   I  |------|       |------|   D  |   H  |   T  |   N  |   S  | RCtrl  |
   * |--------+------+------+------+------+------|Delete|       |BackSp|------+------+------+------+------+--------|
   * | Shift  |   ;  |   Q  |   J  |   K  |   X  |      |       |      |   B  |   M  |   W  |   V  |   Z  | Shift  |
   * `--------+------+------+------+------+-------------'       `-------------+------+------+------+------+--------'
   *   | LGui | Left | Right|      | LAlt |                                   | RAlt |      |  Up  | Down | RGui |
   *   `----------------------------------'                                   `----------------------------------'
   *                                        ,-------------.   ,-------------.
   *                                        | ~L2  |  L1  |   |      | ~L3  |
   *                                 ,------|------|------|   |------+------+------.
   *                                 |      |      | Home |   | PgUp |      |      |
   *                                 | Space| Tab  |------|   |------|      | Enter|
   *                                 |      |      | End  |   | PgDn |      |      |
   *                                 `--------------------'   `--------------------'
   *
   */

[BASE] = LAYOUT_ergodox(  // Layer0: default, leftled:none
                // left hand
                KC_GRV,    KC_1,      KC_2,     KC_3,   KC_4,   KC_5,   KC_ESC,
                KC_SLSH,   KC_QUOT,   KC_COMM,  KC_DOT, KC_P,   KC_Y,   KC_LBRC,
                KC_LCTL,   KC_A,      KC_O,     KC_E,   KC_U,   KC_I,
                KC_LSHIFT, KC_SCOLON, KC_Q,     KC_J,   KC_K,   KC_X,   KC_DELETE,
                KC_LGUI,   KC_LEFT,   KC_RIGHT, KC_NO,  KC_LALT,

                MO(ALT), TO(BASE),
                KC_HOME,
                KC_SPACE, KC_TAB, KC_END,

                // right hand
                KC_EQL    ,KC_6 ,KC_7 ,KC_8,   KC_9,  KC_0,    KC_MINS,
                KC_RBRC   ,KC_F ,KC_G ,KC_C,   KC_R,  KC_L,    KC_BSLS,
                           KC_D ,KC_H ,KC_T,   KC_N,  KC_S,    KC_RCTL,
                KC_BSPACE ,KC_B ,KC_M ,KC_W,   KC_V,  KC_Z,    KC_RSHIFT,
                           KC_RALT,    KC_NO,  KC_UP, KC_DOWN, KC_RGUI,

                TO(PAD), MO(ALT),
                KC_PGUP,
                KC_PGDN, KC_NO, KC_ENTER
    ),

  /*
   * Keymap: F* Keys, with transparency to normal layout
   *
   * ,--------------------------------------------------.       ,--------------------------------------------------.
   * |   `    |   F1 |   F2 |   F3 |  F4  |  F5  | Esc  |       |  =   |  F6  |   F7 |  F8  |  F9  |  F10 |  F11   |
   * |--------+------+------+------+------+-------------|       |------+------+------+------+------+------+--------|
   * |   /    |   '  |   ,  |   .  |   P  |   Y  |   [  |       |   ]  |   F  |   G  |   C  |   R  |   L  |  F12   |
   * |--------+------+------+------+------+------|      |       |      |------+------+------+------+------+--------|
   * | LCtrl  |   A  |   O  |   E  |   U  |   I  |------|       |------|   D  |   H  |   T  |   N  |   S  | RCtrl  |
   * |--------+------+------+------+------+------|Delete|       |BackSp|------+------+------+------+------+--------|
   * | Shift  |   ;  |   Q  |   J  |   K  |   X  |      |       |      |   B  |   M  |   W  |   V  |   Z  | Shift  |
   * `--------+------+------+------+------+-------------'       `-------------+------+------+------+------+--------'
   *   | LGui |      |      |      | LAlt |                                   | RAlt |      |      |      | RGui |
   *   `----------------------------------'                                   `----------------------------------'
   *                                        ,-------------.   ,-------------.
   *                                        |      |      |   |      | ~L1  |
   *                                 ,------|------|------|   |------+------+------.
   *                                 |      |      |      |   |      |      |      |
   *                                 | Space| Tab  |------|   |------|      | Enter|
   *                                 |      |      |      |   |      |      |      |
   *                                 `--------------------'   `--------------------'
   *
   */

[ALT] = LAYOUT_ergodox(  // Layer1: F-keys
        // left hand
        KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS,
                                                              KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,
        // right hand
             KC_TRNS, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,
             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_F12,
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,KC_TRNS,
        KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS
    ),

[PAD] = LAYOUT_ergodox(  // Layer2: numpad, leftled:mid/blue
        // left hand
        KC_TRNS,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_PAUS,KC_PSCR,
        KC_TRNS,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_TRNS,
        KC_TRNS,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_TRNS,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                      KC_TRNS,KC_TRNS,
                                           KC_TRNS,
                                 KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_SLCK,KC_NLCK,KC_PSLS,KC_PAST,KC_PAST,KC_PMNS,KC_BSPC,
             KC_TRNS,KC_NO,  KC_P7,  KC_P8,  KC_P9,  KC_PMNS,KC_PGUP,
                  KC_NO,  KC_P4,  KC_P5,  KC_P6,  KC_PPLS,KC_PGDN,
             KC_TRNS,KC_NO,  KC_P1,  KC_P2,  KC_P3,  KC_PPLS,KC_PENT,
                       KC_P0,  KC_PDOT,KC_SLSH,KC_PENT,KC_PENT,
        KC_TRNS,KC_TRNS,
        KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS
    ),
};

const uint16_t PROGMEM fn_actions[] = {
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
  switch(id) {
    case 0:
      if (record->event.pressed) {
        register_code(KC_RSFT);
      } else {
        unregister_code(KC_RSFT);
      }
      break;
  }
  return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

  uint8_t layer = biton32(layer_state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    // TODO: Make this relevant to the ErgoDox EZ.
    case ALT:
      ergodox_right_led_1_on();
      break;
    case PAD:
      ergodox_right_led_2_on();
      break;
    default:
      // none
      break;
  }

};
