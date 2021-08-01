// Phantom ISO
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: vi, qwerty */
    KEYMAP_ISO(\
        ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,       PSCR,SLCK,BRK,  \
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,      INS, HOME,PGUP, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,           DEL, END, PGDN, \
        ESC, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NUHS,ENT,                       \
        LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,           UP,        \
        LCTL,LGUI,LALT,               SPC,                RALT,RGUI,FN0, RCTL,      LEFT,DOWN,RGHT),

    /* 1: alternative, mouse */
    KEYMAP_ISO(\
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           TRNS,TRNS,MUTE,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      TRNS,WH_L,WH_U, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           TRNS,WH_R,WH_D, \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,MS_L,MS_D,MS_U,MS_R,TRNS,TRNS,TRNS,TRNS,                      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,           TRNS,      \
        BTN3,TRNS,BTN2,               BTN1,               BTN2,TRNS,TRNS,BTN3,      TRNS,TRNS,TRNS)
};
/* static const action_t PROGMEM fn_actions[] = { */
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};
