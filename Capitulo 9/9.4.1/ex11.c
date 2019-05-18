#include <stdio.h>

int calculaPotencia(int x, int y){
    int resultado = x, i;
    for(i = 2; i <= y; i++)
        resultado *= x;
    return resultado;
}

int main(){
    int x, y, resultado;
    scanf("%d%d", &x, &y);
    resultado = calculaPotencia(x, y);
    printf("%d\n", resultado);
    return 0;
}