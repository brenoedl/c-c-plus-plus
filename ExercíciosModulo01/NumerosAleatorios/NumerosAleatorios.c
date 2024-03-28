#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    int n  = rand() % 10 + 1;
    printf("Sortiei o número (%i)", n);
}
