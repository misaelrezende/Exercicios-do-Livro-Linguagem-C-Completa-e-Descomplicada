#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
*/

void salvarVetor(int *vetor, int tamanho){
	FILE *arquivo;
	int i;
	arquivo = fopen("vetor.txt", "w+");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}

	for(i = 0; i < tamanho; i++)
		fprintf(arquivo, "%d\n", vetor[i]);
	fclose(arquivo);
}

int main(){
	int tamanho, i;
	scanf("%d", &tamanho);
	int vetor[tamanho];
	for(i = 0; i < tamanho; i++)
		scanf("%d", &vetor[i]);
	salvarVetor(vetor, tamanho);
	return 0;
}