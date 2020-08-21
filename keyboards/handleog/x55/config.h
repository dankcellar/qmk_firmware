#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER HandleOG
#define PRODUCT x55
#define DESCRIPTION A 5x5 custom keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 5

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW COL Anode (+), ROW Cathode (-, marked on diode)
 *                  ROW2COL ROW Anode (+), COL Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { D4, D6, D7, B4, B2 }
#define MATRIX_COL_PINS { F1, F4, F5, F6, B3 }
#define DIODE_DIRECTION ROW2COL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
// #define DEBOUNCE 3

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

/*
 * Force NKRO
 *
 * Force NKRO (nKey Rollover) to be enabled by default, regardless of the saved
 * state in the bootmagic EEPROM settings. (Note that NKRO must be enabled in the
 * makefile for this to work.)
 *
 * If forced on, NKRO can be disabled via magic key (default = LShift+RShift+N)
 * until the next keyboard reset.
 *
 * NKRO may prevent your keystrokes from being detected in the BIOS, but it is
 * fully operational during normal computer usage.
 *
 * For a less heavy-handed approach, enable NKRO via magic key (LShift+RShift+N)
 * or via bootmagic (hold SPACE+N while plugging in the keyboard). Once set by
 * bootmagic, NKRO mode will always be enabled until it is toggled again during a
 * power-up.
 *
 */
// #define FORCE_NKRO

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
// #define NO_ACTION_MACRO
// #define NO_ACTION_FUNCTION

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/
// #define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
// #define MIDI_TONE_KEYCODE_OCTAVES 1


// #ifdef RGB_MATRIX_ENABLE
// #    define RGB_MATRIX_LED_PROCESS_LIMIT 4
// #    define RGB_MATRIX_LED_FLUSH_LIMIT 26
// #    define DEBOUNCE 3
// #    define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
// #    define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
// #    define RGB_MATRIX_KEYPRESSES
// #    define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #    define DISABLE_RGB_MATRIX_BAND_SAT
// #    define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
// #    define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
// #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
// #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
// #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
// #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
// #    define DISABLE_RGB_MATRIX_SPLASH
// #    define DISABLE_RGB_MATRIX_MULTISPLASH
// #    define DISABLE_RGB_MATRIX_SOLID_SPLASH
// #    define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
// #    define DISABLE_RGB_MATRIX_DIGITAL_RAIN
// #    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
// #    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_ALL
// #    define DRIVER_ADDR_1 0b1110100
// #    define DRIVER_ADDR_2 0b1110111
// #    define DRIVER_COUNT 2
// #    define DRIVER_1_LED_TOTAL 96
// #    define DRIVER_2_LED_TOTAL 0
// #    define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)
// #endif

#    define DRIVER_ADDR_1 0b1110100
#    define DRIVER_COUNT 1
#    define DRIVER_LED_TOTAL 32
