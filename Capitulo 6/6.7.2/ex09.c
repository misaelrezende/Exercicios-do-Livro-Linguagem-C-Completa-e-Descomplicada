#include <stdio.h>

int main(){
    int matriz[3][3], i, j, somaColunas[] = {0, 0, 0};
    printf("Digite os 9 elementos da matriz: ");

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);

    for(j = 0; j < 3; j++)
        for(i = 0; i < 3; i++)
            somaColunas[j] += matriz[i][j];
    
    for(i = 0; i < 3; i++)
        printf("%d ", somaColunas[i]);
    printf("\n");
    return 0;
}