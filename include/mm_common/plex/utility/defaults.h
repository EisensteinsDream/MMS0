#ifndef PLEX_DEFAULT_H
#define PLEX_DEFAULT_H

#include "meta/cinclude.h"

#include "meta/defaultnames.h"

#include "meta/defaultlimits.h"

typedef enum
{
	PLEX_DEF_UINT8,
	PLEX_DEF_UINT32,
	PLEX_DEF_BOOL,
	PLEX_DEF_DOUBLE
} PLEX_DEF_ENTRYTYPE;

#ifdef __cplusplus
extern "C"
{
#endif
	extern uint32_t PLEX_DEF_width();
	extern uint32_t PLEX_DEF_height();

	extern bool PLEX_DEF_killOnEscape();
	extern bool PLEX_DEF_killOnClose();

	extern bool PLEX_DEF_allowResize();
	extern bool PLEX_DEF_allowMaximize();
	extern bool PLEX_DEF_startMaximized();

	extern bool PLEX_DEF_disableAudio();

	extern uint8_t PLEX_DEF_cursorR();
	extern uint8_t PLEX_DEF_cursorG();
	extern uint8_t PLEX_DEF_cursorB();

	extern bool PLEX_DEF_configReloadButton();

	extern bool PLEX_DEF_controllerPause();

	extern bool PLEX_DEF_disableController();
	extern bool PLEX_DEF_disableJoystick();
	extern bool PLEX_DEF_disableKeyboard();
	extern bool PLEX_DEF_disableMouse();

	extern uint32_t PLEX_DEF_minWindowW();
	extern uint32_t PLEX_DEF_minWindowH();

	extern uint32_t PLEX_DEF_maxWindowW();
	extern uint32_t PLEX_DEF_maxWindowH();

	extern bool PLEX_assignDefaultUInt8(const char* const name, const uint8_t min, const uint8_t max, const uint8_t def, const char* const comment, uint8_t* content);

	extern bool PLEX_assignDefaultUInt32(const char* const name, const uint32_t min, const uint32_t max, const uint32_t def, const char* const comment, uint32_t* content);

	extern bool PLEX_assignDefaultBool(const char* const name, const char* const comment, bool* content);

	extern void PLEX_startDefaults();
	extern void PLEX_endDefaults();

	extern void PLEX_reloadDefaults();

	extern void PLEX_uncheckDefaultReloadFlag();
	extern bool PLEX_defaultReloadFlag();
#ifdef __cplusplus
}
#endif

#endif
