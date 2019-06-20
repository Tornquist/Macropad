#pragma once

#include "config_common.h"

#define VENDOR_ID       0xABCD
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    Nathan Tornquist
#define PRODUCT         Macropad
#define DESCRIPTION     A custom macropad

#define MATRIX_ROWS 4
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { B4, D7, D6, D4 }
#define MATRIX_COL_PINS { B5, B6, C6 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5
