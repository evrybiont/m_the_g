#ifndef MAIN_MENU_STATE_H
#define MAIN_MENU_STATE_H

#include "game.h"

class MainMenuState: public State {
  public:
    MainMenuState();
    void init(Game&);
    int nextArea();
  private:
    scope area;
};

#endif
