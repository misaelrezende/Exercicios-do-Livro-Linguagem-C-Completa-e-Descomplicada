#include <stdio.h>

int checarQuadradoPerfeito(int n){
    int i;
    for(i = 2; i <= n; i++){
        if(i * i == n)
            return 1;
    }
    return 0;
}

int main(){
    int numero, resultado;
    scanf("%d", &numero);
    resultado = checarQuadradoPerfeito(numero);
    if(resultado == 0)
        printf("O numero %d NAO eh quadrado perfeito\n", numero);
    else
        printf("O numero %d EH quadrado perfeito\n", numero);
    return 0;
}