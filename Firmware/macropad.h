#pragma once

#include "quantum.h"

#define LAYOUT( \
    k12, k11, k10, \
    k09, k08, k07, \
    k06, k05, k04, \
    k03, k02, k01  \
) { \
    { k12, k11, k10 }, \
    { k09, k08, k07 }, \
    { k06, k05, k04 }, \
    { k03, k02, k01 }  \
}
