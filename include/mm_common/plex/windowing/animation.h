#ifndef PLEX_ANIMATION_H
#define PLEX_ANIMATION_H

#include "windowing/graphics.h"

typedef struct
{
	size_t base;
	uint32_t fw, fh, wcount;
} PLEX_ANIMATION_PLATE;

typedef struct
{
	size_t frames[PLEX_DEFAULT_FRAMEMAX];
	size_t frameCount;
	uint64_t cycle, start, stopTime;
	bool stopped;
} PLEX_ANIMATION;

typedef struct
{
	PLEX_ANIMATION_PLATE plate;
	PLEX_ANIMATION animations[PLEX_DEFAULT_ANIMATIONMAX];
	size_t animationCount;
	bool stopped;
} PLEX_SPRITE;

#ifdef __cplusplus
extern "C"
{
#endif
	extern PLEX_ANIMATION_PLATE PLEX_createAnimationPlate(const double wPerc, const double hPerc, const size_t base);

	extern void PLEX_clearAnimationPlate(PLEX_ANIMATION_PLATE* plate);

	extern void PLEX_unclearAnimationPlate(PLEX_ANIMATION_PLATE* plate);

	extern void PLEX_destroyAnimationPlate(PLEX_ANIMATION_PLATE* plate);

	extern PLEX_SPRITE PLEX_createSprite(const PLEX_ANIMATION_PLATE* plate);

	extern void PLEX_addAnimation(PLEX_SPRITE* sprite, const uint64_t cycle, const uint64_t start);

	extern PLEX_ANIMATION* PLEX_getAnimation(const size_t index, PLEX_SPRITE* sprite);

	extern void PLEX_addAnimationFrame(const size_t frame, PLEX_ANIMATION* animation);

	extern void PLEX_startAnimation(const uint64_t start, PLEX_ANIMATION* animation);

	extern void PLEX_stopAnimation(PLEX_ANIMATION* animation);

	extern void PLEX_startSprite(const uint64_t start, PLEX_SPRITE* sprite);

	extern void PLEX_stopSprite(PLEX_SPRITE* sprite);

	extern void PLEX_clearSprite(PLEX_SPRITE* sprite);

	extern void PLEX_unclearSprite(PLEX_SPRITE* sprite);

	extern size_t PLEX_getFrame(const uint64_t time, uint32_t* x, uint32_t* y, uint32_t* w, uint32_t* h, const PLEX_ANIMATION animation, const PLEX_ANIMATION_PLATE plate);

	extern void PLEX_drawFrame(const size_t order, const uint64_t time, const uint32_t tx, const uint32_t ty, const uint32_t tw, const uint32_t th, const PLEX_ANIMATION animation, const PLEX_ANIMATION_PLATE plate, const bool offset);

	extern void PLEX_drawFrameTinted(const size_t order, const uint64_t time, const uint32_t tx, const uint32_t ty, const uint32_t tw, const uint32_t th, const uint8_t r, const uint8_t g, const uint8_t b, const PLEX_ANIMATION animation, const PLEX_ANIMATION_PLATE plate, const bool offset);

	extern void PLEX_drawSprite(const size_t order, const size_t index, const uint64_t time, const uint32_t tx, const uint32_t ty, const uint32_t tw, const uint32_t th, const PLEX_SPRITE sprite, const bool offset);

	extern void PLEX_drawSpriteTinted(const size_t order, const size_t index, const uint64_t time, const uint32_t tx, const uint32_t ty, const uint32_t tw, const uint32_t th, const uint8_t r, const uint8_t g, const uint8_t b, const PLEX_SPRITE sprite, const bool offset);

	extern bool PLEX_isAnimationStopped(const PLEX_ANIMATION animation);

	extern bool PLEX_isSpriteStopped(const PLEX_SPRITE sprite);

	extern uint64_t PLEX_animationCycleLen(const PLEX_ANIMATION animation);

	extern uint64_t PLEX_spriteCycleLen(const size_t index, const PLEX_SPRITE sprite);
#ifdef __cplusplus
}
#endif

#endif
