/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x12171fff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc3c5c7ff, 0x12171fff, 0x5e6772ff },
	[SchemeSel]  = { 0xc3c5c7ff, 0x7496ACff, 0x6E91AFff },
	[SchemeUrg]  = { 0xc3c5c7ff, 0x6E91AFff, 0x7496ACff },
};
