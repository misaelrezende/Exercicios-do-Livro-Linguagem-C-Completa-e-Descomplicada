#include <stdio.h>
#include <stdlib.h>

/*
    Programa testado no sistema operacional Ubuntu
    portanto pode haver algum erro se usado em Windows
    ou algum outro sistema.
*/

int main(){
	FILE *arquivo;
	int *vetor, i, qtdeNum, maior = -10000, menor = 10000;
	arquivo = fopen("arquivo", "rb");
	if(arquivo == NULL){
		perror("O seguinte erro ocorreu: ");
        exit(1);
	}
	fread(&qtdeNum, sizeof(int), 1, arquivo); // le qtde de numeros no arquivo
	vetor = malloc(qtdeNum * sizeof(int));
	fread(vetor, sizeof(int), qtdeNum, arquivo);
	for(i = 0; i < qtdeNum; i++){
		if(maior < vetor[i])
			maior = vetor[i];
		if(menor > vetor[i])
			menor = vetor[i];
	}
	printf("maior: %d\nmenor: %d\n", maior, menor);
	fclose(arquivo);
	return 0;
}