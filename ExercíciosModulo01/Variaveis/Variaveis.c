#include <stdio.h>
#include <locale.h>
void main(){
    char sexo = 'M';
    int idade = 22;
    float peso = 55.64;
    char nome[] = "Breno";
    setlocale(LC_ALL, "portuguese");
    printf("O %s � do sexo %c e tem %i anos de idade, seu peso atual � de %.2fKg", nome, sexo, idade, peso) ;
}
