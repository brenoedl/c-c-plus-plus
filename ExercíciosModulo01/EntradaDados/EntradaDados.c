#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(0, "portuguese");
    char nome[30];
    char sexo;
    int idade;
    float peso;
    printf("Qual o seu nome? ");
    gets(nome);
    fflush(stdin);
    printf("%s qual o seu sexo? [M / F] ", nome);
    sexo = getchar();
    printf("%s qual a sua idade? ", nome);
    scanf("%i", &idade);
    printf("%s qual o seu peso? ", nome);
    scanf("%f", &peso);
    printf("Ol� %s voc� � do sexo %c e tem %i anos de idade, seu peso atual � de %.2fKg certo?", nome, sexo, idade, peso);
}
