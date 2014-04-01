#include "../heads/intro_state.h"
#include "../heads/characters/subj.h"
#include <iostream>

IntroState::IntroState() : area(MAIN_MENU_AREA) {}

int IntroState::nextArea() { return area; }

void showAnimation(SDL_Surface *screen) {

}

void IntroState::init(Game &game) {
  SDL_Surface *image = NULL;
  SDL_Surface *screen = NULL;
  screen = game.screen;

  image = sdlf::loadImage("images/background/test.jpg");
  if (!image) {
      std::cout << "image null\n";
      printf("IMG_Load: %s\n", IMG_GetError());
  }

  //Uint32 color = SDL_MapRGB(optimizedImage->format, 0, 0, 0);
  //SDL_SetColorKey(optimizedImage, SDL_SRCCOLORKEY, color);
  //SDL_SetColorKey( image, SDL_SRCCOLORKEY, SDL_MapRGBA(image->format, 255, 255, 255,255) );
  //SDL_SetColorKey( image, SDL_SRCCOLORKEY, SDL_MapRGBA(image->format, NULL, NULL, NULL,SDL_ALPHA_TRANSPARENT) );
  SDL_Event event;
  int key_code;
  Timer fps;
  Subj subj;
  int i = 0;

  while(is_active) {
    fps.start();

    while (SDL_PollEvent(&event)) {
      key_code = event.key.keysym.sym;

      if (key_code == SDLK_ESCAPE || key_code == SDLK_SPACE) {
        is_active = false;
        break;
      }

      if (event.type == SDL_QUIT) {
        is_active = false;
        game.running = false;
      }
    }

    //SDL_FillRect( screen, &screen->clip_rect, SDL_MapRGB( screen->format, 0, 0, 0 ) );
    showAnimation(screen);
    
    sdlf::apply_surface(0, 0, image, screen, subj.getClipRun(0));
    //sdlf::apply_surface(150, 10, image, screen, subj.getClipRun(1));
    //sdlf::apply_surface(300, 0, image, screen, subj.getClipRun(2));
    //sdlf::apply_surface(300, 0, image, screen, subj.getClipRun(3));
    //sdlf::apply_surface(600, 0, image, screen, subj.getClipRun(i));

    SDL_Flip(screen);
    sdlf::delay(fps);
    i++;
    if (i>7) {
      i = 1;
    }
  }

  SDL_FreeSurface(image);
}
