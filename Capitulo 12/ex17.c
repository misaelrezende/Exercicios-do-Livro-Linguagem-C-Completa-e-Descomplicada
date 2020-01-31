#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
*/

int main(){
	FILE *arquivo;
	int vetor[100], i, soma = 0;
	arquivo = fopen("arquivo", "rb");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}
	fread(vetor, sizeof(int), 100, arquivo);
	for(i = 0; i < 100; i++){
		soma = soma + vetor[i];
	}
	printf("%d\n", soma);
	fclose(arquivo);
	return 0;
}