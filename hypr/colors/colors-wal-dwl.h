/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x101c21ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc3c6c7ff, 0x101c21ff, 0x5e6d72ff },
	[SchemeSel]  = { 0xc3c6c7ff, 0xA95A66ff, 0x91545Fff },
	[SchemeUrg]  = { 0xc3c6c7ff, 0x91545Fff, 0xA95A66ff },
};
