#ifndef PLEX_SCREENEFFECTS_H
#define PLEX_SCREENEFFECTS_H

#include "windowing/graphics.h"

typedef enum
{
	PLEX_SCREENEFFECT_TINTFADE = 0,
	PLEX_SCREENEFFECT_SPLATTER = 1
} PLEX_SCREENEFFECT_TYPE;

#ifdef __cplusplus
extern "C"
{
#endif
	extern int64_t PLEX_doScreenEffect(const PLEX_SCREENEFFECT_TYPE type, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a, const bool loop, const bool screenOffset, const uint64_t duration, const double minPerc, const uint64_t time);

	extern int64_t PLEX_doScreenEffectRanged(const PLEX_SCREENEFFECT_TYPE type, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a, const bool loop, const bool screenOffset, const uint64_t duration, const double minPerc, const PLEX_RECT range, const uint64_t time);

	extern void PLEX_ceaseScreenEffect(const int64_t index);

	extern void PLEX_startScreenEffects(const uint64_t time);

	extern void PLEX_updateScreenEffects(const uint64_t time);

	extern void PLEX_endScreenEffects();

	extern void PLEX_disableScreenEffects();
	extern void PLEX_enableScreenEffects();
	extern bool PLEX_screenEffectsDisabled();
#ifdef __cplusplus
}
#endif

#endif
