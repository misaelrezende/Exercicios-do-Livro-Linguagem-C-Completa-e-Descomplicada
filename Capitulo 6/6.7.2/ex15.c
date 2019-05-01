#include <stdio.h>

int main(){
    int A[5][5], i, j, B[5][5];
    printf("Digite os 25 elementos da matriz A: ");

    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            scanf("%d", &A[i][j]);

    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            B[i][j] = A[i][0] * A[0][j] + A[i][1] * A[1][j] + A[i][2] * A[2][j]
            + A[i][3] * A[3][j] + A[i][4] * A[4][j];
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }
    
    return 0;
}


/*          
                        OBSERVACAO:

    * Para criar o algoritmo para multiplicação de matrizes de ordem 5
    * eu primeiro criei um algoritmo de multiplicação para matrizes de
    * ordem 2. Daí é só aproveitar o algoritmo observando o padrão e 
    * aplicar na multiplicacao de uma matriz maior.
    * 
    int i, j, b[2][2] = {{1,2},{3,4}}, A[2][2];
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            A[i][j] = b[i][0] * b[0][j] + b[i][1] * b[1][j];
*/