#ifndef SDLF_SPACE_H
#define SDLF_SPACE_H

#include "../shared/init_lsdl.h"
#include "../shared/game_constants.h"
#include "../heads/timer.h"

namespace sdlf {
  SDL_Surface *loadImage(std::string);
  void apply_surface(int, int, SDL_Surface*, SDL_Surface*, SDL_Rect*);
  void delay(Timer&);
}

#endif
