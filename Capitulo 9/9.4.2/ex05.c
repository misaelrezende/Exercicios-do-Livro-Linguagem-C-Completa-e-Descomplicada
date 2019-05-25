#include <stdio.h>
#include <math.h>

float calcularMedia(float vetor[], int n){
    int i;
    float soma = 0;
    for(i = 0; i < n; i++)
        soma += vetor[i];
    return (float) soma / n;
}

float calcularVariancia(float vetor[], int n){
    int i;
    float variancia = 0, media;
    media = calcularMedia(vetor, n);
    
    for(i = 0; i < n; i++)
        variancia += (float) pow(vetor[i] - media, 2) / (float) (n - 1);
    
    return variancia;
}

float calcularDesvioPadrao(float vetor[], int n){
    float desvio, variancia;
    variancia = calcularVariancia(vetor, n);
    desvio = sqrt(variancia);
    return desvio;
}

int main(){
    int n, i;
    printf("Digite a quantidade de numeros que o vetor tera: ");
    scanf("%d", &n);
    
    float vetor[n], d;
    printf("Digite os elementos do vetor: ");
    for(i = 0; i < n; i++)
        scanf("%f", &vetor[i]);

    d = calcularDesvioPadrao(vetor, n);
    printf("%f\n", d);
    return 0;
}