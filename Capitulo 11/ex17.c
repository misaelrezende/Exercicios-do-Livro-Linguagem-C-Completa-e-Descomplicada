#include <stdio.h>
#include <stdlib.h>

int* somar(int *A, int n){
    int *B, i, j;
    B = (int*) calloc(n, sizeof(int));
    if(B == NULL){
		printf("Nao foi possivel realizar a alocacao na memoria\n");
		exit(1);
	}
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            B[i] += A[j*n+i];
    return B;
}

int main(){
    int n, i, j;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    int A[n][n], *B;

    printf("Digite os valores da matriz: ");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    
    B = somar(&A[0][0], n);

    free(B);
    B = NULL;
    return 0;
}