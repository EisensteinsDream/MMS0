#ifndef PLEX_WINDOW_H
#define PLEX_WINDOW_H

#include "windowing/graphics_low.h"

#include "utility/error.h"

#define PLEX_WIDTHUNITMAX 32
#define PLEX_HEIGHTUNITMAX 24

#define PLEX_WIDTHRATIO 0.03125 // number = 25/800
#define PLEX_HEIGHTRATIO 0.0416666666667 // number = 25/600

#ifdef __cplusplus
extern "C"
{
#endif
	extern bool PLEX_startWindow(const char* const title, const uint32_t width, const uint32_t height);
	extern bool PLEX_updateWindow();
	extern void PLEX_endWindow();

	extern void PLEX_restartWindow(const char* const title, const bool resizable, const bool allowMaximize);

	extern void PLEX_markSizing();
	extern void PLEX_unmarkSizing();

	extern void PLEX_updateWindowResize();
	extern void PLEX_restoreWindow();

	extern bool PLEX_isSizing();

	extern uint32_t PLEX_TRANS_W(const double perc);
	extern uint32_t PLEX_TRANS_H(const double perc);

	extern uint32_t PLEX_WW(const bool offset);
	extern uint32_t PLEX_WH(const bool offset);

	extern double PLEX_UNIT(const double count);
	extern uint32_t PLEX_WOFFSET();
	extern uint32_t PLEX_HOFFSET();

	extern double PLEX_WOFFSETPERC();
	extern double PLEX_HOFFSETPERC();
	extern double PLEX_WCROPPERC();
	extern double PLEX_HCROPPERC();

	extern SDL_Window* PLEX_getWindowContents();
#ifdef __cplusplus
}
#endif

#endif
