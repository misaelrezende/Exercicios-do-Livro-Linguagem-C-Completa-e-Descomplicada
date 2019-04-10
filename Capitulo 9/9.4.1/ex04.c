#include <stdio.h>

float calculaVolume(float altura, float raio){
    float volume, pi = 3.1414592;
    volume = pi * (raio * raio) * altura;
    return volume;
}

int main(){
    float altura, raio;
    scanf("%f%f", &altura, &raio);
    printf("%f\n", calculaVolume(altura, raio));
    return 0;
}