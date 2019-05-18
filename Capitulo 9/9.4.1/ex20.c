#include <stdio.h>

int fatorial(int valor){
    int i, fatorial = 1;
    for(i = 1; i <= valor; i++)
        fatorial *= i;
    return fatorial;
}

double calcularNumeroDeEuler(int n){
    int i;
    double e = 0;
    for(i = 0; i <= n; i++)
        e += ((double) 1 / fatorial(i));
    return e;
}

int main(){
    double resultado;
    int n;
    scanf("%d", &n);

    resultado = calcularNumeroDeEuler(n);
    printf("%lf\n", resultado);
    return 0;
}