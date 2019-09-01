#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificarOcorrencia(int **matriz, int linha, int coluna, int valor){
    int i, j;
    for(i = 0; i < linha; i++)
        for(j = 0; j < coluna; j++)
            if(matriz[i][j] == valor)
                return 1;
    return 0;
}

int main(){
    srand(time(NULL));
    int linha, coluna, i, j, **matriz, valorAleatorio,saida;
    printf("Digite a quantidade de linhas E a quantidade de colunas da matriz: ");
    scanf("%d%d", &linha, &coluna);
    
    matriz = (int**) malloc(linha * sizeof(int*));
    for(i = 0; i < linha; i++)
        matriz[i] = (int*) malloc(coluna * sizeof(int));
    if(matriz == NULL){
        printf("Nao foi possivel alocar a matriz\n");
        exit(1);
    }

    for(i = 0; i < linha; i++)
        for(j = 0; j < coluna; j++)
            matriz[i][j] = rand() % 1000;
    
    valorAleatorio = rand() % 1000;
    saida = verificarOcorrencia(matriz, linha, coluna, valorAleatorio);
    if(saida)
        printf("O valor esta na matriz\n");
    else
        printf("O valor nao esta na matriz\n");

    for(i = 0; i < linha; i++)
        free(matriz[i]);
    free(matriz);
    matriz = NULL;
    return 0;
}