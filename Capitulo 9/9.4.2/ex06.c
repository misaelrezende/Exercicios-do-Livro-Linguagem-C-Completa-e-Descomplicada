#include <stdio.h>

void calcularMatrizTransposta(int matrizA[][5]){
    int i, j, temporario;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(j >= i){
                temporario = matrizA[i][j];
                matrizA[i][j] = matrizA[j][i];
                matrizA[j][i] = temporario;
            }
        }
    }
}

int main(){
    int A[5][5], i, j;
    printf("Digite os 25 elementos da matriz A: ");
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            scanf("%d", &A[i][j]);
    calcularMatrizTransposta(A);

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    return 0;
}