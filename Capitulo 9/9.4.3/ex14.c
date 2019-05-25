#include <stdio.h>

int retornaMenorElemento(int *vetor, int n){
    if(n == 0)
        return vetor[n];
    
    int valor = vetor[n];
    int menor = retornaMenorElemento(vetor, n-1);
    
    if(valor > menor)
        return menor;
    return valor;
}

int main(){
    int vetor[10], i, menor;
    // usando apenas 10 posicoes para simplificar o exercicio
    printf("Digite apenas 10 valores: ");

    for(i = 0; i < 10; i++)
        scanf("%d", &vetor[i]);
    menor = retornaMenorElemento(vetor, 10 - 1); // 10 - 1 pois o vetor vai de 0 a 9
    printf("O menor elemento eh %d\n", menor);
    return 0;
}