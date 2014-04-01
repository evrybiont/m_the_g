#ifndef STATE_H
#define STATE_H

#include "../shared/tools_box.h"

class State {
  public:
    State();
    virtual void init(class Game&) = 0;
    virtual int nextArea() = 0;
  protected:
    bool is_active;
    enum scope {INTRO_AREA, MAIN_MENU_AREA, GAME_AREA};
};

#endif
