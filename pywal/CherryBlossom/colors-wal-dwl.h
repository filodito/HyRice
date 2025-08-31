/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x110b07ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc3c2c1ff, 0x110b07ff, 0x6a5f56ff },
	[SchemeSel]  = { 0xc3c2c1ff, 0xD4B495ff, 0xB6A48Aff },
	[SchemeUrg]  = { 0xc3c2c1ff, 0xB6A48Aff, 0xD4B495ff },
};
