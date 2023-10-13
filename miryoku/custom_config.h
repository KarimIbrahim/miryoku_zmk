// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, TAB),U_LT(U_SYM, SPACE),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define MIRYOKU_LAYER_NUM \
U_NA,         &kp N7,            &kp N8,            &kp N9,            U_NA,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_NA,         &kp N4,            &kp N5,            &kp N6,            U_NA,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_NA,         &kp N1,            &kp N2,            &kp N3,            U_NA,         U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,         U_NP,              U_NA,              &kp DOT            &kp N0,       U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_LAYER_SYM \
&kp HASH,         &kp LT,           &kp GT,             &kp DQT,           &kp SQT,           &kp UNDER,         &kp LBKT,         &kp RBKT,          &kp AMPS,           &kp PRCNT,          \
&kp EXCL,         &kp MINUS,        &kp PLUS,           &kp DOT,           &kp EQUAL,         &kp DLLR,          &kp LPAR,         &kp RPAR,          &kp PIPE,           &kp COLON,          \
&kp CARET,        &kp GRAVE,        &kp ASTRK,          &kp BSLH,          &kp FSLH,          &kp QMARK,         &kp LBRC,         &kp RBRC,          &kp TILDE,          &kp AT,             \
U_NP,             U_NP,             U_NA,               &kp COMMA,         &kp SEMI,          U_NA,              U_NA,             U_NA,              U_NP,               U_NP
