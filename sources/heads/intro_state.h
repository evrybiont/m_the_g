#ifndef INTRO_STATE_H
#define INTRO_STATE_H

#include "game.h"

class IntroState: public State {
  public:
    IntroState();
    void init(Game&);
    int nextArea();
  private:
    scope area;
};

#endif
