// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

// Unique ID for the experimental GMK70 Vial port.
#define VIAL_KEYBOARD_UID {0x2D, 0x71, 0x61, 0x3D, 0x95, 0xE8, 0x52, 0xD6}

// Esc + Enter on the GMK70 split matrix.
#define VIAL_UNLOCK_COMBO_ROWS {0, 7}
#define VIAL_UNLOCK_COMBO_COLS {7, 7}

// Start conservatively; these can be raised after checking EEPROM/flash headroom.
#define VIAL_TAP_DANCE_ENTRIES 4
#define VIAL_COMBO_ENTRIES 4
#define VIAL_KEY_OVERRIDE_ENTRIES 4
