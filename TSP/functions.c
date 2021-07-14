#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#include"data.h"

float ekdDist(point a, point b){
	float distance;
	distance = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
	return distance;
}

void pointInit(point *p[100]){
	for(int i = 0; i < 100; i += 1){
		&point[i].x = rand() % 101;
		&point[i].y = rand() % 101;
	}
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
