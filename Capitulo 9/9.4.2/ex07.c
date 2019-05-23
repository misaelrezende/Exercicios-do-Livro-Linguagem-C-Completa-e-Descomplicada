#include <stdio.h>

int calcularSomaDosElementos(int matriz[][10]){
    int i, j, soma = 0;
    for(i = 0; i < 10; i++)
        for(j = 0; j < 10; j++)
            soma += matriz[i][j];
    return soma;
}

int main(){
    int matriz[10][10], i, j, soma;
    printf("Digite os 100 valores da matriz: ");
    for(i = 0; i < 10; i++)
        for(j = 0; j < 10; j++)
            scanf("%d", &matriz[i][j]);
    soma = calcularSomaDosElementos(matriz);
    printf("%d\n", soma);
    return 0;
}