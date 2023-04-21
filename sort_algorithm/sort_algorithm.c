#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int swap;
	int var[100];
	int reset = 0;
	float valueMIN = INFINITY;
	int index;

	for(int i = 0; i < 100; i += 1){
		var[i] = rand() % 10000;
	}

	void shuffle(int *array, size_t n){
		if (n > 1) {
        		size_t i;
        		for (i = 0; i < n - 1; i++){
				size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
          			int t = array[j];
          			array[j] = array[i];
          			array[i] = t;
        		}
    		}
	}

	shuffle(var, 100);

	for(int i = 0; i < 100; i++){
		printf("var[%d] = %d\n", i, var[i]);
	}
	
	for(int j = 0; j < 100; j++){

		for(int i = j; i < 100; i += 1){
			if(var[i] < valueMIN){
				valueMIN = var[i];
				index = i;
			}
			
		}
		swap = var[j];
		var[j] = var[index];
		var[index] = swap;

		valueMIN = INFINITY;
		index = 99;
	}

	printf("##########################################################\n");

	for(int i = 0; i < 100; i++){
		printf("var[%d] = %d\n", i, var[i]);
	}

	return 0;
}

