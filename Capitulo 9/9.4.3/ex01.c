#include <stdio.h>

void somaNCubos(int n){
    float s = 0;
    int i;
    for(i = 1; i <= n; i++){
        /* para o calculo da terceira potencia abaixo tambem poderia ser usada
           a funcao pow() da biblioteca "math.h"
        */
        s += (i * i * i);
    }
    printf("A soma eh: %0.0f\n", s);
}

int main(){
    int n;
    scanf("%d", &n);
    somaNCubos(n);
    return 0;
}