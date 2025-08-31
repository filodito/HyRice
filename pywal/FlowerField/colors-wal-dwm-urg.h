static const char norm_fg[] = "#c7c6c6";
static const char norm_bg[] = "#201e1e";
static const char norm_border[] = "#776262";

static const char sel_fg[] = "#c7c6c6";
static const char sel_bg[] = "#84A697";
static const char sel_border[] = "#c7c6c6";

static const char urg_fg[] = "#c7c6c6";
static const char urg_bg[] = "#5F938E";
static const char urg_border[] = "#5F938E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
