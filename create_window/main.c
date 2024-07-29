#include<stdio.h>
#include"SDL2/SDL.h"

#define WINDOW_WIDTH 1000
#define WINDOW_HEIGHT 700

#define POINTS_COUNT 27

//static SDL_Point points[POINTS_COUNT];

float quadrat(float input){
	input = input * input;
	return input;
}

int main(){
	
	int k = 1;
	float z = 0;
	static SDL_Point y[POINTS_COUNT];
	int terminate;

	for(int i = 0; i < POINTS_COUNT; i++){
		y[i].y = WINDOW_HEIGHT - quadrat(i);
		y[i].x = i;
		printf("y[%d]: %d\n\n", i, y[i].y);
	}

/*	for(int j = 0; j < 800; ++j){
		if(y[j] < 700){
			printf("y[%d] = %f\n", j, y[j]);
		}
		else{
			terminate = j;
			break;
		}
	}

	float convertPointY(float y){
     		return -y + WINDOW_HEIGHT;
	}
*/
	SDL_Event event;
	SDL_Renderer *renderer;                                                          
	SDL_Window *window;                                                              
                                                                                 
	SDL_Init(SDL_INIT_VIDEO);
	SDL_CreateWindowAndRenderer(WINDOW_WIDTH, WINDOW_HEIGHT, 0, &window, &renderer);
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderClear(renderer);
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

	SDL_RenderDrawLines(renderer, y, POINTS_COUNT);
/*	while(k < 265){
		SDL_RenderDrawLine(renderer, k, y[k], (k - 1), (y[k] -1));
//		SDL_RenderDrawPoint(renderer, k, y[k]);
		k++;
	}
*/

//	SDL_RendererFlip flip = SDL_FLIP_HORIZONTAL | SDL_FLIP_VERTICAL;
//	SDL_RenderCopyEx(renderer, texture, &srcrect, &dstrect, angle, &center, flip);

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
