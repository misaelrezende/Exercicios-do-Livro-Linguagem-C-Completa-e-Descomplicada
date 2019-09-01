#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, **matriz;
    scanf("%d", &n);

    /*  Uma vantagem do calloc (em relacao ao malloc) eh que
        o calloc realiza a alocacao ja atribuindo o valor zero em cada posicao da matriz
        Veja a pagina 227 do livro para mais detalhes.
    */
    matriz = (int**) calloc(n, sizeof(int*));
    for(i = 0; i < n; i++)
        matriz[i] = (int*) calloc(n, sizeof(int));
    
    if(matriz == NULL){
        printf("Nao foi possivel realizar a alocacao na memoria\n");
        exit(1);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j > i)
                matriz[i][j] = 1;
            else if(j < i)
                matriz[i][j] = -1;
            // o outro caso (j == i) ja foi feito
            // ao inicializar a matriz usando o calloc
        }
    }

    for(i = 0; i < n; i++)
        free(matriz[i]);
    free(matriz);
    matriz = NULL;    
    return 0;
}