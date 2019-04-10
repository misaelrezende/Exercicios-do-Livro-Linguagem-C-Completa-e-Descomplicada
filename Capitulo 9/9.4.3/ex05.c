#include <stdio.h>

int somatorioVetor(int *v, int n){
	if(n == 0)
		return v[0];
	return v[n] + somatorioVetor(v, n-1);
}

int main(){
	int i, n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];

    printf("Digite os elementos do vetor: ");
	for(i = 0; i < n; i++)
		scanf("%d", &v[i]);
	
    printf("%d\n", somatorioVetor(v, n-1));
	return 0;
}