#include <stdio.h>
#include <stdlib.h>

int* preencherVetor(int n){
    int i, *vetor;
    vetor = (int*) malloc(n * sizeof(int));
    if(vetor == NULL){
        printf("Nao foi possivel alocar memoria\n");
        exit(1);
    }
    for(i = 0; i < n; i++)
        vetor[i] = i;
    return vetor;
}

int main(){
    int n, *vetor;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    
    vetor = preencherVetor(n);

    free(vetor);
    vetor = NULL;
    return 0;
}