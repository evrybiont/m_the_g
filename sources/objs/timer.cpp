#include "../heads/timer.h"
#include <iostream>

void Timer::start() { startTime = SDL_GetTicks(); }

int Timer::getTime() { return SDL_GetTicks() - startTime; }
