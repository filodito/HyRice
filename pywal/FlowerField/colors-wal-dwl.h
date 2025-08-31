/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x201e1eff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc7c6c6ff, 0x201e1eff, 0x776262ff },
	[SchemeSel]  = { 0xc7c6c6ff, 0x84A697ff, 0x5F938Eff },
	[SchemeUrg]  = { 0xc7c6c6ff, 0x5F938Eff, 0x84A697ff },
};
