#include <stdio.h>

int main(){
    float altura, raio, volume, pi = 3.141592;
    scanf("%f%f", &altura, &raio);
    volume = pi * (raio * raio) * altura;
    printf("%f", volume);
    return 0;
}