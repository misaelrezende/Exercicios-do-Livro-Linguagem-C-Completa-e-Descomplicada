#include <stdio.h>
#include <math.h>
#define PI 3.1414592

int fatorial(int valor){
    int i, fatorial = 1;
    for(i = 1; i <= valor; i++)
        fatorial *= i;
    return fatorial;
}

float calcularCosseno(int anguloGrau){
    int i;
    float cosseno = 0, anguloRadiano;
    anguloRadiano = anguloGrau * (PI / 180);
    for(i = 0; i <= 5; i++)
        cosseno += ((float) (pow(-1, i)) / fatorial(2 * i))
                    * pow(anguloRadiano, 2 * i);
    return cosseno;
}

int main(){
    int angulo;
    float cosseno;
    scanf("%d", &angulo);
    cosseno = calcularCosseno(angulo);
    printf("%f\n", cosseno);
    return 0;
}