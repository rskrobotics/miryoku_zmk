// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Chocofi (beekeeb), nice!nano v2 + nice!view, Colemak-DH.
// Colemak-DH is the Miryoku default, so no MIRYOKU_ALPHAS_* is set.

// Nav layer with plain &kp ESC and &kp TAB added, for applications that sample
// key state per frame and so miss the ~1-2 ms pulse a hold-tap emits when it
// resolves as a tap (NVIDIA Isaac Sim / Omniverse Kit).  Escape and Tab exist
// nowhere else in the keymap as plain &kp -- only as the tap halves of
// U_LT(U_MEDIA, ESC) and U_LT(U_MOUSE, TAB) on Base.
//
// Copied verbatim from MIRYOKU_ALTERNATIVES_NAV in
// miryoku/miryoku_babel/miryoku_layer_alternatives.h, changing only the two
// U_NA (&none) slots in the left inner-index column:
//   home row   -> &kp ESC
//   bottom row -> &kp TAB
//
// miryoku_babel/miryoku_layer_selection.h guards this with
// "#if !defined(MIRYOKU_LAYER_NAV)", so the definition here wins.
// MIRYOKU_LAYERMAPPING_NAV is guarded separately and keeps its default.

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &kp ESC,           &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       &kp TAB,           &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP
