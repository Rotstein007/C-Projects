#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include"SDL2/SDL.h"
#include<time.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 700

int main(){

	SDL_Event event;
    	SDL_Renderer *renderer;
    	SDL_Window *window;

    	SDL_Init(SDL_INIT_VIDEO);
    	SDL_CreateWindowAndRenderer(WINDOW_WIDTH, WINDOW_HEIGHT, 0, &window, &renderer);
    	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    	SDL_RenderClear(renderer);
    	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
																																																																																																																												
	for (int j = 0; j < 1; j++){
		punkt_init();
    		for (int i = 0; i < 100; i += 1){
			SDL_RenderDrawPoint(renderer, anz[i].x, anz[i].y);
			SDL_RenderDrawPoint(renderer, anz[i].x, anz[i].y + 1);
			SDL_RenderDrawPoint(renderer, anz[i].x, anz[i].y - 1);
			SDL_RenderDrawPoint(renderer, anz[i].x + 1, anz[i].y);
			SDL_RenderDrawPoint(renderer, anz[i].x - 1, anz[i].y);
			SDL_RenderDrawPoint(renderer, anz[i].x + 1, anz[i].y + 1);
			SDL_RenderDrawPoint(renderer, anz[i].x + 1, anz[i].y - 1);
			SDL_RenderDrawPoint(renderer, anz[i].x-1, anz[i].y -1);
			SDL_RenderDrawPoint(renderer, anz[i].x-1, anz[i].y+1);
		}
	}

    	SDL_RenderPresent(renderer);

    	while (1) {
        	if (SDL_PollEvent(&event) && event.type == SDL_QUIT)
            	break;
    	}
    	SDL_DestroyRenderer(renderer);
    	SDL_DestroyWindow(window);
    	SDL_Quit();

    	return 0;
}
