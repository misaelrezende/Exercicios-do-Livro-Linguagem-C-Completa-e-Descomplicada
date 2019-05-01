#include <stdio.h>

int main(){
    int matriz[4][4], i, j, maior = 0;
    printf("Digite os 16 valores da matriz: ");

    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            scanf("%d", &matriz[i][j]);
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] > 10)
                maior++;
        }
    }
    printf("A matriz possui %d valores maiores do que 10\n", maior);
    return 0;
}