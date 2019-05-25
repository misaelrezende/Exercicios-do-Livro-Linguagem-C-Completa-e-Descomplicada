#include <stdio.h>

int main(){
    int matriz[6][6], i, j, soma = 0;
    printf("Digite os 36 elementos da matriz: ");
    for(i = 0; i < 6; i++)
        for(j = 0; j < 6; j++)
            scanf("%d", &matriz[i][j]);
            
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(i == j)
                break;
            else
                soma += matriz[i][j];
        }
    }
    printf("%d\n", soma);
    return 0;
}