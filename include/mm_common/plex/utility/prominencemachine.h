#ifndef PLEX_PROMINENCEMACHINE_H
#define PLEX_PROMINENCEMACHINE_H

#include "utility/math.h"

typedef struct
{
	uint32_t prominences[PLEX_LIMIT_PROMMAX];
	uint64_t prominenceCap;
	size_t count;
} PLEX_PROMINENCEMACHINE;

#ifdef __cplusplus
extern "C"
{
#endif
	extern PLEX_PROMINENCEMACHINE PLEX_createProminenceMachine();

	extern void PLEX_addProminence(const uint32_t prominence, PLEX_PROMINENCEMACHINE* machine);

	extern void PLEX_removeProminence(const size_t index, PLEX_PROMINENCEMACHINE* machine);

	extern size_t PLEX_getProminence(const PLEX_PROMINENCEMACHINE* machine);
#ifdef __cplusplus
}
#endif

#endif
