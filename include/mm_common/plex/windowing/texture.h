#ifndef PLEX_TEXTURES_H
#define PLEX_TEXTURES_H

#include "windowing/window.h"

#include "utility/fakestrings.h"

#ifdef __cplusplus
extern "C"
{
#endif
	extern bool PLEX_startTextures();
	extern void PLEX_updateTextures();
	extern void PLEX_endTextures();

	extern size_t PLEX_createGeneratedTexture(const uint32_t w, const uint32_t h, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a);

	extern size_t PLEX_loadTextureFromFile(const uint32_t w, const uint32_t h, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a, const double tint, const char* const fileloc);

	extern void PLEX_clearTexture(const size_t index);

	extern void PLEX_unclearTexture(const size_t index);

	extern void PLEX_destroyTexture(const size_t index);

	extern size_t PLEX_nullTexture();

	extern bool PLEX_textureIsNull(const size_t index);

	extern void PLEX_textureWH(const size_t index, uint32_t* w, uint32_t* h);

	extern size_t PLEX_rotateCopyTexture(const size_t from, const uint32_t cx, const uint32_t cy, const uint32_t cw, const uint32_t ch, const uint32_t mx, const uint32_t my, const double angle);

	extern PLEX_LOW_TEXTURE PLEX_innerTexture(const size_t index);

	extern bool PLEX_textureIsCleared(const size_t index);
#ifdef __cplusplus
}
#endif

#endif
