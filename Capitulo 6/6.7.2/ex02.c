#include <stdio.h>

int main(){
    int matriz[4][4], i, j, maior,indiceLinha = 0, indiceColuna = 0;
    printf("Digite os 9 elementos da matriz: ");
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            scanf("%d", &matriz[i][j]);
    
    maior = matriz[0][0];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(maior < matriz[i][j]){
                maior = matriz[i][j];
                indiceLinha = i;
                indiceColuna = j;
            }
        }
    }
    indiceLinha++;
    indiceColuna++;
    printf("O maior valor eh: %d\ne a localizacao eh: Linha: %d, Coluna: %d\n",
    maior, indiceLinha, indiceColuna);
    return 0;
}