#include <stdio.h>

int main(){
    float s = 0, numerador, denominador;

    for(numerador = 1, denominador = 1; numerador <= 99;
        numerador += 2, denominador++){
        s += numerador / denominador;
    }
    printf("O valor de S eh: %f\n", s);
    
    return 0;
}