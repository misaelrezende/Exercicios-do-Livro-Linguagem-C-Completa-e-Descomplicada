#include <stdio.h>

int main(){
    int idade;
    scanf("%d", &idade);
    if(idade >= 5 && idade <= 7)
        printf("Infantil A");
    if(idade >= 8 && idade <= 10)
        printf("Infantil B");
    if(idade >= 11 && idade <= 13)
        printf("Juvenil A");
    if(idade >= 14 && idade <= 17)
        printf("Juvenil B");
    if(idade > 18) // estou literalmente seguindo o que o enunciado pede
        printf("Senior");
    return 0;
}