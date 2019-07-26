#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, *vetor;
	scanf("%d", &n);
	vetor = (int*) malloc(n * sizeof(int));

	printf("Digite os %d valores do vetor: ", n);
	for(i = 0; i < n; i++)
		scanf("%d", &vetor[i]);

	for(i = 0; i < n; i++)
		printf("%d ", vetor[i]);
	printf("\n");

	free(vetor);
	vetor = NULL;
	return 0;
}