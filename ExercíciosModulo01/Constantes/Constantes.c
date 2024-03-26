#include <stdio.h>
#include <locale.h>
void main(){
    const char SEXO = 'M';
    const int IDADE = 22;
    const float PESO = 55.64;
    const char NOME[] = "Breno";
    setlocale(LC_ALL, "portuguese");
    printf("O %s é do sexo %c e tem %i anos de idade, seu peso atual é de %.2fKg", NOME, SEXO, IDADE, PESO) ;
}
