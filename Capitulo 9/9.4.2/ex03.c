#include <stdio.h>

int calcularSomaVetor(int *vetor){
    int soma = 0, i;
    for(i = 0; i < 10; i++)
        soma += vetor[i];
    return soma;
}

int main(){
    int i, vetor[10], soma;
    printf("Digite os 10 elementos: ");
    for(i = 0; i < 10; i++)
        scanf("%d", &vetor[i]);
    soma = calcularSomaVetor(vetor);
    printf("%d\n", soma);
    return 0;
}