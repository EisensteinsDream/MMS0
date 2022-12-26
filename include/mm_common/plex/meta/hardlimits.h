#ifndef PLEX_HARDLIMITS_H
#define PLEX_HARDLIMITS_H

#define PLEX_LIMIT_DRAWLIST 1024
#define PLEX_LIMIT_TEXLIMIT 256

#define PLEX_LIMIT_DEFAULTS 256

#define PLEX_LIMIT_SOUNDCHANNELS 12
#define PLEX_LIMIT_PREBUFFERCOUNT 64

#define PLEX_LIMIT_SOUNDBUFFERLEN 5292000 // < enough for 30 uncompressed seconds at a sample rate of 44100 and a frame size of a signed 32 bit int

#define PLEX_LIMIT_NUMCONVPREC 1000000000 // < should be a number starting with 1 then the number of 0's to indicate precision. Like one million would be six zeroes. This macro is used to convert digits in floating numbes to strings.

#define PLEX_LIMIT_GENMAX 1024 // generator

#define PLEX_LIMIT_PROMMAX 64 // prominence machine

#define PLEX_LIMIT_LINEPARSE 1024
#define PLEX_LIMIT_TOKENLIMIT 32

#if (PLEX_RENDERER_TYPE == PLEX_RENDERER_TYPE_GL_1_4)
	#define PLEX_LIMIT_GL_INDICES 960 // < shapecount * 4
	#define PLEX_LIMIT_GL_VERTSET 2880 // < shapecount * 12
	#define PLEX_LIMIT_GL_COLVERTSET 3840 // < shapecount * 16
	#define PLEX_LIMIT_GL_TEXVERTSET 1920 // < shapecount * 8
#endif

#define PLEX_LIMIT_STARTINDEXFILECAP 128
#define PLEX_LIMIT_STARTINDEXFILEGROWTH 16

#define PLEX_LIMIT_CONTROLLERS 16

#define PLEX_DEFAULT_COMMENTBUFFERLIMIT 256

#define PLEX_DEFAULT_FRAMEMAX 64
#define PLEX_DEFAULT_ANIMATIONMAX 64

#define PLEX_SOUNDBREAKOUTATTEMPTS 32

#define PLEX_SCREENEFFECTS_LIMIT 32

#endif
