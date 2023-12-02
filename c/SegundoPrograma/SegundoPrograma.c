#include <stdio.h>
#include <stdlib.h>
void main() {
    char nome[10];
    printf("Qual o seu nome? ");
    scanf("%s", &nome);
    printf("Prazer em te conhecer %s.", nome);
    system("pause");
}
