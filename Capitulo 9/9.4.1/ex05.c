#include <stdio.h>

float calculaVolume(float raio){
    float volume, pi = 3.1414592;
    volume = (4/3) * pi * (raio * raio * raio);
    return volume;
}

int main(){
    float raio;
    scanf("%f", &raio);
    printf("%f\n", calculaVolume(raio));
    return 0;
}