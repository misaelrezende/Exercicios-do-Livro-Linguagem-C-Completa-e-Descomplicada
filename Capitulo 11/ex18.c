#include <stdio.h>
#include <stdlib.h>

int** alocarMatriz(int linhas, int colunas){
    int i, **matriz;
    // aloca a matriz com zeros
    matriz = (int**) calloc(linhas, sizeof(int*));
    if(matriz == NULL){
        printf("Nao foi possivel realizar a alocacao na memoria\n");
		exit(1);
    }
    for(i = 0; i < linhas; i++)
        matriz[i] = (int*) calloc(colunas, sizeof(int));
    return matriz;
}

int** multiplicarMatriz(int **A, int **B, int linhasA, int colunasA,
    int linhasB, int colunasB){
    
    int i, j, k, **C = NULL;
    if(colunasA != linhasB){
        return C;
    }

    C = alocarMatriz(linhasA, colunasB);

    for(i = 0; i < linhasA; i++) // tamanho C = linhasA x colunasB
        for(j = 0; j < colunasB; j++)
            for(k = 0; k < linhasB; k++)
                C[i][j] += A[i][k] * B[k][j];

    return C;
}

int** desalocarMatriz(int **A, int linhas){
    int i;
    for(i = 0; i < linhas; i++)
        free(A[i]);
    free(A);
    return A;
}

int main(){
    int linhasA, colunasA, linhasB, colunasB;
    printf("Digite a quantidade de linhas e colunas\
    das matrizes A e B: ");
    // exemplo: A=3x3 B=2x3
    // digite: 3 3 2 3
    scanf("%d%d%d%d", &linhasA, &colunasA, &linhasB, &colunasB);

    int **A, **B, **C, i, j;
    A = alocarMatriz(linhasA, colunasA);
    B = alocarMatriz(linhasB, colunasB);

    printf("Digite os elementos da matriz A:");
    for(i = 0; i < linhasA; i++)
        for(j = 0; j < colunasA; j++)
            scanf("%d", &A[i][j]);

    printf("Digite os elementos da matriz B: ");
    for(i = 0; i < linhasB; i++)
        for(j = 0; j < colunasB; j++)
            scanf("%d", &B[i][j]);

    C = multiplicarMatriz(A, B, linhasA, colunasA, linhasB, colunasB);

    if(colunasA == linhasB){
        for(i = 0; i < linhasA; i++){
            for(j = 0; j < colunasB; j++)
                printf("%d ", C[i][j]);
            printf("\n");
        }
    }else
        printf("Nao eh possivel realizar o calculo.\n");

    A = desalocarMatriz(A, linhasA);
    B = desalocarMatriz(B, linhasB);
    C = desalocarMatriz(C, linhasA);
    
    A = NULL;
    B = NULL;
    C = NULL;
    return 0;
}