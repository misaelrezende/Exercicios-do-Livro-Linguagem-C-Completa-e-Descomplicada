#include <stdio.h>

float calculaIMC(float peso, float altura){
    float imc = peso / (altura * altura);
    return imc;
}

int main(){
    float peso, altura, resultado;
    printf("Digite o peso e a altura: ");
    scanf("%f%f", &peso, &altura);
    resultado = calculaIMC(peso, altura);
    printf("%f\n", resultado);
    return 0;
}