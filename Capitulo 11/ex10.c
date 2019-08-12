#include <stdio.h>
#include <stdlib.h>
/*  Como o enunciado esta um pouco ambiguo, estou prenchendo todo o vetor
    com o mesmo valor
*/
int* preencherVetor(int n, int valor){
    int *vetor = NULL, i;
    if(n <= 0)
        return vetor;

    vetor = (int*) malloc(n * sizeof(int));
    if(vetor == NULL){
        printf("Nao foi possivel realizar a alocacao na memoria\n");
        exit(1);
    }
    for(i = 0; i < n; i++)
        vetor[i] =  valor;
    return vetor;
 }

int main(){
    int n, valor, *auxiliar;
    scanf("%d%d", &n, &valor);
    auxiliar = preencherVetor(n, valor);

    free(auxiliar);
    auxiliar = NULL;
    return 0;
}