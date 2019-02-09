#include <stdio.h>

int main(){
    float raio, area, pi = 3.141592;
    scanf("%f", &raio);
    area = pi * (raio * raio);
    printf("%f", area);
    return 0;
}