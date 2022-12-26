#ifndef PLEX_TIMER_H
#define PLEX_TIMER_H

#include "utility/fakestrings.h"

typedef struct
{
	uint64_t time, marker;
	bool paused, unpaused, started;
	double multiplier;
} PLEX_TIMER;

#ifdef __cplusplus
extern "C"
{
#endif
	extern PLEX_TIMER PLEX_genTimer();

	extern void PLEX_startTimer(PLEX_TIMER* timer, const uint64_t baseTime);

	extern void PLEX_updateTimer(PLEX_TIMER* timer, const uint64_t time);

	extern void PLEX_pause(PLEX_TIMER* timer);
	extern void PLEX_unpause(PLEX_TIMER* timer);
	extern bool PLEX_getPaused(PLEX_TIMER* timer);

	extern void PLEX_setMultiplierTimer(PLEX_TIMER* timer, const double multiplier);

	extern void PLEX_fastForward(PLEX_TIMER* timer, const uint64_t by);
	extern void PLEX_rewind(PLEX_TIMER* timer, const uint64_t by);

	extern uint64_t PLEX_getTime(PLEX_TIMER* timer);
	extern uint64_t PLEX_countdownTime(PLEX_TIMER* timer, const uint64_t from);

	extern void PLEX_resetTimer(PLEX_TIMER* timer);

	extern PLEX_FAKESTRING_10 PLEX_formatStringTime(const uint64_t time);

	extern PLEX_FAKESTRING_10 PLEX_timeString(PLEX_TIMER* timer);
	extern PLEX_FAKESTRING_10 PLEX_timeCountString(PLEX_TIMER* timer, const uint64_t from);

	extern bool PLEX_timerStarted(const PLEX_TIMER timer);

	extern bool PLEX_startTime();
	extern bool PLEX_updateTime();
	extern void PLEX_endTime();

	extern void PLEX_pauseGameTime();
	extern void PLEX_unpauseGameTime();
	extern bool PLEX_getGameTimePaused();

	extern uint64_t PLEX_getGameTime();
	extern uint64_t PLEX_getNoPauseTime();

	extern const char* PLEX_getGameTimeString();
#ifdef __cplusplus
}
#endif

#endif
