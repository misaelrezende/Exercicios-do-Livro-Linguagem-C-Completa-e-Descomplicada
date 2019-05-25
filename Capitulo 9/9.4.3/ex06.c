#include <stdio.h>

// nAux pois preciso de um valor constante para dividir os elementos
float mediaVetor(float *vetor, int n, int nAux){
	if(n == 0)
		return (float) vetor[n] / nAux;
	float soma = (float) vetor[n] / nAux;
	return soma + mediaVetor(vetor, n-1, nAux);
}

int main(){
	int i, n;
	printf("Digite quantos elementos o vetor tera: ");
	scanf("%d", &n);

	float vetor[n], media;

	printf("Digite os valores do vetor: ");
	for(i = 0; i < n; i++)
		scanf("%f", &vetor[i]);
	// n-1 pois passo a quantidade de posicoes do vetor ( 0 a n-1 posicoes)
	media = mediaVetor(vetor, n-1, n);
	printf("%f\n", media);
	return 0;
}
