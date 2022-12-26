#ifndef PLEX_LANGUAGE_H
#define PLEX_LANGUAGE_H

#define PLEX_LANGUAGE_ENGLISH 0

#ifndef PLEX_LANGUAGE
#define PLEX_LANGUAGE PLEX_LANGUAGE_ENGLISH
#endif

#if (PLEX_LANGUAGE == PLEX_LANGUAGE_ENGLISH)
#include "language/language_en.h"
#endif

#endif
