#include "../heads/sdlf_space.h"

namespace sdlf {

  SDL_Surface *loadImage(std::string path) {
    SDL_Surface *image = NULL;
    SDL_Surface *optimizedImage = NULL;

    image = IMG_Load(path.c_str());

    if (image) {
      optimizedImage = SDL_DisplayFormat(image);
      SDL_FreeSurface(image);
    }

    return optimizedImage;
  }

  void apply_surface(int x, int y, SDL_Surface *source, SDL_Surface *destination, SDL_Rect *clip = NULL) {
    SDL_Rect offset;
    offset.x = x;
    offset.y = y;

    SDL_BlitSurface(source, clip, destination, &offset);
  }

  void delay(Timer &fps) {
    if (fps.getTime() < 1000/FPS) {
      SDL_Delay( (1000/FPS) - fps.getTime());
    }
  }
}
