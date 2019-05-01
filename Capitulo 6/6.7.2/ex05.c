#include <stdio.h>

int main(){
    int matriz[4][4], i, j, negativos = 0;
    printf("Digite os 16 valores da matriz: ");

    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            scanf("%d", &matriz[i][j]);

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] < 0)
                negativos++;
        }
    }
    printf("A matriz possui %d numeros negativos\n", negativos);
    return 0;
}