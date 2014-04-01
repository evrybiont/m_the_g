#include "../../heads/characters/subj.h"
#include <iostream>

void Subj::setClipRun() {

  //crun[0].x = 0;   crun[0].y = 0;   crun[0].w = 200; crun[0].h = 200;
  crun[0].x = 0;   crun[0].y = 0;   crun[0].w = 150; crun[0].h = 210;
  crun[1].x = 150; crun[1].y = 10;   crun[1].w = 150; crun[1].h = 200;
  crun[2].x = 300; crun[2].y = 0;   crun[2].w = 150; crun[2].h = 210;
  crun[3].x = 450; crun[3].y = 0;   crun[3].w = 150; crun[3].h = 210;
  crun[4].x = 0;   crun[4].y = 210; crun[4].w = 150; crun[4].h = 210;
  crun[5].x = 170; crun[5].y = 210; crun[5].w = 150; crun[5].h = 210;
  crun[6].x = 310; crun[6].y = 210; crun[6].w = 150; crun[6].h = 210;
  crun[7].x = 470; crun[7].y = 210; crun[7].w = 150; crun[7].h = 210;

}

Subj::Subj() {
  setClipRun();
}

SDL_Rect* Subj::getClipRun(int i) {
  return &crun[i];
}
