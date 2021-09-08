#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_HASH,                                        KC_DELETE,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_AT,                                          KC_MINUS,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    TT(5),          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_DELETE,                                                                      KC_EQUAL,       KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    KC_LCTRL,       KC_LGUI,        TT(2),          KC_LALT,        TT(1),          KC_BSPACE,                                                                                                      KC_BSPACE,      LT(5,KC_SPACE), KC_LGUI,        KC_LBRACKET,    KC_RBRACKET,    WEBUSB_PAIR,
    TT(1),          LM(3,MOD_LGUI), LT(4,KC_NO),                    LT(4,KC_NO),    KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_PLUS,        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_ESCAPE,      KC_ESCAPE,      LCTL(LSFT(KC_TAB)),LCTL(KC_T),     LCTL(KC_TAB),   KC_PIPE,        KC_HOME,                                        KC_TRANSPARENT, KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_DELETE,      KC_F12,
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LGUI(KC_UP)),LGUI(KC_TAB),   LCTL(LGUI(KC_DOWN)),KC_GRAVE,       KC_END,                                                                         KC_TRANSPARENT, KC_PGDOWN,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_INSERT,      KC_TRANSPARENT,
    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_F4),    KC_TRANSPARENT, KC_TILD,                                        KC_AMPR,        KC_LCBR,        KC_RCBR,        KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_PSCREEN,     KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL,       WEBUSB_PAIR,
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS
  ),
  [2] = LAYOUT_moonlander(
    LCTL(LSFT(KC_F2)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, RGB_SPI,        RGB_HUI,        RGB_VAI,        RGB_SAI,        TOGGLE_LAYER_COLOR,RGB_MOD,                                        KC_TRANSPARENT, KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, RGB_SPD,        RGB_HUD,        RGB_VAD,        RGB_SAD,        RGB_TOG,        RGB_SLD,                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MAIL,        KC_MY_COMPUTER, KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRACKET,    KC_T,           KC_RBRACKET,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_LBRACKET),KC_TAB,         LSFT(KC_RBRACKET),KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NONUS_BSLASH,KC_TRANSPARENT, KC_W,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_PSCREEN,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_KP_EQUAL,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_KP_DOT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGUP,        KC_MS_WH_UP,    KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_PGDOWN,      KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_BTN1,     KC_MS_BTN2,     KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_MS_ACCEL1,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL1,   KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT,
    KC_MS_ACCEL2,   KC_MS_ACCEL1,   KC_MS_ACCEL0,                   KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN1
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(4,KC_NO):
            return true;
        case LM(3,MOD_LGUI):
            return true;
        default:
            return false;
    }
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {0,0,0}, {0,0,0} },

    [1] = { {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {35,255,255}, {78,252,224}, {78,252,224}, {249,228,255}, {78,252,224}, {35,255,255}, {249,228,255}, {249,228,255}, {78,252,224}, {78,252,224}, {35,255,255}, {249,228,255}, {249,228,255}, {249,228,255}, {78,252,224}, {35,255,255}, {249,228,255}, {249,228,255}, {78,252,224}, {78,252,224}, {35,255,255}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {35,255,255}, {35,255,255}, {78,252,224}, {78,252,224}, {78,252,224}, {35,255,255}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {35,255,255}, {35,255,255}, {249,228,255}, {78,252,224}, {78,252,224}, {35,255,255}, {249,228,255}, {249,228,255}, {78,252,224}, {78,252,224}, {35,255,255}, {35,255,255}, {249,228,255}, {78,252,224}, {78,252,224}, {35,255,255}, {154,255,255}, {154,255,255}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224}, {78,252,224} },

    [2] = { {249,228,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {249,228,255}, {35,255,255}, {35,255,255}, {35,255,255}, {249,228,255}, {249,228,255}, {249,228,255}, {35,255,255}, {35,255,255}, {249,228,255}, {249,228,255}, {35,255,255}, {35,255,255}, {35,255,255}, {249,228,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255} },

    [3] = { {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {154,255,255}, {14,255,255}, {14,255,255}, {105,255,255}, {105,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {14,255,255}, {14,255,255}, {105,255,255}, {105,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {105,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {105,255,255}, {105,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {105,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255} },

    [4] = { {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {233,218,217}, {233,218,217}, {233,218,217}, {193,255,255}, {180,255,233}, {180,255,233}, {193,255,255}, {233,218,217}, {233,218,217}, {180,255,233}, {146,224,255}, {146,224,255}, {146,224,255}, {233,218,217}, {180,255,233}, {146,224,255}, {146,224,255}, {146,224,255}, {146,224,255}, {233,218,217}, {146,224,255}, {146,224,255}, {146,224,255}, {146,224,255}, {233,218,217}, {233,218,217}, {233,218,217}, {233,218,217}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255}, {193,255,255} },

    [5] = { {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {154,255,255}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {154,255,255}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {154,255,255}, {255,255,213}, {154,255,255}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {154,255,255}, {154,255,255}, {154,255,255}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {255,255,213}, {33,255,255}, {0,0,255}, {255,255,213}, {255,255,213}, {255,255,213}, {0,0,255}, {0,0,255}, {255,255,213}, {255,255,213}, {255,255,213}, {33,255,255}, {0,0,255}, {141,255,233}, {255,255,213}, {255,255,213}, {33,255,255}, {33,255,255}, {141,255,233}, {255,255,213}, {33,255,255}, {33,255,255}, {154,255,255}, {154,255,255}, {255,255,213}, {255,255,213} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
