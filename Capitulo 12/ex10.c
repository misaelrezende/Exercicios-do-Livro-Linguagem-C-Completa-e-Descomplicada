#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
    
    Crie um arquivo de teste
    para checar o funcionamento do programa
*/

int** lerMatrizArquivo(char *nomeArquivo){
	FILE *arquivo;
	int i, j, aux, m, n, **matriz;
	arquivo = fopen(nomeArquivo, "r");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}

	fscanf(arquivo, "%d%d", &m,&n);
	matriz = malloc(m * sizeof(int*));
	for(i = 0; i < m; i++){
		matriz[i] = malloc(n * sizeof(int));
	}
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			fscanf(arquivo, "%d", &aux);
			matriz[i][j] = aux;
		}
	}
	fclose(arquivo);
	return matriz;
}

int main(){
	char nomeArquivo[30];
	int **matriz;
	scanf("%s", nomeArquivo);
	matriz = lerMatrizArquivo(nomeArquivo);
	return 0;
}