#include <stdio.h>
#include "swap.h"

int main(){

	int a = 0; 
	int b = 1;
	
	printf("vor swap:\n	a: %d\n 	b: %d\n\n", a, b);
	
	swap(&a, &b);
	
	printf("nach swap:\n	a: %d\n 	b: %d\n\n", a, b);
	
	return 0;
}
