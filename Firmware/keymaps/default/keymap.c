#include QMK_KEYBOARD_H

#define _BL 0
#define _ML 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT( /* Base */
    KC_7,  KC_8,      KC_9,   \
    KC_4,  KC_5,      KC_6,   \
    KC_1,  KC_2,      KC_3,   \
    KC_0,  OSL(_ML),  KC_ENT  \
  ),
  [_ML] = LAYOUT( /* Math */
    KC_NO,   KC_NO,    KC_PSLS, \
    KC_NO,   KC_NO,    KC_PAST, \
    KC_NO,   KC_NO,    KC_PMNS, \
    KC_DOT,  TG(_BL),  KC_PPLS  \
  )
};
