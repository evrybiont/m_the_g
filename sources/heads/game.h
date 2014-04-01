#ifndef GAME_H
#define GAME_H

#include <vector>
#include "state.h"

class Game {
  public:
    Game();
    bool isRunning();
    void initState();
    void chooseState();
    friend class IntroState;
    friend class MainMenuState;
  private:
    Game &self;
    bool running;
    std::vector<State*> buffer_states;
    State *current_state;
    SDL_Surface *screen;
};

#endif
