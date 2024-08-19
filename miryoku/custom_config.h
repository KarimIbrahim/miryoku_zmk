// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp Q,              &kp W,            &kp E,               &kp R,             &kp T,               &kp Y,    &kp U,              &kp I,             &kp O,              &kp P,  \
U_MT(LGUI, A),    U_MT(LALT, S),  U_MT(LCTRL, D),    U_MT(LSHFT, F),  &kp G,               &kp H,    U_MT(RSHFT, J),   U_MT(RCTRL, K),  U_MT(RALT, L),    U_MT(RGUI, SQT),  \
U_LT(U_BUTTON, Z),  U_MT(RALT, X),  &kp C,               &kp V,             &kp B,               &kp N,    &kp M,              &kp COMMA,         U_MT(RALT, DOT),  U_LT(U_BUTTON, SLASH),  \
U_NP,               U_NP,             U_LT(U_MEDIA, ESC),  U_LT(U_NAV, TAB),  U_LT(U_SYM, SPACE),  &kp RET,  U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),  U_NP,               U_NP


#define MIRYOKU_LAYER_EXTRA \
&kp Q,              &kp W,            &kp F,               &kp P,              &kp B,               &kp J,             &kp L,              &kp U,             &kp Y,              &kp SQT,               \
U_MT(LGUI, A),    U_MT(LALT, R),  U_MT(LCTRL, S),    U_MT(LSHFT, T),   &kp G,               &kp M,             U_MT(RSHFT, N),   U_MT(RCTRL, E),  U_MT(RALT, I),    U_MT(RGUI, O),       \
U_LT(U_BUTTON, Z),  U_MT(RALT, X),  &kp C,               &kp D,              &kp V,               &kp K,             &kp H,              &kp COMMA,         U_MT(RALT, DOT),  U_LT(U_BUTTON, SLASH), \
U_NP,               U_NP,             U_LT(U_MEDIA, ESC),  U_LT(U_NAV, TAB),   U_LT(U_SYM, SPACE),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),  U_NP,               U_NP


#define MIRYOKU_LAYER_NUM \
&kp ASTRK,  &kp N7,  &kp N8,     &kp N9,    &kp COMMA,  U_NA,  &u_to_U_BASE,  &u_to_U_EXTRA,  &u_to_U_TAP,  U_BOOT,    \
&kp SLASH,  &kp N4,  &kp N5,     &kp N6,    &kp DOT,    U_NA,  &kp RSHFT,     &kp RCTRL,      &kp RALT,     &kp RGUI,  \
U_NA,       &kp N1,  &kp N2,     &kp N3,    &kp N0,     U_NA,  U_NA,          U_NA,           U_NA,         U_NA,      \
U_NP,       U_NP,    &kp MINUS,  &kp PLUS,  &kp SPACE,  U_NA,  U_NA,          U_NA,           U_NP,         U_NP


#define MIRYOKU_LAYER_SYM \
&kp GRAVE,            &kp AT,              &kp UNDER,             &kp PRCNT,             U_NA,      &kp GT,     &kp LBRC,             &kp RBRC,             &kp AMPS,            &kp DQT,                 \
U_MT(LGUI, MINUS),  U_MT(LALT, PLUS),  U_MT(LCTRL, ASTRK),  U_MT(LSHFT, EQUAL),  &kp HASH,  &kp LT,     U_MT(RSHFT, LPAR),  U_MT(RCTRL, RPAR),  U_MT(RALT, PIPE),  U_MT(RGUI, COLON),  \
&kp TILDE,            &kp CARET,           &kp DLLR,              &kp BSLH,              U_NA,      &kp QMARK,  &kp LBKT,             &kp RBKT,             &kp EXCL,            &kp SEMI,              \
U_NP,                 U_NP,                U_NA,                  U_NA,                  U_NA,      U_NA,       &kp COMMA,            &kp SEMI,             U_NP,                U_NP


#define MIRYOKU_LAYER_MEDIA \
U_BOOT,    &u_to_U_TAP,  &u_to_U_EXTRA,  &u_to_U_BASE,   U_NA,  U_RGB_EFF,    U_RGB_HUI,     U_RGB_SAI,     U_RGB_BRI,    U_RGB_TOG,   \
&kp LGUI,  &kp LALT,     &kp LCTRL,      &kp LSHFT,      U_NA,  &kp C_PREV,   &kp C_VOL_DN,  &kp C_VOL_UP,  &kp C_NEXT,   U_EP_TOG,    \
U_NA,      &kp RALT,     &u_to_U_FUN,    &u_to_U_MEDIA,  U_NA,  &u_bt_sel_0,  &u_bt_sel_1,   &u_bt_sel_2,   &u_bt_sel_3,  &u_out_tog,  \
U_NP,      U_NP,         U_NA,           U_NA,           U_NA,  &kp C_PP,     &kp C_STOP,    &kp C_MUTE,    U_NP,         U_NP
