#ifndef PLEX_TEXTURE_LOW_H
#define PLEX_TEXTURE_LOW_H

#include "utility/defaults.h"
  
#define PLEX_RENDERER_TYPE_GL_1_4 1
#define PLEX_RENDERER_TYPE_SDL 0
  
#ifndef PLEX_RENDERER_TYPE
#define PLEX_RENDERER_TYPE PLEX_RENDERER_TYPE_SDL // < defaults to sdl hardware
#endif

#if (PLEX_RENDERER_TYPE == PLEX_RENDERER_TYPE_SDL)
#define PLEX_LOW_TEXTURE SDL_Texture*
#define PLEX_LOW_NOTEXTURE NULL
#endif

#if (PLEX_RENDERER_TYPE == PLEX_RENDERER_TYPE_GL_1_4)
#include <GL/glew.h>
#include <SDL2/SDL_opengl.h>
#include <GL/glu.h>
#include <GL/gl.h>

typedef struct
{
	GLuint contents, w, h;
} PLEX_LOW_TEXTURE;

extern const PLEX_LOW_TEXTURE PLEX_LOW_NOTEXTURE;

#endif

#ifdef __cplusplus
extern "C"
{
#endif
	extern PLEX_LOW_TEXTURE PLEX_low_generateTexture(const Uint32 format, const int access, const int w, const int h);

	extern void PLEX_low_clearTexture(PLEX_LOW_TEXTURE texture);

	extern void PLEX_low_setGeneratedTexture(PLEX_LOW_TEXTURE texture, const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a);

	extern void PLEX_low_textureFromSurface(SDL_Surface* surface, PLEX_LOW_TEXTURE texture, const uint8_t a);

	extern void PLEX_low_destroyTexture(PLEX_LOW_TEXTURE texture);

	extern void PLEX_low_rotateCopy(PLEX_LOW_TEXTURE from, PLEX_LOW_TEXTURE to, const double angle, SDL_FPoint point, SDL_Rect area, SDL_FRect toArea); // < values can't be constified

	extern void PLEX_low_textureWH(PLEX_LOW_TEXTURE texture, uint32_t* w, uint32_t* h);

	extern SDL_BlendMode PLEX_low_getTextureBlendMode(PLEX_LOW_TEXTURE texture);

	#if (PLEX_RENDERER_TYPE == PLEX_RENDERER_TYPE_SDL)
	extern SDL_Renderer* PLEX_low_getRenderer();
	extern void PLEX_low_destroyRenderer();
	#endif

	extern bool PLEX_low_compTextures(const PLEX_LOW_TEXTURE a, const PLEX_LOW_TEXTURE b);
	extern bool PLEX_low_lessTextures(const PLEX_LOW_TEXTURE a, const PLEX_LOW_TEXTURE b);
#ifdef __cplusplus
}
#endif

#endif
