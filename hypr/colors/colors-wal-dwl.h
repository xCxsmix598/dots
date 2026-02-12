/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x181b22ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc5c6c7ff, 0x181b22ff, 0x606676ff },
	[SchemeSel]  = { 0xc5c6c7ff, 0x537E82ff, 0x68787Eff },
	[SchemeUrg]  = { 0xc5c6c7ff, 0x68787Eff, 0x537E82ff },
};
