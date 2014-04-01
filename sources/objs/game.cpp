#include "../heads/game.h"
#include "../heads/intro_state.h"
#include "../heads/main_menu_state.h"
#include <iostream>

Game::Game() : running(true),
               screen(SDL_SetVideoMode(SC_WIDTH, SC_HEIGHT, SC_BPP, SDL_SWSURFACE)),
               self(*this)
               {}

bool Game::isRunning() { return running; }

void Game::chooseState() {
  int area;

  if (buffer_states.empty()) {
    area = INTRO;
  } else {
    State *state = buffer_states.back();
    area = state->nextArea();
  }

  switch(area) {
    case INTRO :
      current_state = new IntroState;
      break;
    case MAIN_MENU :
      current_state = new MainMenuState;
      break;
  }

  buffer_states.push_back(current_state);
}

void Game::initState() {
  chooseState();
  current_state->init(self);
};
