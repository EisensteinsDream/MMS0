#ifndef PLEX_SPRITETHEATER_H
#define PLEX_SPRITETHEATER_H

#include "windowing/animation.h"

#include "utility/timer.h"

#include "sound/sound.h"

#ifdef __cplusplus
extern "C"
{
#endif
	extern bool PLEX_beginSpriteTheater(const char* const stageName, const size_t backdrop, const uint32_t labelPlateX, const uint32_t labelPlateY, const uint32_t labelPlateW, const uint32_t labelPlateH, const uint8_t labelR, const uint8_t labelG, const uint8_t labelB, const size_t font, const size_t labelPlate, const size_t bubble, const size_t arrow, const uint64_t time);

	extern bool PLEX_updateSpriteTheater(const uint64_t time);

	extern void PLEX_endSpriteTheater();

	extern void PLEX_addSpriteTheaterSlide(const uint8_t r, const uint8_t g, const uint8_t b, const char* const message, const int64_t actor, const uint64_t waitTime);

	extern void PLEX_nextSlide(const uint64_t time);

	extern bool PLEX_inSpriteTheater();

	extern bool PLEX_isSpriteTheaterOver();

	extern int64_t PLEX_createActor(const PLEX_SPRITE sprite, const PLEX_RECT space, const bool hidden);

	extern void PLEX_hideActorChange(const size_t actor);

	extern void PLEX_unhideActorChange(const size_t actor);

	extern void PLEX_animationActorChange(const size_t actor, const size_t index);

	extern void PLEX_animationActorMove(const size_t actor, const double x, const double y);

	extern void PLEX_spriteTheaterMusicChange(const size_t ID);
	extern void PLEX_spriteTheaterMusicStop();
	extern void PLEX_spriteTheaterSoundEffect(const size_t ID);
#ifdef __cplusplus
}
#endif

#endif
