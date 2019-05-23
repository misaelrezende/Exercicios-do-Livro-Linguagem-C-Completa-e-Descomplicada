#include <stdio.h>

void dividePartes(double n, int *inteiro, double *fracionado){
    *inteiro = n;
    *fracionado = n - *inteiro;
}

int main(){
    double n, parteFracionaria;
    int parteInteira;
    scanf("%lf", &n);
    dividePartes(n, &parteInteira, &parteFracionaria);
    printf("parte inteira: %d\nparte fracionaria: %lf\n", parteInteira, parteFracionaria);
    return 0;
}