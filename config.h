#pragma once
/* Key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// Wiring of each half
#define MATRIX_ROW_PINS \
    { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS \
    { F6, F7, B1, B3, B2, B6 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#ifdef LOCKING_SUPPORT_ENABLE
#    undef LOCKING_SUPPORT_ENABLE
#endif
#ifdef LOCKING_RESYNC_ENABLE
#    undef LOCKING_RESYNC_ENABLE
#endif

#ifndef NO_DEBUG
#    define NO_DEBUG
#endif

#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#    define NO_PRINT
#endif
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */
/* disable action features */
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define DISABLE_LEADER
#define EE_HANDS
#define USE_SERIAL_PD2

#define TAPPING_TERM_PER_KEY

#define OLED_TIMEOUT 600000  // 10 minutes

#define TAPPING_TOGGLE 2
