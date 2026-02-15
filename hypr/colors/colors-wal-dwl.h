/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x191c24ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc5c6c8ff, 0x191c24ff, 0x616777ff },
	[SchemeSel]  = { 0xc5c6c8ff, 0x5B7192ff, 0x3E5A81ff },
	[SchemeUrg]  = { 0xc5c6c8ff, 0x3E5A81ff, 0x5B7192ff },
};
