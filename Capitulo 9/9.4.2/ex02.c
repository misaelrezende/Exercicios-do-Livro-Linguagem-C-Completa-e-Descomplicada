#include <stdio.h>
#include <math.h>
#define PI 3.1414592

void calcularVolumeArea(float raio, float *volume, float *area){
    *volume = ((4/3) * PI) + pow(raio, 3);
    *area = (4 * PI) * pow(raio, 2);
}

int main(){
    float raio, volume, area;
    scanf("%f", &raio);
    calcularVolumeArea(raio, &volume, &area);
    printf("volume: %f\narea: %f\n", volume, area);
    return 0;
}