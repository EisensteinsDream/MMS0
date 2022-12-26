#ifndef PLEX_INPUT_H
#define PLEX_INPUT_H

#include "windowing/window.h"

#include "utility/math.h"
#include "utility/timer.h"

#include "terminate.h"

#ifdef __cplusplus
extern "C"
{
#endif
	extern bool PLEX_startInput();
	extern bool PLEX_updateInput();
	extern void PLEX_endInput();

	extern void PLEX_disablePause();
	extern void PLEX_enablePause();

	extern bool PLEX_upKey();
	extern bool PLEX_leftKey();
	extern bool PLEX_downKey();
	extern bool PLEX_rightKey();

	extern bool PLEX_mouseInside(const uint32_t x, const uint32_t y, const uint32_t w, const uint32_t h, const bool offset);

	extern bool PLEX_left();
	extern bool PLEX_leftClick();

	extern bool PLEX_right();
	extern bool PLEX_rightClick();

	extern uint32_t PLEX_MX();
	extern uint32_t PLEX_MY();

	extern bool PLEX_KEY_down(const uint8_t key);
	extern bool PLEX_KEY_press(const uint8_t key);

	extern bool PLEX_KEY_fdown(const size_t number);
	extern bool PLEX_KEY_fpress(const size_t number);

	extern bool PLEX_KEY_shift();

	extern bool PLEX_CONTROLLER_down(const size_t controller, const uint8_t button);
	extern bool PLEX_CONTROLLER_press(const size_t controller, const uint8_t button);

	extern int16_t PLEX_CONTROLLER_axis(const size_t controller, const size_t axisNum);

	extern size_t PLEX_CONTROLLER_count();

	extern bool PLEX_pauseDisabled();
#ifdef __cplusplus
}
#endif

#endif
