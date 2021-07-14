#include <stdio.h>

int main() {
    int eingabe;
    int i;
    printf("This programm adds each number up to the number\n you entered.");
    scanf("%x", &eingabe);
    printf("You entered %i !", eingabe);
    for (i = 0; i <= eingabe; i++) {
        printf("test");
    }
    printf("The result is: %i", eingabe);

    return 0;
} 
