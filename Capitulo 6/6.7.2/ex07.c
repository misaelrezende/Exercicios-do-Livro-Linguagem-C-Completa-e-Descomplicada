#include <stdio.h>

int main(){
    int matriz[3][3], i, j, soma = 0;
    printf("Digite os 9 valores: ");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            if(i + j == 2)
                soma += matriz[i][j];
    printf("A soma dos elementos da diagonal secundaria eh %d\n", soma);
    return 0;
}