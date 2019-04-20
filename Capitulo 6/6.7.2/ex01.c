#include <stdio.h>

int main(){
    int matriz[3][3], i, j, menor;
    printf("Digite os 9 elementos da matriz: ");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);

    menor = matriz[0][0];
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            if(menor > matriz[i][j])
                menor = matriz[i][j];

    printf("O menor valor eh: %d\n", menor);
    return 0;
}