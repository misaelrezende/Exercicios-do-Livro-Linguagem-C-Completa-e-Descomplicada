#include <stdio.h>

float converteTemperatura(float f){
    float c = (f - 32.0) * (5.0/9.0);
    return c;
}

int main(){
    float fahrenheit;
    scanf("%f", &fahrenheit);
    printf("%f\n", converteTemperatura(fahrenheit));
    return 0;
}