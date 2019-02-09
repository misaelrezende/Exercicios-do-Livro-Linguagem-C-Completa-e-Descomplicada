#include <stdio.h>

int main(){
    float graus, rad, pi = 3.141592;
    scanf("%f", &graus);
    rad = graus * pi/180;
    printf("%f", rad);
    return 0;
}