#ifndef PLEX_GRAPHICS_LOW_H
#define PLEX_GRAPHICS_LOW_H

#include "windowing/texture_low.h"

#if (PLEX_RENDERER_TYPE == PLEX_RENDERER_TYPE_SDL)
#define PLEX_LOW_NOTARGET NULL
#endif

#if (PLEX_RENDERER_TYPE == PLEX_RENDERER_TYPE_GL_1_4)
extern const PLEX_LOW_TEXTURE PLEX_LOW_NOTARGET;
#endif

#ifdef __cplusplus
extern "C"
{
#endif
	extern SDL_Window* PLEX_low_createSDLWindow(const char* title, const uint32_t width, const uint32_t height, const bool allowResize);
	extern void PLEX_low_destroySDLWindow(SDL_Window* const window);

	extern void PLEX_low_updateRenderer(SDL_Window* const window, const uint32_t w, const uint32_t h);

	extern void PLEX_low_fillRect(const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a, const SDL_Rect* s, const SDL_BlendMode blendMode);

	extern void PLEX_low_fillRects(const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a, const SDL_Rect* s, const size_t count, const SDL_BlendMode blendMode);

	extern void PLEX_low_getTintTexturesRGB(PLEX_LOW_TEXTURE texture, uint8_t* r, uint8_t* g, uint8_t* b);

	extern void PLEX_low_tintTexturesRGB(PLEX_LOW_TEXTURE texture, const uint8_t r, const uint8_t g, const uint8_t b);

	extern void PLEX_low_copyTexture(PLEX_LOW_TEXTURE texture, const SDL_Rect* from, const SDL_Rect* to, const SDL_BlendMode blendMode);

	extern void PLEX_low_clear(const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a);

	extern void PLEX_low_setRenderTarget(PLEX_LOW_TEXTURE target);

	extern void PLEX_low_setBlendTarget(const SDL_BlendMode blendMode);

	// extern SDL_Renderer* PLEX_low_getRenderer(); < forward declared in texture_low. doesn't exist in all implementations.

	extern PLEX_LOW_TEXTURE PLEX_low_getRenderTarget();

	extern SDL_BlendMode PLEX_low_getRenderBlendMode();
#ifdef __cplusplus
}
#endif

#endif
