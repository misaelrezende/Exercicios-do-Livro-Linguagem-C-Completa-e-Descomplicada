#include <stdio.h>

int main() {
    int i, aux, qtde, maior = 0, qtdeMaior = 0;
    scanf("%d", &qtde);
    
    for(i = 0; i < qtde; i++){
        scanf("%d", &aux);
        if(maior == aux){
            qtdeMaior++;
        }
        if(maior < aux){
            maior = aux;
            qtdeMaior = 0;
            qtdeMaior++;
        }
    }
    printf("Maior numero lido: %d\n", maior);
    printf("Quantas vezes foi lido: %d\n", qtdeMaior);
    return 0;
}