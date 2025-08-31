static const char norm_fg[] = "#c3c2c1";
static const char norm_bg[] = "#110b07";
static const char norm_border[] = "#6a5f56";

static const char sel_fg[] = "#c3c2c1";
static const char sel_bg[] = "#D4B495";
static const char sel_border[] = "#c3c2c1";

static const char urg_fg[] = "#c3c2c1";
static const char urg_bg[] = "#B6A48A";
static const char urg_border[] = "#B6A48A";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
