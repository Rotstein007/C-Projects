#include <stdio.h>
#include <string.h>

int main(){
	int shit = 0;
	char satz[80];
	printf("\nPlease enter a sentencese: \n");
	fgets(satz,80,stdin);
	printf("\n%s", satz);
	printf("\nThe sentences have %li character.", strlen(satz));
	printf("\n\nsentencese[5] get a binary zero.\n");
	satz[5]='\0';
	printf("\nThe sentences have %li character.\n", strlen(satz));
	printf("\n%s\n", satz);
	return shit;
}
