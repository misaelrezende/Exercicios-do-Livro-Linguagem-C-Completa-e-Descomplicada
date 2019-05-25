#include <stdio.h>
#include <math.h>

int main(){
    int i;
    float vetor[10], media = 0, variancia = 0, d;
    printf("Digite os 10 numeros do vetor: ");
    
    for(i = 0; i < 10; i++){
        scanf("%f", &vetor[i]);
        media = (media + vetor[i]) / 9;
    }
    for(i = 0; i < 10; i++)
        variancia = pow(vetor[i] - media, 2);
    
    d = sqrt(variancia);
    printf("Desvio padrao: %f\n", d);
    return 0;
}