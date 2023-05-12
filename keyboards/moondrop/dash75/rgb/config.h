// Copyright 2023 moondroplab (@moondroplab)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define SERIAL_NUM "Dash 75"

#define USB_SUSPEND_WAKEUP_DELAY 5000  // wait for USB hub to start

#define HOLD_ON_OTHER_KEY_PRESS

/* RGB */
#define RGB_DI_PIN C7

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200

#ifdef RGBLIGHT_ENABLE
#    define RGBLED_NUM 81

#    define RGBLIGHT_LIMIT_VAL 120 // The maximum brightness level
#    define RGBLIGHT_SLEEP         // If defined, the RGB lighting will be switched off when the host goes to sleep */
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#endif
