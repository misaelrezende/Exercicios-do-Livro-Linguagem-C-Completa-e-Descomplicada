#include <stdio.h>

int main(){
    int matriz[5][5], i, j, soma;
    printf("Digite os 25 elementos da matriz: ");
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            scanf("%d", &matriz[i][j]);
    
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            if(j > i)
                soma += matriz[i][j];
    printf("A soma dos elementos acima da diagonal eh %d\n", soma);    
    return 0;
}