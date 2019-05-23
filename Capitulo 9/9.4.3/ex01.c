#include <stdio.h>
#include <math.h>

float somaNCubos(int n){
    if(n == 1)
        return pow(n, 3);
    float soma = pow(n, 3);
    return soma + somaNCubos(n - 1);
}

int main(){
    int n;
    float soma;
    scanf("%d", &n);
    soma = somaNCubos(n);
    printf("%f\n", soma);
    return 0;
}