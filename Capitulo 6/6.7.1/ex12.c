#include <stdio.h>

int main(){
    int vetor[10], i, j;
    printf("Digite os 10 numeros: ");
    for(i = 0; i < 10; i++)
        scanf("%d", &vetor[i]);
    for(i = 0; i < 10; i++)
        for(j = i + 1; j < 10; j++)
            if(vetor[i] == vetor[j])
                printf("%d ", vetor[i]);
    printf("\n");
    return 0;
}