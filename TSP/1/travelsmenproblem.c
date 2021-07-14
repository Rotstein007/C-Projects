#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include"SDL2/SDL.h"
#include<time.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 700

int main(){
	srand(time(NULL));

	float weg;

	struct punkt{
		int x;
		int y;
	};

	struct punkt punkt[100];
	struct punkt anz[100];

	void punkt_init(){
		
		for(int i = 0; i < 100; i += 1){
			punkt[i].x = rand() % 801;
			anz[i].x = punkt[i].x;
			punkt[i].y = rand() % 701;
			anz[i].y = punkt[i].y;
			printf("Punkt[%d].x = %d; ", i, punkt[i].x);
			printf("y = %d\n", punkt[i].y);
		}
	}

	float euklid_abstand(struct punkt a, struct punkt b){
		float abstand;
		abstand = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
		return abstand;
	}

	int rand_startpunkt(){
	
		int spunkt = rand() % 100;
		return spunkt;	
	}

	void weg_generieren(){
		struct punkt punkt_laufend;
		int punkt_nummer;
		int abstand = 10000;
		int min_abstand = 10000;
		int start = rand_startpunkt();

		punkt_laufend.x = punkt[start].x;
		punkt_laufend.y = punkt[start].y;

		punkt[start].x = punkt[99].x;
		punkt[start].y = punkt[99].y;

		for(int j = 98; j >= 0; j -= 1){
			for(int i = 0; i <= j; i += 1){
				abstand = euklid_abstand(punkt_laufend, punkt[i]);
				if(abstand < min_abstand){
					min_abstand = abstand;
					punkt_nummer = i;
				}
			}
			punkt_laufend.x = punkt[punkt_nummer].x;
			punkt_laufend.y = punkt[punkt_nummer].y;

			punkt[punkt_nummer].x = punkt[j].x;
			punkt[punkt_nummer].y = punkt[j].y;

			min_abstand = 10000;

//			printf("Punkt: %d\n", punkt_nummer);
		}
	}

	punkt_init();
	weg_generieren();

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
