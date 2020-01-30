#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
    
    Crie um arquivo de teste
    para checar o funcionamento do programa
*/
/*
	Uma outra forma de passar/acessar uma matriz em uma função
	é atraves de um vetor (inclusive eh assim que a matriz é representada na memória)
	e ir acessando ele através de aritmética de ponteiros.	
*/
void salvarMatriz(int *matriz, int m, int n){
	FILE *arquivo;
	int i, j;
	arquivo = fopen("matriz.txt", "w+");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++)
			fprintf(arquivo, "%d ", matriz[n*i+j]);
		fprintf(arquivo, "\n");
	}
	fclose(arquivo);
}

int main(){
	int m, n, i, j;
	scanf("%d%d", &m, &n);
	int matriz[m][n];
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &matriz[i][j]);
	salvarMatriz(&matriz[0][0], m, n);
	return 0;
}