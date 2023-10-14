// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp Q,               &kp W,           &kp E,               &kp R,             &kp T,               &kp Y,             &kp U,              &kp I,             &kp O,              &kp P,                 \
U_MT_L(LGUI, A),    U_MT_L(LALT, S),  U_MT_L(LCTRL, D),    U_MT_L(LSHFT, F),  &kp G,               &kp H,             U_MT_R(RSHFT, J),   U_MT_R(RCTRL, K),  U_MT_R(RALT, L),    U_MT_R(RGUI, SQT),     \
U_LT(U_BUTTON, Z),  U_MT_L(RALT, X),  &kp C,               &kp V,             &kp B,               &kp N,             &kp M,              &kp COMMA,         U_MT_R(RALT, DOT),  U_LT(U_BUTTON, SLASH), \
U_NP,               U_NP,             U_LT(U_MEDIA, ESC),  U_LT(U_NAV, TAB),  U_LT(U_SYM, SPACE),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),  U_NP,               U_NP


#define MIRYOKU_LAYER_EXTRA \
&kp Q,              &kp W,            &kp F,               &kp P,              &kp B,               &kp J,             &kp L,              &kp U,             &kp Y,              &kp SQT,               \
U_MT_L(LGUI, A),    U_MT_L(LALT, R),  U_MT_L(LCTRL, S),    U_MT_L(LSHFT, T),   &kp G,               &kp M,             U_MT_R(RSHFT, N),   U_MT_R(RCTRL, E),  U_MT_R(RALT, I),    U_MT_R(RGUI, O),       \
U_LT(U_BUTTON, Z),  U_MT_L(RALT, X),  &kp C,               &kp D,              &kp V,               &kp K,             &kp H,              &kp COMMA,         U_MT_R(RALT, DOT),  U_LT(U_BUTTON, SLASH), \
U_NP,               U_NP,             U_LT(U_MEDIA, ESC),  U_LT(U_NAV, TAB),   U_LT(U_SYM, SPACE),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),  U_NP,               U_NP


#define MIRYOKU_LAYER_NUM \
U_NA,  &kp N7,  &kp N8,  &kp N9,   U_NA,    U_NA,  &u_to_U_BASE,  &u_to_U_EXTRA,  &u_to_U_TAP,  U_BOOT,    \
U_NA,  &kp N4,  &kp N5,  &kp N6,   U_NA,    U_NA,  &kp RSHFT,     &kp RCTRL,      &kp RALT,     &kp RGUI,  \
U_NA,  &kp N1,  &kp N2,  &kp N3,   U_NA,    U_NA,  U_NA,          U_NA,           U_NA,         U_NA,      \
U_NP,  U_NP,    U_NA,    &kp DOT,  &kp N0,  U_NA,  U_NA,          U_NA,           U_NP,         U_NP


#define MIRYOKU_LAYER_SYM \
&kp HASH,             &kp LT,               &kp GT,               &kp DQT,             &kp UNDER,  &kp SQT,    &kp LBKT,             &kp RBKT,             &kp AMPS,            &kp PRCNT,            \
U_MT_L(LGUI, CARET),  U_MT_L(LALT, MINUS),  U_MT_L(LCTRL, PLUS),  U_MT_L(LSHFT, DOT),  &kp DLLR,   &kp EQUAL,  U_MT_R(RSHFT, LPAR),  U_MT_R(RCTRL, RPAR),  U_MT_R(RALT, PIPE),  U_MT_R(RGUI, COLON),  \
&kp TILDE,            &kp GRAVE,            &kp ASTRK,            &kp BSLH,            &kp FSLH,   &kp QMARK,  &kp LBRC,             &kp RBRC,             &kp EXCL,            &kp AT,               \
U_NP,                 U_NP,                 U_NA,                 &kp COMMA,           &kp SEMI,   U_NA,       U_NA,                 U_NA,                 U_NP,                U_NP


#define MIRYOKU_LAYER_MEDIA \
U_BOOT,    &u_to_U_TAP,  &u_to_U_EXTRA,  &u_to_U_BASE,   U_NA,  U_RGB_EFF,    U_RGB_HUI,     U_RGB_SAI,     U_RGB_BRI,    U_RGB_TOG,   \
&kp LGUI,  &kp LALT,     &kp LCTRL,      &kp LSHFT,      U_NA,  &kp C_PREV,   &kp C_VOL_DN,  &kp C_VOL_UP,  &kp C_NEXT,   U_EP_TOG,    \
U_NA,      &kp RALT,     &u_to_U_FUN,    &u_to_U_MEDIA,  U_NA,  &u_bt_sel_0,  &u_bt_sel_1,   &u_bt_sel_2,   &u_bt_sel_3,  &u_out_tog,  \
U_NP,      U_NP,         U_NA,           U_NA,           U_NA,  &kp C_PP,     &kp C_STOP,    &kp C_MUTE,    U_NP,         U_NP
