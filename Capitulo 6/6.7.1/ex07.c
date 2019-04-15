#include <stdio.h>

int main(){
    int X[10], i, maior, menor;
    printf("Digite os elementos do vetor: ");
    for(i = 0; i < 10; i++)
        scanf("%d", &X[i]);

    maior = X[0];
    menor = X[0];
    for(i = 0; i < 10; i++){
        if(maior < X[i])
            maior = X[i];
        else if(menor > X[i])
            menor = X[i];
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}