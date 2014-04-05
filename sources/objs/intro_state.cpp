#include "../heads/intro_state.h"
#include "../heads/characters/dude.h"
#include <iostream>

IntroState::IntroState() : area(MAIN_MENU_AREA) {}

int IntroState::nextArea() { return area; }

void showAnimation(SDL_Surface *screen) {

}

void IntroState::init(Game &game) {
  SDL_Surface *image = NULL;
  SDL_Surface *screen = NULL;
  screen = game.screen;

  image = sdlf::loadSprite("images/background/dude.png");
  if (!image) {
      std::cout << "image null\n";
      printf("IMG_Load: %s\n", IMG_GetError());
  }

  SDL_Event event;
  int key_code;
  Timer fps;
  Dude dude;
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

    SDL_FillRect( screen, &screen->clip_rect, SDL_MapRGB( screen->format, 0, 0, 0 ) );
    showAnimation(screen);
    
    sdlf::apply_surface(0, 335, image, screen, dude.getClipRun(i));

    SDL_Flip(screen);
    sdlf::delay(fps);

    i++;
    if (i>7) {
      i = 0;
    }
  }

  SDL_FreeSurface(image);
}
