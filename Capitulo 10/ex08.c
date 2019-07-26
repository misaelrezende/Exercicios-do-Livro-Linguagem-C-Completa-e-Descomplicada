#include <stdio.h>

void preencherVetor(int *vetor, int valor){
	int i;
	// preenche o vetor com o valor
	for(i = 0; i < 10; i++)
		*(vetor + i) = valor;
	// imprime os valores do vetor
	for(i = 0; i < 10; i++)
		printf("%d ", *(vetor + i));
	printf("\n");
}

int main(){
	int valor, vetor[10];
	scanf("%d", &valor);

	preencherVetor(vetor, valor);
	return 0;
}