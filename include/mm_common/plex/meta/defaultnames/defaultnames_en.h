#ifndef PLEX_DEFAULTNAMES_EN_H
#define PLEX_DEFAULTNAMES_EN_H

#define PLEX_DEFAULT_FILENAME "config_en"

// names

#define PLEX_DEFNAME_MAINWINWIDTH "main window width"
#define PLEX_DEFNAME_MAINWINHEIGHT "main window height"

#define PLEX_DEFNAME_KILLONESCAPE "kill on escape"
#define PLEX_DEFNAME_KILLONCLOSE "kill on close"

#define PLEX_DEFNAME_ALLOWRESIZE "allow resize"
#define PLEX_DEFNAME_ALLOWMAXIMIZE "allow maximize"
#define PLEX_DEFNAME_STARTMAXIMIZED "start maximized"

#define PLEX_DEFNAME_DISABLESOUND "disable sound"

#define PLEX_DEFNAME_CURSOR_R "cursor red"
#define PLEX_DEFNAME_CURSOR_G "cursor green"
#define PLEX_DEFNAME_CURSOR_B "cursor blue"

#define PLEX_DEFNAME_CONFIGRELOADBUTTON "config reload button"

#define PLEX_DEFNAME_CONTROLLERPAUSE "allow controller pause"

#define PLEX_DEFNAME_DISABLECONTROLLER "disable controller"
#define PLEX_DEFNAME_DISABLEJOYSTICK "disable joystick"
#define PLEX_DEFNAME_DISABLEKEYBOARD "disable keyboard"
#define PLEX_DEFNAME_DISABLEMOUSE "disable mouse"

// descriptions

#define PLEX_DEFDESC_MAINWINWIDTH "Width of the window must be between 800 and 4096"
#define PLEX_DEFDESC_MAINWINHEIGHT "Height of the window must be between 600 and 2160"

#define PLEX_DEFDESC_KILLONESCAPE "Controls if the ESC key kills the program. Either this or the kill on close need to be true."
#define PLEX_DEFDESC_KILLONCLOSE "Controls if closing the window kills the program. Either this or the kill on close need to be true."

#define PLEX_DEFDESC_ALLOWRESIZE "Controls whether or not you can resize the game window."
#define PLEX_DEFDESC_ALLOWMAXIMIZE "Controls whether or not you can maximize the window. Window resize must be enabled for this to work"
#define PLEX_DEFDESC_STARTMAXIMIZED "Starts window maximized (must have both allow maximize and allow resize enabled)"

#define PLEX_DEFDESC_DISABLESOUND "Disables all sound if true"

#define PLEX_DEFDESC_CURSOR_R "Sets cursor to red (currently does nothing)"
#define PLEX_DEFDESC_CURSOR_G "Sets cursor to green (currently does nothing)"
#define PLEX_DEFDESC_CURSOR_B "Sets cursor to blue (currently does nothing)"

#define PLEX_DEFDESC_CONFIGRELOADBUTTON "Decides whether or not you are able to reload the config by pressing ctrl+F1 (experimental/dangerous)"

#define PLEX_DEFDESC_CONTROLLERPAUSE "Decides whether or not the 'pause' button on a controller pauses the game"

#define PLEX_DEFDESC_DISABLECONTROLLER "Disable controller input"
#define PLEX_DEFDESC_DISABLEJOYSTICK "Disable joystick input (currently does nothing)"
#define PLEX_DEFDESC_DISABLEKEYBOARD "Disable keyboard input (does not work if both controller and mouse are disabled, does not interfere with close on escape)"
#define PLEX_DEFDESC_DISABLEMOUSE "disable mouse input"

#endif
