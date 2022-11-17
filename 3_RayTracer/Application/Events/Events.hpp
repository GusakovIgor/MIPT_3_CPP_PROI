#include <SDL2/SDL.h>
#include "Keyboard.hpp"
#include "Mouse.hpp"

enum KeyState
{
	APP_KEYPRESSED  = SDL_PRESSED,
	APP_KEYRELEASED = SDL_RELEASED
};

enum AppEventType
{
	APP_AUDIODEVICEADDED         = SDL_AUDIODEVICEADDED,
	APP_AUDIODEVICEREMOVED       = SDL_AUDIODEVICEREMOVED,
	APP_CONTROLLERAXISMOTION     = SDL_CONTROLLERAXISMOTION,
	APP_CONTROLLERBUTTONDOWN     = SDL_CONTROLLERBUTTONDOWN,
	APP_CONTROLLERBUTTONUP       = SDL_CONTROLLERBUTTONUP,
	APP_CONTROLLERDEVICEADDED    = SDL_CONTROLLERDEVICEADDED,
	APP_CONTROLLERDEVICEREMOVED  = SDL_CONTROLLERDEVICEREMOVED,
	APP_CONTROLLERDEVICEREMAPPED = SDL_CONTROLLERDEVICEREMAPPED,
	APP_DOLLARGESTURE            = SDL_DOLLARGESTURE,
	APP_DOLLARRECORD             = SDL_DOLLARRECORD,
	APP_DROPFILE                 = SDL_DROPFILE,
	APP_DROPTEXT                 = SDL_DROPTEXT,
	APP_DROPBEGIN                = SDL_DROPBEGIN,
	APP_DROPCOMPLETE             = SDL_DROPCOMPLETE,
	APP_FINGERMOTION             = SDL_FINGERMOTION,
	APP_FINGERDOWN               = SDL_FINGERDOWN,
	APP_FINGERUP                 = SDL_FINGERUP,
	APP_KEYDOWN                  = SDL_KEYDOWN,
	APP_KEYUP                    = SDL_KEYUP,
	APP_JOYAXISMOTION            = SDL_JOYAXISMOTION,
	APP_JOYBALLMOTION            = SDL_JOYBALLMOTION,
	APP_JOYHATMOTION             = SDL_JOYHATMOTION,
	APP_JOYBUTTONDOWN            = SDL_JOYBUTTONDOWN,
	APP_JOYBUTTONUP              = SDL_JOYBUTTONUP,
	APP_JOYDEVICEADDED           = SDL_JOYDEVICEADDED,
	APP_JOYDEVICEREMOVED         = SDL_JOYDEVICEREMOVED,
	APP_MOUSEMOTION              = SDL_MOUSEMOTION,
	APP_MOUSEBUTTONDOWN          = SDL_MOUSEBUTTONDOWN,
	APP_MOUSEBUTTONUP            = SDL_MOUSEBUTTONUP,
	APP_MOUSEWHEEL               = SDL_MOUSEWHEEL,
	APP_MULTIGESTURE             = SDL_MULTIGESTURE,
	APP_QUIT                     = SDL_QUIT,
	APP_SYSWMEVENT               = SDL_SYSWMEVENT,
	APP_TEXTEDITING              = SDL_TEXTEDITING,
	APP_TEXTINPUT                = SDL_TEXTINPUT,
	APP_USEREVENT                = SDL_USEREVENT,
	APP_WINDOWEVENT              = SDL_WINDOWEVENT
};

typedef SDL_Event AppEvent;