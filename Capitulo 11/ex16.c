#include <stdio.h>
#include <stdlib.h>
/*
	A matriz A originalmente é uma matriz de tamanho desconhecido n.
	Uma outra forma de passar/acessar uma matriz em uma função
	é atraves de um vetor (inclusive eh assim que a matriz é representada na memória)
	e ir acessando ele através de aritmética de ponteiros.
	
*/
int* multiplicar(int *A, int *B, int n){
	int *C, i, j;

	C = (int*) calloc(n, sizeof(int));
	if(C == NULL){
		printf("Nao foi possivel realizar a alocacao na memoria\n");
		exit(1);
	}
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			C[i] += A[i*n+j] * B[j];

	return C;
}

int main(){
	int *C, i, j, n;
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	int A[n][n], B[n];

	printf("Digite os valores da matriz: ");
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &A[i][j]);

	printf("Digite os valores do vetor: ");
	for(i = 0; i < n; i++)
		scanf("%d", &B[i]);

	C = multiplicar(&A[0][0], B, n);

	free(C);
	C = NULL;
	return 0;
}