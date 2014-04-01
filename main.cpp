#include "igf.h"
#include <iostream>

int main() {

  if (game.isRunning()) {
    game.initState();
  }

  std::cout << "quit\n";
  SDL_Quit();
}
