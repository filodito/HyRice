static const char norm_fg[] = "#c3c4c4";
static const char norm_bg[] = "#121314";
static const char norm_border[] = "#5a646f";

static const char sel_fg[] = "#c3c4c4";
static const char sel_bg[] = "#A0997E";
static const char sel_border[] = "#c3c4c4";

static const char urg_fg[] = "#c3c4c4";
static const char urg_bg[] = "#8F8B75";
static const char urg_border[] = "#8F8B75";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
