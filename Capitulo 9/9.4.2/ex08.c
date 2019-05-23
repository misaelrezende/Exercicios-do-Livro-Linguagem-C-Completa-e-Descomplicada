#include <stdio.h>

int calcularDiagonais(int A[][6]){
    int i, j, soma = 0;
    for(i = 0; i < 6; i++)
        for(j = 0; j < 6; j++)
            if(i == j || (j + i) == 5)
                soma += A[i][j];
    return soma;
}

int main(){
    int A[6][6], i, j, soma;
    printf("Digite os 36 elementos da matriz: ");
    for(i = 0; i < 6; i++)
        for(j = 0; j < 6; j++)
            scanf("%d", &A[i][j]);
    soma = calcularDiagonais(A);
    printf("%d\n", soma);
    return 0;
}