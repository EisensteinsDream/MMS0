#ifndef PLEX_GRAPHICS_H
#define PLEX_GRAPHICS_H

#include "windowing/texture.h"
#include "windowing/input.h"

#ifdef __cplusplus
extern "C"
{
#endif
	extern bool PLEX_startGraphics();
	extern bool PLEX_updateGraphics(SDL_Window* window, const uint32_t w, const uint32_t h);
	extern void PLEX_endGraphics();

	extern void PLEX_setTarget(const size_t texture);
	extern void PLEX_unsetTarget();

	extern void PLEX_drawRect(const size_t order, const int64_t x, const int64_t y, const int64_t w, const int64_t h, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a, const uint8_t thickness, const bool offset);

	extern void PLEX_drawLine(const size_t order, const int64_t x, const int64_t y, const int64_t x2, const int64_t y2, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a, const uint8_t thickness, const bool offset);

	extern void PLEX_drawLine2(const size_t order, const int64_t x, const int64_t y, const int64_t length, const double direction, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a, const uint8_t thickness, const bool offset);

	extern void PLEX_fillRect(const size_t order, const int64_t x, const int64_t y, const int64_t w, const int64_t h, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a, const bool offset);

	extern void PLEX_printTexture(const size_t order, const size_t texture, const int64_t fx, const int64_t fy, const int64_t fw, const int64_t fh, const int64_t tx, const int64_t ty, const int64_t tw, const int64_t th, const bool offset);

	extern void PLEX_printTextureTinted(const size_t order, const size_t texture, const int64_t fx, const int64_t fy, const int64_t fw, const int64_t fh, const int64_t tx, const int64_t ty, const int64_t tw, const int64_t th, const uint8_t r, const uint8_t g, const uint8_t b, const bool offset);

	extern void PLEX_printFontLetter(const size_t order, const double wPerc, const double hPerc, const int64_t ox, const int64_t oy, const int64_t ow, const int64_t oh, const uint8_t symbol, const char* const alphaString, const size_t texture, const bool offset);

	extern void PLEX_printFontLetterTinted(const size_t order, const double wPerc, const double hPerc, const int64_t ox, const int64_t oy, const int64_t ow, const int64_t oh, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t symbol, const char* const alphaString, const size_t texture, const bool offset);

	extern void PLEX_printFontString(const size_t order, const double wPerc, const double hPerc, const int64_t ox, const int64_t oy, const int64_t ow, const int64_t oh, const char* const string, const char* const alphaString, const size_t texture, const bool offset);

	extern void PLEX_printFontStringTinted(const size_t order, const double wPerc, const double hPerc, const int64_t ox, const int64_t oy, const int64_t ow, const int64_t oh, const uint8_t r, const uint8_t g, const uint8_t b, const char* const string, const char* const alphaString, const size_t texture, const bool offset);

	extern bool PLEX_drawArrowButton(const size_t order, const int64_t x, const int64_t y, const int64_t w, const int64_t h, const uint8_t fr, const uint8_t fg, const uint8_t fb, const uint8_t fa, const uint8_t br, const uint8_t bg, const uint8_t bb, const uint8_t ba, const uint8_t thickness, const bool flip, const bool offset);

	extern void PLEX_drawIcon(const size_t order, const int64_t x, const int64_t y, const int64_t w, const int64_t h, const uint8_t br, const uint8_t bg, const uint8_t bb, const uint8_t ba, const size_t texture, const int64_t tx, const int64_t ty, const int64_t tw, const int64_t th, const uint8_t thickness, const bool offset);

	extern void PLEX_drawIconTinted(const size_t order, const int64_t x, const int64_t y, const int64_t w, const int64_t h, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t br, const uint8_t bg, const uint8_t bb, const uint8_t ba, const size_t texture, const int64_t tx, const int64_t ty, const int64_t tw, const int64_t th, const uint8_t thickness, const bool offset);

	extern void PLEX_drawLabel(const size_t order, const char* const message, const double wPerc, const double hPerc, const uint8_t br, const uint8_t bg, const uint8_t bb, const uint8_t ba, const int64_t x, const int64_t y, const int64_t w, const int64_t h, const double ipx, const double ipy, const double ipw, const double iph, const uint8_t thickness, const char* const alphaString, const size_t fontTexture, const size_t texture, const int64_t tx, const int64_t ty, const int64_t tw, const int64_t th, const bool offset);

	extern void PLEX_drawTooltip(const size_t order, const char* const message, const double wPerc, const double hPerc, const uint8_t br, const uint8_t bg, const uint8_t bb, const uint8_t ba, const int64_t x, const int64_t y, const int64_t w, const int64_t h, const int64_t dx, const int64_t dy, const int64_t lw, const int64_t lh, const double ipx, const double ipy, const double ipw, const double iph, const uint8_t thickness, const char* const alphaString, const size_t fontTexture, const size_t texture, const int64_t tx, const int64_t ty, const int64_t tw, const int64_t th, const bool offset);

	extern void PLEX_drawTextBox(const size_t order, const char* const message, const double wPerc, const double hPerc, const uint8_t br, const uint8_t bg, const uint8_t bb, const uint8_t ba, const int64_t x, const int64_t y, const int64_t w, const int64_t h, const uint32_t fw, const uint32_t fh, const double ipx, const double ipy, const double ipw, const double iph, const uint8_t thickness, const char* const alphaString, const size_t fontTexture, const size_t texture, const int64_t tx, const int64_t ty, const int64_t tw, const int64_t th, const double lineSpacePerc, const bool offset);

	extern bool PLEX_drawButton(const size_t order, const char* const message, const double wPerc, const double hPerc, const int64_t x, const int64_t y, const int64_t w, const int64_t h, const int64_t tx, const int64_t ty, const int64_t tw, const int64_t th, const uint8_t fr, const uint8_t fg, const uint8_t fb, const uint8_t fa, const uint8_t br, const uint8_t bg, const uint8_t bb, const uint8_t ba, const uint8_t thickness, const char* const alphaString, const size_t texture, const bool offset);

	extern bool PLEX_drawIconButton(const size_t order, const bool selected, const int64_t x, const int64_t y, const int64_t w, const int64_t h, const int64_t tx, const int64_t ty, const int64_t tw, const int64_t th, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a, const uint8_t sr, const uint8_t sg, const uint8_t sb, const uint8_t sa, const uint8_t ovr, const int64_t ovb, const int64_t ovg, const int64_t ova, const uint8_t sovr, const int64_t sovb, const int64_t sovg, const int64_t sova, const uint8_t thickness, const size_t texture, const bool offset);

	extern void PLEX_drawChargeBar(const size_t order, const double fullness, const int64_t x, const int64_t y, const int64_t w, const int64_t h, const uint8_t fr, const uint8_t fg, const uint8_t fb, const uint8_t fa, const uint8_t br, const uint8_t bg, const uint8_t bb, const uint8_t ba, const uint8_t thickness, const bool vertical, const bool offset);

	extern void PLEX_drawPanorama(const size_t order, const size_t texture);

	extern void PLEX_clear(const size_t order, const uint8_t r, const uint8_t g, const uint8_t b);

	extern void PLEX_clearAlpha(const size_t order, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a);

	extern void PLEX_clearOffsetArea(const size_t order, const uint8_t r, const uint8_t g, const uint8_t b);

	extern void PLEX_clearOffsetAreaAlpha(const size_t order, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a);

	extern void PLEX_drawBlendMode(const SDL_BlendMode mode);

	extern void PLEX_setCustomCursor(const size_t tex, const int64_t w, const int64_t h, const int64_t fx, const int64_t fy, const int64_t fw, const int64_t fh);

	extern void PLEX_setCustomCursorTinted(const size_t tex, const int64_t w, const int64_t h, const int64_t fx, const int64_t fy, const int64_t fw, const int64_t fh, const uint8_t r, const uint8_t g, const uint8_t b);

	extern void PLEX_unsetCustomCursor();

	extern void PLEX_showAllTooltips();
	extern void PLEX_showTogglesTooltips();
	extern void PLEX_showAllClickables();

	extern size_t PLEX_takeScreencap(const bool offset);
#ifdef __cplusplus
}
#endif

#endif
