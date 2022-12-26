#ifndef PLEX_TERMINATE_H
#define PLEX_TERMINATE_H

#include "meta/cinclude.h"

#ifdef __cplusplus
extern"C"
{
#endif
	extern void PLEX_terminate();
	extern void PLEX_unterminate();
	extern bool PLEX_isTerminated();

	extern void PLEX_askQuit();
	extern void PLEX_unaskQuit();

	extern bool PLEX_askingToQuit();
#ifdef __cplusplus
}
#endif

#endif
