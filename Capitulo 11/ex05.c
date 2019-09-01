#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, i, valorLido, *V;
	printf("Digite a quantidade (maior que 0) de valores do vetor: ");
	do{
		scanf("%d", &N);
	}while(N <= 0);

	V = (int*) malloc(N * sizeof(int));
	if(V == NULL){
		printf("Nao foi possivel alocar memoria\n");
		exit(1);
	}
	printf("Digite os N valores (maior ou igual a 2) do vetor: ");
	for(i = 0; i < N;){
		scanf("%d", &valorLido);
		if(valorLido >= 2){
			V[i] = valorLido;
			i++;
		}
	}

	free(V);
	V = NULL;
	return 0;
}