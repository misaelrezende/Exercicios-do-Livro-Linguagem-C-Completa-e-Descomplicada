#include <stdio.h>

int main(){
    int vetor[10], i, j;
    printf("Digite os 10 numeros: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        for(j = 0; j < i - 1; j++){
            if(vetor[i] == vetor[j]){
                printf("Digite outro numero diferente de %d: ", vetor[i]);
                i--;
            }
        }
    }
    printf("\n");
    return 0;
}