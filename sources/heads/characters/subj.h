#ifndef SUBJ_H
#define SUBJ_H

#include "../../shared/init_lsdl.h"

class Subj {
  public:
    Subj();
    SDL_Rect* getClipRun(int);
  private:
    SDL_Rect crun[7];
    void setClipRun();
};

#endif
