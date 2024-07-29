#include <stdio.h>

int main(){

    long double eingabe;
    long double ausgabe=1;

    printf("\nEnter a number, \nwich you want to know the root of\n(Based on the Heron method)\n##################################################\n[DE] Geben sie eine Zahl ein,\nvon der sie die Wurzel wissen wollen\n(basierend auf dem Heron-verfahren)\n" );
    scanf("%Lf", &eingabe);
    for(int i=0; i<20; i++){
        ausgabe=(ausgabe+eingabe/ausgabe)/2;
        printf("%.100Lf\n", ausgabe);
    }

    printf("\n%.60Lf\n\n", ausgabe);

    return 0;
}
