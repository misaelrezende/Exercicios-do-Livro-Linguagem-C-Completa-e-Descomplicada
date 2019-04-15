#include <stdio.h>

int main(){
    int vet[8], x, y, i, soma;
    for(i = 0; i < 8; i++)
        scanf("%d", &vet[i]);
    printf("Digite duas posicoes validas do vetor (0 a 7): ");
    scanf("%d%d", &x, &y);
    soma = vet[x] + vet[y];
    printf("A soma dos valores nas posicoes %d e %d do vetor eh: %d\n", x, y, soma);
    return 0;
}