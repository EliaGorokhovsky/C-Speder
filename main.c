/* External libraries */
#include "SDL2/SDL.h"
#include "stdio.h"
/* Project files */
#include "common.h"

int main(int, char**);

int main(int argc, char* argv[])
{
    SDL_Window* window = NULL;
    SDL_Surface* screenSurface = NULL;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL could not initialize. SDL_ErrorL %s\n", SDL_GetError());
    }
    else 
    {
        window = SDL_CreateWindow(
            "Speder", 
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED, 
            SCREEN_WIDTH,
            SCREEN_HEIGHT,
            SDL_WINDOW_SHOWN
        );
        if (window == NULL)
        {
            printf("Window could not be creared. SDL_Error: %s\n", SDL_GetError());
        }
        else
        {
            screenSurface = SDL_GetWindowSurface(window);
            SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0x00, 0x00, 0x00));
            SDL_UpdateWindowSurface(window);
            SDL_Delay(2000);
            SDL_DestroyWindow(window);
            SDL_Quit();
            return 0;
        }
    }

    return 1;
}
