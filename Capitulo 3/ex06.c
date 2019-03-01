#include <stdio.h>

int main(){
    float km_h, met_seg;
    scanf("%f", &km_h);
    met_seg = km_h / 3.6;
    printf("%f", met_seg);
    return 0;
}