#include <stdio.h>

int main(){
    float celsius, fhar;
    scanf("%f", &celsius);
    fhar = celsius * (9.0/5.0) + 32;
    printf("%f", fhar);
    return 0;
}