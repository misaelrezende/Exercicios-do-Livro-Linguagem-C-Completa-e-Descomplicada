#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
*/

int main(){
	FILE *arquivo;
	int vetor[100], i;
	arquivo = fopen("arquivo", "wb+");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}
	for(i = 0; i < 100; i++)
		scanf("%d", &vetor[i]);
	fwrite(vetor, sizeof(int), 100, arquivo);
	fclose(arquivo);
	return 0;
}