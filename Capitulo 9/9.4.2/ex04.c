#include <stdio.h>

float calcularMedia(int vetor[]){
    int i;
    float soma = 0;
    for(i = 0; i < 10; i++)
        soma += vetor[i];
    return soma / 10;
}

int main(){
    int vetor[10], i;
    float media;
    printf("Digite as 10 notas: ");
    for(i = 0; i < 10; i++)
        scanf("%d", &vetor[i]);
    
    media = calcularMedia(vetor);
    printf("%f\n", media);
}