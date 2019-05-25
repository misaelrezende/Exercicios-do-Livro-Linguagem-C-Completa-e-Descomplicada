#include <stdio.h>

int main(){
    float vetor[10], aux;
    int i, j;
    printf("Digite os 10 numeros reais do vetor: ");
    for(i = 0; i < 10; i++)
        scanf("%f", &vetor[i]);
    // existem varios algoritmos de ordenacao
    // o algoritmo abaixo tem ordem de complexidade O(n^2)
    for(i = 0; i < 10; i++)
        for(j = i + 1; j < 10; j++)
            if(vetor[i] > vetor[j]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
    for(i = 0; i < 10; i++)
        printf("%f  ", vetor[i]);
    printf("\n");
    return 0;
}