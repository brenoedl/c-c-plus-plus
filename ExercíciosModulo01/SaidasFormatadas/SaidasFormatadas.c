#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    printf("O %s tem %i anos de idade em %d\n", "Breno", 22, 2024) ;
    printf("Seu peso atual � de %.2fKg\n", 54.6f);
    printf("Seu sexo � %c", 'M');
}
