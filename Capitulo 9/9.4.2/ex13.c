#include <stdio.h>
#define troca(A, B) {int c = A; A = B; B = c; }

// essa funcao de ordenar eh um algoritmo bem basico de ordenacao
// mais conhecido como BubbleSort
void ordenar(int *vetor, int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = 1; j < n - i; j++){
            if(vetor[j] < vetor[j-1]){
                troca(vetor[j-1], vetor[j]);
            }
        }
    }
}

int main(){
    int n;
    printf("Digite quanto numeros serao inseridos no vetor: ");
    scanf("%d", &n);
    int vetor[n], i;
    printf("Digite os elementos: ");
    for(i = 0; i < n; i++)
        scanf("%d", &vetor[i]);
    ordenar(vetor, n);
    for(i = 0; i < n; i++)
        printf("%d ", vetor[i]);
    printf("\n");
    return 0;
}