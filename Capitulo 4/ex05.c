#include <stdio.h>
#include <math.h> // biblioteca que contem a funcao pow (potenciacao) e sqrt (raiz quadrada)
int main(){
    float n, quad, raiz;
    scanf("%f", &n);
    if(n > 0){
        quad = pow(n, 2); // ou quad = n * n;
        raiz = sqrt(n);
        printf("%.2f\n", quad);
        printf("%.2f", raiz);
    }
    return 0;
}