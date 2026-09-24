#pragma once

// Unique Vial keyboard identity for this GMK70 port.
#define VIAL_KEYBOARD_UID {0x47, 0x4D, 0x4B, 0x37, 0x30, 0x56, 0x31, 0x35}

// Unlock with Esc + Enter.
#define VIAL_UNLOCK_COMBO_ROWS {0, 7}
#define VIAL_UNLOCK_COMBO_COLS {1, 7}

// Start conservatively; expand after EEPROM usage is verified.
#define VIAL_TAP_DANCE_ENTRIES 4
#define VIAL_COMBO_ENTRIES 4
#define VIAL_KEY_OVERRIDE_ENTRIES 4
