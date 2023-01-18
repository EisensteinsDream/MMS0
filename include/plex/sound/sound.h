#ifndef PLEX_SOUND_H
#define PLEX_SOUND_H

#include "utility/defaults.h"
#include "utility/error.h"
#include "utility/math.h"

#ifdef __cplusplus
extern "C"
{
#endif
	extern bool PLEX_startSound();
	extern bool PLEX_updateSound();
	extern void PLEX_endSound();

	extern void PLEX_reloadSoundDefaults();

	extern void PLEX_setSoundStartingIteration(const size_t to, const size_t index);
	extern void PLEX_setSoundEndingIteration(const size_t to, const size_t index);

	extern void PLEX_setComplexSoundSequence(const bool seq0, const bool seq1, const bool seq2, const bool seq3, const bool seq4, const bool seq5, const bool seq6, const bool seq7, const size_t count, const size_t index);

	extern bool PLEX_preloadSoundFileToSpecificBuffer(const char* const filename, const size_t buffer);
	extern int64_t PLEX_preloadSoundFile(const char* const filename);

	extern bool PLEX_assignBuffer(const int64_t buffer, const size_t index);
	extern bool PLEX_loadSoundFileIntoBuffer(const char* const filename, const size_t index);
	extern bool PLEX_setSoundBufferLen(const size_t length, const size_t index);

	extern void PLEX_bufferRandomSwap(const int64_t buffer1, const int64_t buffer2, const double perc1);

	extern void PLEX_rearrangeBuffer(const int64_t buffer, const double perc);

	extern void PLEX_clipBuffer(const int64_t buffer, const double perc);

	extern void PLEX_soundChannelOn(const bool loop, const size_t index);
	extern void PLEX_soundChannelOff(const size_t index);

	extern void PLEX_setVolume(const double volume, const size_t index);

	extern void PLEX_setUniversalSoundEffect(const size_t id);
	extern void PLEX_setUniversalThemeID(const size_t id);
	extern void PLEX_signalUniversalThemeStop();

	extern void PLEX_clearPreloads();

	extern uint64_t PLEX_channelDuration(const size_t index);

	extern size_t PLEX_channelIteration(const size_t index);

	extern bool PLEX_isSoundPlaying(const size_t index);

	extern int64_t PLEX_getBuffer(const size_t index);

	extern size_t PLEX_getUniversalThemeCueID();
	extern size_t PLEX_getUniversalSoundEffect();
	extern bool PLEX_getUniversalThemeStopSignal();
#ifdef __cplusplus
}
#endif

#endif
