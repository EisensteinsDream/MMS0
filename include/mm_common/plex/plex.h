#ifndef PLEX_H
#define PLEX_H

#include "windowing/animation.h"

#include "windowing/screeneffects.h"

#include "utility/error.h"

#include "sound/sound.h"

#include "utility/generator.h"

#include "utility/prominencemachine.h"

#include "utility/fileparse.h"

#include "utility/spritetheater.h"

#ifdef __cplusplus
extern "C"
{
#endif
	extern bool PLEX_startPlex(const bool ignoreRunCheck, const char* const title);
	extern bool PLEX_updatePlex(const char* const title);
	extern void PLEX_endPlex();
#ifdef __cplusplus
}
#endif

#endif
