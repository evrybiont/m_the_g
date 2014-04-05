#ifndef DUDE_H
#define DUDE_H

#include "../../shared/init_lsdl.h"

class Dude {
  public:
    Dude();
    SDL_Rect* getClipRun(int);
  private:
    SDL_Rect crun[7];
    void setClipRun();
};

#endif
