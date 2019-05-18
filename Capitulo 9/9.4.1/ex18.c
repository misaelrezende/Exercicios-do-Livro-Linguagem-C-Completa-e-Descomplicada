#include <stdio.h>
#include <math.h>
#define PI 3.1414592

int fatorial(int valor){
    int i, fatorial = 1;
    for(i = 1; i <= valor; i++)
        fatorial *= i;
    return fatorial;
}

float calcularSeno(float anguloGrau){
    int i;
    float seno = 0, anguloRadiano;
    anguloRadiano = anguloGrau * (PI / 180);
    for(i = 0; i <= 5; i++)
        seno += ((float) (pow(-1, i)) / fatorial(2 * 1 + 1))
                * pow(anguloRadiano, (2 * i + 1));
    return seno;
}

int main(){
    int angulo;
    float seno;
    scanf("%d", &angulo);
    seno = calcularSeno(angulo);
    printf("%f\n", seno);
    return 0;
}