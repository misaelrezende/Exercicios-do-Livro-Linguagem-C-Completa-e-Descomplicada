#include <stdio.h>

int main() {
    int n, i, j, ultimoFatorial, fatorialAtual;
    float e;
    do{
        scanf("%d", &n);
        if(n < 1){
            printf("Digite um numero inteiro e positivo\n");
            continue;
        }
        // padronizando a variavel ultimoFatorial com o valor inicial abaixo
        // pois o menor fatorial eh 1 
        for(i = 1, e = 0, ultimoFatorial = 1; i <= n; i++){
            for(j = i; j <= i; j++){
                fatorialAtual = ultimoFatorial * j;
                ultimoFatorial = fatorialAtual;
            }
            e += 1 / (float) fatorialAtual;
        }
    }while(n < 1);
    printf("O valor de E eh: %f\n", e);

    return 0;
}