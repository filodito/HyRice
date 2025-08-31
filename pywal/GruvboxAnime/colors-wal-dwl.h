/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x121314ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc3c4c4ff, 0x121314ff, 0x5a646fff },
	[SchemeSel]  = { 0xc3c4c4ff, 0xA0997Eff, 0x8F8B75ff },
	[SchemeUrg]  = { 0xc3c4c4ff, 0x8F8B75ff, 0xA0997Eff },
};
