#include <stdio.h>

float somatorio(int n){
    int i;
    float soma = 0;
    for(i = 1; i <= n; i++)
        soma += (float)((i*i)+1) / (float)(i+3);
    return soma;
}

int main(){
    int n;
    float resultado;
    scanf("%d", &n);
    resultado = somatorio(n);
    printf("%f\n", resultado);
    return 0;
}