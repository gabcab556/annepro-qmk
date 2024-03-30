#include <stdint.h>
#include "annepro2.h"
#include "qmk_ap2_led.h"
#include "config.h"

enum anne_pro_layers {
    LAYER_0,
    LAYER_1,
    LAYER_2,
};

enum combo_events {
    // RIGHT SIDE COMBOS //
    IO_DEL,
    JK_SPC,
    KL_BSPC,
    JP_QUOT,
    OP_ENT,
    MCOMM_RCTL,
    COMMDOT_RSFT,
    MCOMMDOT_RSFTRCTL,
    JKL_LCTLBSPC,

    SCLNH_LEFT,
    SCLNJ_DOWN,
    SCLNK_UP,
    SCLNL_RIGHT,

    SCLNN_HOME,
    SCLNM_PGDN,
    SCLNCOMM_PGUP,
    SCLNDOT_END,
    IOP_PSCR,

    UI_BSLS,
    UO_RBRC,
    UP_LBRC,

    IH_SIX,
    IH_SEVEN,
    UK_EIGHT,
    UL_NINE,
    USCLN_ZERO,
    JDOT_MINUS,
    JSLASH_EQL,

    // LEFT SIDE COMBOS //

    QW_ESC,
    AS_TAB,
    XC_LSFT,
    CV_LCTL,
    XCV_LSFTLCTL,

    RQ_GRV,
    RA_ONE,
    RS_TWO,
    RD_THREE,
    EF_FOUR,
    EG_FIVE,

};

// RIGHT SIDE COMBOS //

const uint16_t PROGMEM del_combo[]      = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM spc_combo[]      = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM bspc_combo[]     = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM lctlbspc_combo[] = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM quot_combo[]     = {KC_J, KC_P, COMBO_END};
const uint16_t PROGMEM ent_combo[]      = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM rctl_combo[]     = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM rsft_combo[]     = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM rsftrctl_combo[] = {KC_M, KC_COMM, KC_DOT, COMBO_END};

const uint16_t PROGMEM left_combo[]    = {KC_SCLN, KC_H, COMBO_END};
const uint16_t PROGMEM down_combo[]    = {KC_SCLN, KC_J, COMBO_END};
const uint16_t PROGMEM up_combo[]    = {KC_SCLN, KC_K, COMBO_END};
const uint16_t PROGMEM right_combo[]    = {KC_SCLN, KC_L, COMBO_END};

const uint16_t PROGMEM home_combo[]    = {KC_SCLN, KC_N, COMBO_END};
const uint16_t PROGMEM pgdn_combo[]    = {KC_SCLN, KC_M, COMBO_END};
const uint16_t PROGMEM pgup_combo[]    = {KC_SCLN, KC_COMM, COMBO_END};
const uint16_t PROGMEM end_combo[]     = {KC_SCLN, KC_DOT, COMBO_END};
const uint16_t PROGMEM pscr_combo[]    = {KC_I, KC_O, KC_P, COMBO_END};

const uint16_t PROGMEM bsls_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM lbrc_combo[] = {KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {KC_U, KC_P, COMBO_END};

const uint16_t PROGMEM six_combo[]      = {KC_I, KC_H, COMBO_END};
const uint16_t PROGMEM seven_combo[]    = {KC_I, KC_J, COMBO_END};
const uint16_t PROGMEM eight_combo[]    = {KC_U, KC_K, COMBO_END};
const uint16_t PROGMEM nine_combo[]     = {KC_U, KC_L, COMBO_END};
const uint16_t PROGMEM zero_combo[]     = {KC_U, KC_SCLN, COMBO_END};
const uint16_t PROGMEM minus_combo[]    = {KC_J, KC_DOT, COMBO_END};
const uint16_t PROGMEM eql_combo[]      = {KC_J, KC_SLASH, COMBO_END};

// LEFT SIDE COMBOS //

const uint16_t PROGMEM esc_combo[]      = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM tab_combo[]      = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM lsft_combo[]     = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM lctl_combo[]     = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM lsftlctl_combo[] = {KC_X, KC_C, KC_V, COMBO_END};

const uint16_t PROGMEM grv_combo[]    = {KC_R, KC_Q, COMBO_END};
const uint16_t PROGMEM one_combo[]      = {KC_R, KC_A, COMBO_END};
const uint16_t PROGMEM two_combo[]      = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM three_combo[]    = {KC_R, KC_D, COMBO_END};
const uint16_t PROGMEM four_combo[]     = {KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM five_combo[]     = {KC_E, KC_G, COMBO_END};



combo_t key_combos[] = {

    // RIGHT SIDE COMBOS //

    [IO_DEL]            = COMBO(del_combo, KC_DEL),
    [JK_SPC]            = COMBO(spc_combo, KC_SPC),
    [KL_BSPC]           = COMBO(bspc_combo, KC_BSPC),
    [JP_QUOT]           = COMBO(quot_combo, KC_QUOT),
    [OP_ENT]            = COMBO(ent_combo, KC_ENT),
    [MCOMM_RCTL]        = COMBO(rctl_combo, KC_RCTL),
    [COMMDOT_RSFT]      = COMBO(rsft_combo, KC_RSFT),
    [MCOMMDOT_RSFTRCTL] = COMBO(rsftrctl_combo, RSFT(KC_RCTL)),
    [JKL_LCTLBSPC]      = COMBO(lctlbspc_combo, LCTL(KC_BSPC)),

    [SCLNH_LEFT]        = COMBO(left_combo, KC_LEFT),
    [SCLNJ_DOWN]        = COMBO(down_combo, KC_DOWN),
    [SCLNK_UP]          = COMBO(up_combo, KC_UP),
    [SCLNL_RIGHT]       = COMBO(right_combo, KC_RIGHT),

    [SCLNN_HOME]        = COMBO(home_combo, KC_HOME),
    [SCLNM_PGDN]        = COMBO(pgdn_combo, KC_PGDN),
    [SCLNCOMM_PGUP]      = COMBO(pgup_combo, KC_PGUP),
    [SCLNDOT_END]      = COMBO(end_combo, KC_END),
    [IOP_PSCR]          = COMBO(pscr_combo, KC_PSCR),

    [UI_BSLS]           = COMBO(bsls_combo, KC_BSLS),
    [UO_RBRC]           = COMBO(lbrc_combo, KC_LBRC),
    [UP_LBRC]           = COMBO(rbrc_combo, KC_RBRC),

    [IH_SIX]            = COMBO(six_combo, KC_6),
    [IH_SEVEN]          = COMBO(seven_combo, KC_7),
    [UK_EIGHT]          = COMBO(eight_combo, KC_8),
    [UL_NINE]           = COMBO(nine_combo, KC_9),
    [USCLN_ZERO]        = COMBO(zero_combo, KC_0),
    [JDOT_MINUS]        = COMBO(minus_combo, KC_MINUS),
    [JSLASH_EQL]        = COMBO(eql_combo, KC_EQL),

        // LEFT SIDE COMBOS //

    [QW_ESC]            = COMBO(esc_combo, KC_ESC),
    [AS_TAB]            = COMBO(tab_combo, KC_TAB),
    [XC_LSFT]           = COMBO(lsft_combo, KC_LSFT),
    [CV_LCTL]           = COMBO(lctl_combo, KC_LCTL),
    [XCV_LSFTLCTL]      = COMBO(lsftlctl_combo, LSFT(KC_LCTL)),

    [RQ_GRV]          = COMBO(grv_combo, KC_GRV),
    [RA_ONE]            = COMBO(one_combo, KC_1),
    [RS_TWO]            = COMBO(two_combo, KC_2),
    [RD_THREE]          = COMBO(three_combo, KC_3),
    [EF_FOUR]           = COMBO(four_combo, KC_4),
    [EG_FIVE]           = COMBO(five_combo, KC_5),
};



const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_0] = KEYMAP(/* Base */
                        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, 
                        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 
                        MO(LAYER_2), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
                        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, 
                        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(LAYER_1), KC_RGUI, KC_RALT, KC_RCTL),

    [LAYER_1] = KEYMAP(/* Base */
                        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, 
                        KC_TRNS, KC_TILDE, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, 
                        KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, 
                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINUS, KC_EQL, KC_TRNS, 
                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [LAYER_2] = KEYMAP(/* Base */
                        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, 
                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, 
                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS, 
                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, 
                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};

const uint16_t keymaps_size = sizeof(keymaps);

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

// Code to run after initializing the keyboard
void keyboard_post_init_user(void) {
    // Here are two common functions that you can use. For more LED functions, refer to the file "qmk_ap2_led.h"

    // annepro2-shine disables LEDs by default. Uncomment this function to enable them at startup.
    // annepro2LedEnable();

    // Additionally, it also chooses the first LED profile by default. Refer to the "profiles" array in main.c in
    // annepro2-shine to see the order. Replace "i" with the index of your preferred profile. (i.e the RED profile is index 0)
    // annepro2LedSetProfile(i);
}

layer_state_t layer_state_set_user(layer_state_t layer) { return layer; }
