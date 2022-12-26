#ifndef PLEX_DATETIME_H
#define PLEX_DATETIME_H

#include "meta/cinclude.h"

typedef struct
{
	uint16_t year;
	uint8_t month, day, hour, second, minute;
	bool pm;
} PLEX_DATETIME;

#ifdef __cplusplus
extern "C"
{
#endif
	extern void PLEX_setDateTime(const uint16_t year, const uint8_t month, const uint8_t day, const uint8_t hour, const uint8_t second, const uint8_t minute, const bool pm, PLEX_DATETIME* toSet);
	extern bool PLEX_setCurrentDateTime(PLEX_DATETIME* toSet);

	extern bool PLEX_getDateTime(uint8_t* day, uint8_t* month, uint16_t* year, const PLEX_DATETIME* from);
	extern bool PLEX_getTimeDateTime(uint8_t* minute, uint8_t* second, uint8_t* hour, bool* pm, const PLEX_DATETIME* from);

	extern uint8_t PLEX_getDayDateTime(const PLEX_DATETIME* from);
	extern uint8_t PLEX_getMonthDateTime(const PLEX_DATETIME* from);
	extern uint16_t PLEX_getYearDateTime(const PLEX_DATETIME* from);

	extern uint8_t PLEX_getMinuteDateTime(const PLEX_DATETIME* from);
	extern uint8_t PLEX_getSecondDateTime(const PLEX_DATETIME* from);
	extern uint8_t PLEX_getHourDateTime(const PLEX_DATETIME* from);
	extern uint8_t PLEX_getPMDateTime(const PLEX_DATETIME* from);

	extern PLEX_DATETIME PLEX_getDifferenceDateTime(const PLEX_DATETIME* from, const PLEX_DATETIME* from2);

	extern uint32_t PLEX_getTotalDaysDateTime(const PLEX_DATETIME* from);
#ifdef __cplusplus
}
#endif

#endif
