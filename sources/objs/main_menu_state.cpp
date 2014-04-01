#include "../heads/main_menu_state.h"
#include <iostream>

MainMenuState::MainMenuState() : area(GAME_AREA) {}

void MainMenuState::init(Game& game) { std::cout << "main menu state \n"; }

int MainMenuState::nextArea() { return area; }
