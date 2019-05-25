#include <stdio.h>

void somaParesEImpares(int *vetor, int n, int *pares, int *impares){
    int i;
    *pares = 0;
    *impares = 0;
    for(i = 0; i < n; i++){
        if(vetor[i] % 2 == 0)
            *pares += vetor[i];
        else
            *impares += vetor[i];
    }
}

int main(){
    int n, pares, impares;
    printf("Digite quanto numeros serao inseridos no vetor: ");
    scanf("%d", &n);
    int vetor[n], i;
    printf("Digite os elementos: ");
    for(i = 0; i < n; i++)
        scanf("%d", &vetor[i]);

    somaParesEImpares(vetor, n, &pares, &impares);
    printf("soma dos pares: %d\nsoma dos impares: %d\n", pares, impares);
    return 0;
}