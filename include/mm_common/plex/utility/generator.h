#ifndef PLEX_GENERATOR_H
#define PLEX_GENERATOR_H

#include "utility/math.h"

typedef struct
{
	double startX, startY, endX, endY;
	size_t phaseLen, phaseStart;
	uint64_t duration;
} PLEX_GENERATED;

typedef struct
{
	double minX, maxX, minY, maxY, minEndX, maxEndX, minEndY, maxEndY;
	uint64_t duration, minWait, maxWait, start, minGenDuration, maxGenDuration;

	PLEX_GENERATED generated[PLEX_LIMIT_GENMAX];
	uint64_t waits[PLEX_LIMIT_GENMAX];
	size_t generatedCount;
	bool recycle;
} PLEX_GENERATOR;

#ifdef __cplusplus
extern "C"
{
#endif
	extern PLEX_GENERATOR PLEX_createGenerator(const double minX, const double maxX, const double minY, const double maxY, const double minEndX, const double maxEndX, const double minEndY, const double maxEndY, const uint64_t duration, const uint64_t minWait, const uint64_t maxWait, const uint64_t minGenDuration, const uint64_t maxGenDuration, const bool recycle);

	extern void PLEX_startGenerator(const uint64_t time, PLEX_GENERATOR* generator);

	extern void PLEX_updateGenerator(const uint64_t time, PLEX_GENERATOR* generator);

	extern bool PLEX_pullGenerated(const size_t index, const uint64_t time, double* x, double* y, PLEX_GENERATOR* generator);

	extern void PLEX_extendGeneratorDuration(const uint64_t by, PLEX_GENERATOR* generator);

	extern size_t PLEX_generatedCount(const PLEX_GENERATOR generator);

	extern bool PLEX_generationFinished(const uint64_t time, const PLEX_GENERATOR generator);
#ifdef __cplusplus
}
#endif

#endif
