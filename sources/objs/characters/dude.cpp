#include "../../heads/characters/dude.h"
#include <iostream>

void Dude::setClipRun() {
  crun[0].x = 324; crun[0].y = 0; crun[0].w = 42; crun[0].h = 65;
  crun[1].x = 388; crun[1].y = 0; crun[1].w = 42; crun[1].h = 65;
  crun[2].x = 452; crun[2].y = 0; crun[2].w = 42; crun[2].h = 65;
  crun[3].x = 4;   crun[3].y = 0; crun[3].w = 42; crun[3].h = 65;
  crun[4].x = 68;  crun[4].y = 0; crun[4].w = 42; crun[4].h = 65;
  crun[5].x = 132; crun[5].y = 0; crun[5].w = 42; crun[5].h = 65;
  crun[6].x = 196; crun[6].y = 0; crun[6].w = 42; crun[6].h = 65;
  crun[7].x = 260; crun[7].y = 0; crun[7].w = 42; crun[7].h = 65;
}

Dude::Dude() {
  setClipRun();
}

SDL_Rect* Dude::getClipRun(int i) {
  return &crun[i];
}
