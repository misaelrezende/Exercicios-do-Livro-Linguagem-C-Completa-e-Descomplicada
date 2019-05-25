#include <stdio.h>

int main(){
    float vetor[40], conj1[20], conj2[20];
    int q, i;
    printf("Digite a quantidade de numeros a serem digitados: ");
    scanf("%d", &q);
    for(i = 0; i < q; i++)
        scanf("%f", &vetor[i]);
    for(i = 0; i < 20 && i < q; i++){
        conj1[i] = (vetor[i] * vetor[i]);
        printf("%0.3f ", conj1[i]);
    }
    printf("\n");
    for(i = 0; i < 20 && i+19 < q; i++){
        conj2[i] = (vetor[i+19] * vetor[i+19]);
        printf("%0.3f ", conj2[i]);
    }
    printf("\n");
    return 0;
}