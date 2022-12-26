#ifndef PLEX_ERROR_H
#define PLEX_ERROR_H

#include "terminate.h"

#ifdef __cplusplus
extern"C"
{
#endif
	extern void PLEX_errorNoTerminate(const char* const header, const char* const body);
	extern void PLEX_errorTerminate(const char* const header, const char* const body);

	extern void PLEX_SDLerror();
	extern void PLEX_PortAudioError(const PaError error);
#ifdef __cplusplus
}
#endif

#endif
