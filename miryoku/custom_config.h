// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp LGUI   K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp RGUI \
&kp LCTRL  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp RALT \
&kp LSHFT  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RSHFT \
                K32  K33  K34       K35  K36  K37

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40

#define MIRYOKU_LAYER_BASE \
&kp Q,  &kp W,  &kp E,               &kp R,             &kp T,               &kp Y,    &kp U,              &kp I,             &kp O,    &kp P,  \
&kp A,  &kp S,  &kp D,               &kp F,             &kp G,               &kp H,    &kp J,              &kp K,             &kp L,    &kp SQT,  \
&kp Z,  &kp X,  &kp C,               &kp V,             &kp B,               &kp N,    &kp M,              &kp COMMA,         &kp DOT,  &kp SLASH,  \
U_NP,   U_NP,   U_LT(U_MEDIA, ESC),  U_LT(U_NAV, TAB),  U_LT(U_SYM, SPACE),  &kp RET,  U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),  U_NP,     U_NP


#define MIRYOKU_LAYER_EXTRA \
&kp Q,              &kp W,            &kp F,               &kp P,              &kp B,               &kp J,             &kp L,              &kp U,             &kp Y,              &kp SQT,               \
U_MT_L(LGUI, A),    U_MT_L(LALT, R),  U_MT_L(LCTRL, S),    U_MT_L(LSHFT, T),   &kp G,               &kp M,             U_MT_R(RSHFT, N),   U_MT_R(RCTRL, E),  U_MT_R(RALT, I),    U_MT_R(RGUI, O),       \
U_LT(U_BUTTON, Z),  U_MT_L(RALT, X),  &kp C,               &kp D,              &kp V,               &kp K,             &kp H,              &kp COMMA,         U_MT_R(RALT, DOT),  U_LT(U_BUTTON, SLASH), \
U_NP,               U_NP,             U_LT(U_MEDIA, ESC),  U_LT(U_NAV, TAB),   U_LT(U_SYM, SPACE),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),  U_NP,               U_NP


#define MIRYOKU_LAYER_NUM \
&kp ASTRK,  &kp N7,  &kp N8,     &kp N9,    &kp COMMA,  U_NA,  &u_to_U_BASE,  &u_to_U_EXTRA,  &u_to_U_TAP,  U_BOOT,    \
&kp SLASH,  &kp N4,  &kp N5,     &kp N6,    &kp DOT,    U_NA,  &kp RSHFT,     &kp RCTRL,      &kp RALT,     &kp RGUI,  \
U_NA,       &kp N1,  &kp N2,     &kp N3,    &kp N0,     U_NA,  U_NA,          U_NA,           U_NA,         U_NA,      \
U_NP,       U_NP,    &kp MINUS,  &kp PLUS,  &kp SPACE,  U_NA,  U_NA,          U_NA,           U_NP,         U_NP


#define MIRYOKU_LAYER_SYM \
&kp GRAVE,            &kp AT,              &kp UNDER,             &kp PRCNT,             U_NA,      &kp GT,     &kp LBRC,             &kp RBRC,             &kp AMPS,            &kp DQT,                 \
U_MT_L(LGUI, MINUS),  U_MT_L(LALT, PLUS),  U_MT_L(LCTRL, ASTRK),  U_MT_L(LSHFT, EQUAL),  &kp HASH,  &kp LT,     U_MT_R(RSHFT, LPAR),  U_MT_R(RCTRL, RPAR),  U_MT_R(RALT, PIPE),  U_MT_R(RGUI, COLON),  \
&kp TILDE,            &kp CARET,           &kp DLLR,              &kp BSLH,              U_NA,      &kp QMARK,  &kp LBKT,             &kp RBKT,             &kp EXCL,            &kp SEMI,              \
U_NP,                 U_NP,                U_NA,                  U_NA,                  U_NA,      U_NA,       &kp COMMA,            &kp SEMI,             U_NP,                U_NP


#define MIRYOKU_LAYER_MEDIA \
U_BOOT,    &u_to_U_TAP,  &u_to_U_EXTRA,  &u_to_U_BASE,   U_NA,  U_RGB_EFF,    U_RGB_HUI,     U_RGB_SAI,     U_RGB_BRI,    U_RGB_TOG,   \
&kp LGUI,  &kp LALT,     &kp LCTRL,      &kp LSHFT,      U_NA,  &kp C_PREV,   &kp C_VOL_DN,  &kp C_VOL_UP,  &kp C_NEXT,   U_EP_TOG,    \
U_NA,      &kp RALT,     &u_to_U_FUN,    &u_to_U_MEDIA,  U_NA,  &u_bt_sel_0,  &u_bt_sel_1,   &u_bt_sel_2,   &u_bt_sel_3,  &u_out_tog,  \
U_NP,      U_NP,         U_NA,           U_NA,           U_NA,  &kp C_PP,     &kp C_STOP,    &kp C_MUTE,    U_NP,         U_NP
